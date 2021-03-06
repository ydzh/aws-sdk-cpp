add_project(aws-cpp-sdk-rekognition "C++ SDK for the AWS rekognition service" aws-cpp-sdk-core)

file(GLOB AWS_REKOGNITION_HEADERS
    "include/aws/rekognition/*.h"
)

file(GLOB AWS_REKOGNITION_MODEL_HEADERS
    "include/aws/rekognition/model/*.h"
)

file(GLOB AWS_REKOGNITION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_REKOGNITION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB REKOGNITION_UNIFIED_HEADERS
    ${AWS_REKOGNITION_HEADERS}
    ${AWS_REKOGNITION_MODEL_HEADERS}
)

file(GLOB REKOGNITION_UNITY_SRC
    ${AWS_REKOGNITION_SOURCE}
    ${AWS_REKOGNITION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("REKOGNITION" REKOGNITION_UNITY_SRC)
endif()

file(GLOB REKOGNITION_SRC
    ${REKOGNITION_UNIFIED_HEADERS}
    ${REKOGNITION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rekognition" FILES ${AWS_REKOGNITION_HEADERS})
        source_group("Header Files\\aws\\rekognition\\model" FILES ${AWS_REKOGNITION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_REKOGNITION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_REKOGNITION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(REKOGNITION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${REKOGNITION_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_REKOGNITION_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${REKOGNITION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_REKOGNITION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rekognition)
install (FILES ${AWS_REKOGNITION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rekognition/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()



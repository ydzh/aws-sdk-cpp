﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/Rule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{
  class AWS_CLOUDWATCHEVENTS_API ListRulesResult
  {
  public:
    ListRulesResult();
    ListRulesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRulesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = std::move(value); }

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline ListRulesResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline ListRulesResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline ListRulesResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <zonbook> <simpara>The rules that match the specified criteria.</simpara>
     * </zonbook> <xhtml> <p>The rules that match the specified criteria.</p> </xhtml>
     */
    inline ListRulesResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <zonbook> <simpara>Indicates whether there are additional results to retrieve.
     * If there are no more results, the value is null.</simpara> </zonbook> <xhtml>
     * <p>Indicates whether there are additional results to retrieve. If there are no
     * more results, the value is null.</p> </xhtml>
     */
    inline ListRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Rule> m_rules;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/VaultAccessPolicy.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>SetVaultAccessPolicy input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SetVaultAccessPolicyInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API SetVaultAccessPolicyRequest : public GlacierRequest
  {
  public:
    SetVaultAccessPolicyRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultAccessPolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultAccessPolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultAccessPolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultAccessPolicyRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultAccessPolicyRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultAccessPolicyRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The vault access policy as a JSON string.</p>
     */
    inline const VaultAccessPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The vault access policy as a JSON string.</p>
     */
    inline void SetPolicy(const VaultAccessPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault access policy as a JSON string.</p>
     */
    inline void SetPolicy(VaultAccessPolicy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The vault access policy as a JSON string.</p>
     */
    inline SetVaultAccessPolicyRequest& WithPolicy(const VaultAccessPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The vault access policy as a JSON string.</p>
     */
    inline SetVaultAccessPolicyRequest& WithPolicy(VaultAccessPolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    VaultAccessPolicy m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws

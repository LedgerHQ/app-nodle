/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Modules names
static const char* STR_MO_SYSTEM = "System";
static const char* STR_MO_TIMESTAMP = "Timestamp";
static const char* STR_MO_BALANCES = "Balances";
static const char* STR_MO_COMPANYRESERVE = "Companyreserve";
static const char* STR_MO_INTERNATIONALRESERVE = "Internationalreserve";
static const char* STR_MO_USARESERVE = "Usareserve";
static const char* STR_MO_VESTING = "Vesting";
static const char* STR_MO_MANDATE = "Mandate";
static const char* STR_MO_TECHNICALCOMMITTEE = "Technicalcommittee";
static const char* STR_MO_TECHNICALMEMBERSHIP = "Technicalmembership";
static const char* STR_MO_VALIDATORSSET = "Validatorsset";
static const char* STR_MO_SESSION = "Session";
static const char* STR_MO_UTILITY = "Utility";
static const char* STR_MO_MULTISIG = "Multisig";
static const char* STR_MO_EMERGENCYSHUTDOWN = "Emergencyshutdown";
static const char* STR_MO_ALLOCATIONS = "Allocations";
static const char* STR_MO_ALLOCATIONSORACLES = "Allocationsoracles";
static const char* STR_MO_SUDO = "Sudo";

// Methods names
static const char* STR_ME_FILL_BLOCK = "Fill block";
static const char* STR_ME_REMARK = "Remark";
static const char* STR_ME_SET_HEAP_PAGES = "Set heap pages";
static const char* STR_ME_SET_CODE = "Set code";
static const char* STR_ME_SET_CODE_WITHOUT_CHECKS = "Set code without checks";
static const char* STR_ME_REMARK_WITH_EVENT = "Remark with event";
static const char* STR_ME_SET = "Set";
static const char* STR_ME_TRANSFER = "Transfer";
static const char* STR_ME_SET_BALANCE = "Set balance";
static const char* STR_ME_FORCE_TRANSFER = "Force transfer";
static const char* STR_ME_TRANSFER_KEEP_ALIVE = "Transfer keep alive";
static const char* STR_ME_TRANSFER_ALL = "Transfer all";
static const char* STR_ME_FORCE_UNRESERVE = "Force unreserve";
static const char* STR_ME_SPEND = "Spend";
static const char* STR_ME_TIP = "Tip";
static const char* STR_ME_APPLY_AS = "Apply as";
static const char* STR_ME_CLAIM = "Claim";
static const char* STR_ME_ADD_VESTING_SCHEDULE = "Add vesting schedule";
static const char* STR_ME_CANCEL_ALL_VESTING_SCHEDULES = "Cancel all vesting schedules";
static const char* STR_ME_OVERWRITE_VESTING_SCHEDULES = "Overwrite vesting schedules";
static const char* STR_ME_APPLY = "Apply";
static const char* STR_ME_SET_MEMBERS = "Set members";
static const char* STR_ME_EXECUTE = "Execute";
static const char* STR_ME_PROPOSE = "Propose";
static const char* STR_ME_VOTE = "Vote";
static const char* STR_ME_CLOSE = "Close";
static const char* STR_ME_DISAPPROVE_PROPOSAL = "Disapprove proposal";
static const char* STR_ME_ADD_MEMBER = "Add member";
static const char* STR_ME_REMOVE_MEMBER = "Remove member";
static const char* STR_ME_SWAP_MEMBER = "Swap member";
static const char* STR_ME_RESET_MEMBERS = "Reset members";
static const char* STR_ME_CHANGE_KEY = "Change key";
static const char* STR_ME_SET_PRIME = "Set prime";
static const char* STR_ME_CLEAR_PRIME = "Clear prime";
static const char* STR_ME_SET_KEYS = "Set keys";
static const char* STR_ME_PURGE_KEYS = "Purge keys";
static const char* STR_ME_BATCH = "Batch";
static const char* STR_ME_BATCH_ALL = "Batch all";
static const char* STR_ME_AS_MULTI_THRESHOLD_1 = "As multi threshold 1";
static const char* STR_ME_AS_MULTI = "As multi";
static const char* STR_ME_APPROVE_AS_MULTI = "Approve as multi";
static const char* STR_ME_CANCEL_AS_MULTI = "Cancel as multi";
static const char* STR_ME_TOGGLE = "Toggle";
static const char* STR_ME_ALLOCATE = "Allocate";
static const char* STR_ME_SUDO = "Sudo";
static const char* STR_ME_SUDO_UNCHECKED_WEIGHT = "Sudo unchecked weight";
static const char* STR_ME_SET_KEY = "Set key";
static const char* STR_ME_SUDO_AS = "Sudo as";

// Items names
static const char* STR_IT_ratio = "Ratio";
static const char* STR_IT_remark = "Remark";
static const char* STR_IT_pages = "Pages";
static const char* STR_IT_code = "Code";
static const char* STR_IT_items = "Items";
static const char* STR_IT_keys = "Keys";
static const char* STR_IT_prefix = "Prefix";
static const char* STR_IT_subkeys = "Subkeys";
static const char* STR_IT_now = "Now";
static const char* STR_IT_dest = "Dest";
static const char* STR_IT_amount = "Amount";
static const char* STR_IT_who = "Who";
static const char* STR_IT_new_free = "New free";
static const char* STR_IT_new_reserved = "New reserved";
static const char* STR_IT_source = "Source";
static const char* STR_IT_keep_alive = "Keep alive";
static const char* STR_IT_to = "To";
static const char* STR_IT_call = "Call";
static const char* STR_IT_schedule = "Schedule";
static const char* STR_IT_funds_collector = "Funds collector";
static const char* STR_IT_limit_to_free_balance = "Limit to free balance";
static const char* STR_IT_new_schedules = "New schedules";
static const char* STR_IT_new_members = "New members";
static const char* STR_IT_prime = "Prime";
static const char* STR_IT_old_count = "Old count";
static const char* STR_IT_proposal = "Proposal";
static const char* STR_IT_length_bound = "Length bound";
static const char* STR_IT_threshold = "Threshold";
static const char* STR_IT_index = "Index";
static const char* STR_IT_approve = "Approve";
static const char* STR_IT_proposal_hash = "Proposal hash";
static const char* STR_IT_proposal_weight_bound = "Proposal weight bound";
static const char* STR_IT_remove = "Remove";
static const char* STR_IT_add = "Add";
static const char* STR_IT_members = "Members";
static const char* STR_IT_new_ = "New";
static const char* STR_IT_proof = "Proof";
static const char* STR_IT_calls = "Calls";
static const char* STR_IT_as_origin = "As origin";
static const char* STR_IT_other_signatories = "Other signatories";
static const char* STR_IT_maybe_timepoint = "Maybe timepoint";
static const char* STR_IT_store_call = "Store call";
static const char* STR_IT_max_weight = "Max weight";
static const char* STR_IT_call_hash = "Call hash";
static const char* STR_IT_timepoint = "Timepoint";
static const char* STR_IT_weight = "Weight";

#ifdef __cplusplus
}
#endif
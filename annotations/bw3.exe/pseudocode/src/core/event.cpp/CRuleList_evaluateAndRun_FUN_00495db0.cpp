// Name: core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0
// Address: 00495db0
// Address Range: [[00495db0, 00495df4]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CRuleList_findFirst_FUN_00495d60(this_ptr);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->events[iVar1]);
  return 1;
}

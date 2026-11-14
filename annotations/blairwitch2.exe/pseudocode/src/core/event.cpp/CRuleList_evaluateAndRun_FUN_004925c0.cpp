// Name: core_event.cpp_CRuleList_evaluateAndRun_FUN_004925c0
// Address: 004925c0
// Address Range: [[004925c0, 00492604]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004925c0(CRuleList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CRuleList_findFirst_FUN_00492570(this_ptr);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->events[iVar1]);
  return 1;
}

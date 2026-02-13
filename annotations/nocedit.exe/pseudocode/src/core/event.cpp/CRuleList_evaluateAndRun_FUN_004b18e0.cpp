// Name: core_event.cpp_CRuleList_evaluateAndRun_FUN_004b18e0
// Address: 004b18e0
// Address Range: [[004b18e0, 004b1924]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004b18e0(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004b18e0(CRuleList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CRuleList_findFirst_FUN_004b1890(this_ptr);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->events[iVar1]);
  return 1;
}

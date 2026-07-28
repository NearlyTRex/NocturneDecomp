// Name: core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890
// Address: 00481890
// Address Range: [[00481890, 004818d4]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(CRuleList *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CRuleList_findFirst_FUN_00481840(this_ptr);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,this_ptr->events[iVar1]);
  return 1;
}

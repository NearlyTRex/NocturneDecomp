// Name: core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890
// Address: 00481890
// Address Range: [[00481890, 004818d4]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(int param_1)

#include "nocturne.h"

uint __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(int param_1)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CRuleList_findFirst_FUN_00481840(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,iVar1 * 100 + param_1 + 0x1f8)
  ;
  return 1;
}

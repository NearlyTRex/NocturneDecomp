// Name: core_event.cpp_CRuleList_findFirst_FUN_004aaee0
// Address: 004aaee0
// Address Range: [[004aaee0, 004aaf21]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_findFirst_FUN_004aaee0(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_findFirst_FUN_004aaee0(CRuleList *this_ptr)

{
  int iVar1;
  int iVar2;
  CRuleList *condition_expression;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    condition_expression = this_ptr + 4;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,(char *)condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 100;
    } while (iVar2 < *(int *)this_ptr);
  }
  return -1;
}

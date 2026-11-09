// Name: core_event.cpp_CRuleList_findFirst_FUN_00492570
// Address: 00492570
// Address Range: [[00492570, 004925b1]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00492570(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00492570(CRuleList *this_ptr)

{
  int iVar1;
  int iVar2;
  CRuleList *condition_expression;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    condition_expression = this_ptr + 4;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,(char *)condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 100;
    } while (iVar2 < *(int *)this_ptr);
  }
  return -1;
}

// Name: core_event.cpp_CRuleList_findFirst_FUN_00495d60
// Address: 00495d60
// Address Range: [[00495d60, 00495da1]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00495d60(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00495d60(CRuleList *this_ptr)

{
  int iVar1;
  int iVar2;
  CRuleList *condition_expression;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    condition_expression = this_ptr + 4;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,(char *)condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 100;
    } while (iVar2 < *(int *)this_ptr);
  }
  return -1;
}

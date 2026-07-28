// Name: core_event.cpp_CRuleList_findFirst_FUN_00481840
// Address: 00481840
// Address Range: [[00481840, 00481881]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00481840(CRuleList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00481840(CRuleList *this_ptr)

{
  int iVar1;
  int iVar2;
  char (*condition_expression) [100];
  
  iVar2 = 0;
  if (0 < this_ptr->list_size) {
    condition_expression = this_ptr->conditions;
    do {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,*condition_expression);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      condition_expression = condition_expression + 1;
    } while (iVar2 < this_ptr->list_size);
  }
  return -1;
}

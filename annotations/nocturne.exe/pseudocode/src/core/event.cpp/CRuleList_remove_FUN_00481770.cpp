// Name: core_event.cpp_CRuleList_remove_FUN_00481770
// Address: 00481770
// Address Range: [[00481770, 00481834]]
// Convention: unknown
// Signature: void core_event_cpp_CRuleList_remove_FUN_00481770(int *param_1,int param_2)

#include "nocturne.h"

void core_event_cpp_CRuleList_remove_FUN_00481770(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xcef;
    core_main_c_FUN_004c8440("CRuleList::remove - invalid index");
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  memmove
            (param_1 + param_2 * 0x19 + 1,param_1 + (param_2 + 1) * 0x19 + 1,
             ((iVar1 + -1) - param_2) * 100);
  memmove
            (param_1 + param_2 * 0x19 + 0x7e,param_1 + (param_2 + 1) * 0x19 + 0x7e,
             (*param_1 - param_2) * 100);
  return;
}

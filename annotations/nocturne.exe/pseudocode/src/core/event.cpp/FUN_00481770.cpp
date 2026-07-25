// Name: FUN_00481770
// Address: 00481770
// Address Range: [[00481770, 00481834]]
// Convention: unknown
// Signature: void FUN_00481770(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481770(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01cc4800 = "..\\core\\event.cpp";
    _DAT_01cc4804 = 0xcef;
    FUN_004c8440("CRuleList::remove - invalid index");
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

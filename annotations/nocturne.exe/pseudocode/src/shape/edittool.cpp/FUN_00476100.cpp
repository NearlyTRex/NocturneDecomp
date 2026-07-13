// Name: FUN_00476100
// Address: 00476100
// Address Range: [[00476100, 00476151]]
// Convention: unknown
// Signature: void FUN_00476100(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476100(int param_1,uint param_2,uint param_3)

{
  if (0 < *(int *)(param_1 + 0x130)) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0xe22;
    FUN_004c8440("CPickList::remove - can't do this after enableing/disabling items (yet)");
  }
  FUN_00473f10(param_1,param_2,param_3);
  return;
}

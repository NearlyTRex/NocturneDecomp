// Name: FUN_0049edc0
// Address: 0049edc0
// Address Range: [[0049edc0, 0049edee]]
// Convention: unknown
// Signature: int FUN_0049edc0(undefined4 param_1)

#include "nocturne.h"

int FUN_0049edc0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510dd0(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x80,3,&DAT_005f22b0);
  *(byte ***)(iVar1 + -0x44) = &PTR_FUN_005f6574;
  return iVar1 + -0x80;
}

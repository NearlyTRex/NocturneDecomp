// Name: FUN_00532850
// Address: 00532850
// Address Range: [[00532850, 00532922]]
// Convention: unknown
// Signature: int FUN_00532850(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00532850(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00604760);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x1fbc0);
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_00604614;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  }
  iVar1 = FUN_00522fc0(param_1 + 0x1fbc4,0);
  iVar1 = FUN_00533060(iVar1 + -0x139f4,0);
  iVar1 = FUN_0040ee30(iVar1 + -0x8bf4,0);
  iVar1 = FUN_00441ca0(iVar1 + -0x93c,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2b48,0);
  iVar1 = FUN_00408730(iVar1 + -0x158,1);
  if ((param_2 & 2) != 0) {
    FUN_005c0344(iVar1);
    return iVar1;
  }
  return iVar1;
}

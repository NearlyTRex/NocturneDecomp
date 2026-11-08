// Name: FUN_0050f1b0
// Address: 0050f1b0
// Address Range: [[0050f1b0, 0050f288]]
// Convention: unknown
// Signature: int FUN_0050f1b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0050f1b0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00603b30);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x47ac0);
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_006039e4;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  }
  *(uint *)(param_1 + 0x47ac0) = 0;
  iVar1 = FUN_00522fc0(param_1 + 0x46e90,0);
  iVar1 = FUN_0043e620(iVar1 + -0x3ab60,0);
  iVar1 = FUN_0040ee30(iVar1 + -0x8d54,0);
  iVar1 = FUN_00441ca0(iVar1 + -0x93c,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2b48,0);
  iVar1 = FUN_00408730(iVar1 + -0x158,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}

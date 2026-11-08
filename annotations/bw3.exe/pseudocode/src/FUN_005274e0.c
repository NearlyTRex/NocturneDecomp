// Name: FUN_005274e0
// Address: 005274e0
// Address Range: [[005274e0, 005275b2]]
// Convention: unknown
// Signature: int FUN_005274e0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005274e0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e3830);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x20810);
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005e36e4;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  }
  iVar1 = FUN_004fa8c0(param_1 + 0x20814,0);
  iVar1 = FUN_0050ad40(iVar1 + -0x13a48,0);
  iVar1 = FUN_00410370(iVar1 + -0x9570,0);
  iVar1 = FUN_0043f900(iVar1 + -0x954,0);
  iVar1 = FUN_0054bf80(iVar1 + -0x2db0,0);
  iVar1 = FUN_00408770(iVar1 + -0x158,1);
  if ((param_2 & 2) != 0) {
    FUN_005a30c4(iVar1);
    return iVar1;
  }
  return iVar1;
}

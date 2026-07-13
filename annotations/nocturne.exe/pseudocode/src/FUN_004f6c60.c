// Name: FUN_004f6c60
// Address: 004f6c60
// Address Range: [[004f6c60, 004f6d83]]
// Convention: unknown
// Signature: int FUN_004f6c60(int param_1)

#include "nocturne.h"

int FUN_004f6c60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte auStack_40 [24];
  byte local_28 [24];
  
  iVar1 = FUN_00461090(DAT_005ae704);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x510) != 0)) {
    if ((2 < *(int *)(param_1 + 0x4b8)) && (iVar1 = FUN_00461090(DAT_005ae704), iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)(param_1 + 0x4c0) != 0) && (*(int *)(param_1 + 0x2cc) != 3)) &&
        (*(int *)(param_1 + 0x2cc) != 4)) &&
       ((*(int *)(param_1 + 0x71c) != 0 && (iVar1 = FUN_00461090(DAT_005ae704), iVar1 == 0)))) {
      return 0;
    }
    FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_28,0);
    iVar1 = FUN_0041ceb0(uVar2);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x504) == 0) {
LAB_004f6d5e:
        FUN_004544d0(param_1 + 0x150,0,0xffffffff);
        FUN_00409f60(param_1);
        return iVar1;
      }
      iVar3 = FUN_00461090(DAT_005ae704);
      if (iVar3 == 0) goto LAB_004f6d5e;
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_40);
      FUN_0041dcc0(uVar2);
    }
    FUN_00409f60(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

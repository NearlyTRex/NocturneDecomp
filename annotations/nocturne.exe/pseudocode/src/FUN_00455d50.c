// Name: FUN_00455d50
// Address: 00455d50
// Address Range: [[00455d50, 00455e03]]
// Convention: unknown
// Signature: int FUN_00455d50(int param_1)

#include "nocturne.h"

int FUN_00455d50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte auStack_34 [24];
  byte local_1c [24];
  
  if (2 < *(int *)(param_1 + 0x9c0)) {
    return 0;
  }
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x9cc) != 0) {
      iVar3 = FUN_00461090(DAT_005ae704);
      if (iVar3 != 0) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_34);
        FUN_0041dcc0(uVar1);
        goto LAB_00455dcd;
      }
    }
    FUN_004544d0(param_1 + 0x150,0,0xffffffff);
    FUN_00409f60(param_1);
    return iVar2;
  }
LAB_00455dcd:
  FUN_00409f60(param_1);
  return iVar2;
}

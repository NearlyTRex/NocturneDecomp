// Name: FUN_0041ea00
// Address: 0041ea00
// Address Range: [[0041ea00, 0041eaec]]
// Convention: unknown
// Signature: int FUN_0041ea00(int param_1)

#include "nocturne.h"

int FUN_0041ea00(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_20 [24];
  
  iVar1 = FUN_00454530(param_1 + 0x150);
  if ((*(int *)(iVar1 + 0x110) < 1) ||
     ((iVar1 = FUN_00461090(DAT_005ae704), iVar1 == 0 && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x5ec) == 0) && (iVar1 = FUN_00461090(DAT_005ae704), iVar1 != 0)) {
    return 0;
  }
  FUN_00460a00(0x01B4D738,param_1 + 0x20);
  FUN_00460aa0(0x01B4D738,param_1 + 0x30,0);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar1 = FUN_0041ceb0(uVar2);
  if (iVar1 != 0) {
    FUN_004544d0(param_1 + 0x150,*(uint *)(param_1 + 0x308),0xffffffff);
  }
  thunk_FUN_004cdbc0(0x01B4D738);
  return iVar1;
}

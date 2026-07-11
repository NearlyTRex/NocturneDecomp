// Name: FUN_00553f50
// Address: 00553f50
// Address Range: [[00553f50, 00553fdb]]
// Convention: unknown
// Signature: int FUN_00553f50(int param_1)

#include "nocturne.h"

int FUN_00553f50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  }
  FUN_00409f60(param_1);
  uVar1 = DAT_005ae704;
  *(uint *)(param_1 + 0x56c) = 0;
  iVar3 = FUN_00461090(uVar1);
  if ((iVar3 == 0) && (iVar2 != 0)) {
    *(uint *)(param_1 + 0x56c) = 1;
    return iVar2;
  }
  return iVar2;
}

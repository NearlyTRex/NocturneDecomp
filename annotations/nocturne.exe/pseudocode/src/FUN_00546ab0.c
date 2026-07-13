// Name: FUN_00546ab0
// Address: 00546ab0
// Address Range: [[00546ab0, 00546b44]]
// Convention: unknown
// Signature: int FUN_00546ab0(int param_1)

#include "nocturne.h"

int FUN_00546ab0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_28 [24];
  
  FUN_00460a00(DAT_005ae704,param_1 + 0x20);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_28,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x2d0) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x40400000;
    }
    FUN_004544d0(param_1 + 0x150,uVar1,0xffffffff);
  }
  thunk_FUN_004cdbc0(DAT_005ae704);
  return iVar2;
}

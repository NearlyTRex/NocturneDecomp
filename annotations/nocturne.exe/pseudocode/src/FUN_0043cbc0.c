// Name: FUN_0043cbc0
// Address: 0043cbc0
// Address Range: [[0043cbc0, 0043cc2f] [0043cc31, 0043cc45]]
// Convention: unknown
// Signature: int FUN_0043cbc0(int param_1)

#include "nocturne.h"

int FUN_0043cbc0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_20 [24];
  
  FUN_00460a00(DAT_005ae704,param_1 + 0x20);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  }
  thunk_FUN_004cdbc0(DAT_005ae704);
  return iVar2;
}

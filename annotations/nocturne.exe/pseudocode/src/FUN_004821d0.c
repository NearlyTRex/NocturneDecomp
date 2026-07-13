// Name: FUN_004821d0
// Address: 004821d0
// Address Range: [[004821d0, 004822b3]]
// Convention: unknown
// Signature: int FUN_004821d0(int param_1)

#include "nocturne.h"

int FUN_004821d0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_3c [24];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_3c,0);
  iVar2 = FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    FUN_00409f60(param_1);
    return 0;
  }
  uStack_18 = 0;
  uStack_10 = *(uint *)(param_1 + 0x3d0);
  uStack_14 = 0;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_20 = 0x40000000;
  FUN_00460aa0(DAT_005ae704,&DAT_02dd1184,&uStack_24);
  FUN_00460aa0(DAT_005ae704,&uStack_18,&DAT_02dd1184);
  FUN_004544d0(param_1 + 0x1ec,0,0xffffffff);
  thunk_FUN_004cdbc0(DAT_005ae704);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00409f60(param_1);
  return iVar2;
}

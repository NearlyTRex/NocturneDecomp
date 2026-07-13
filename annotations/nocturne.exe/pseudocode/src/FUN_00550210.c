// Name: FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550367]]
// Convention: unknown
// Signature: undefined4 FUN_00550210(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00550210(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  byte local_30 [24];
  int iStack_18;
  
  FUN_00460a00(DAT_005ae704,param_1 + 0x20);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_30,0);
  uVar2 = FUN_0041ceb0(uVar1);
  uVar1 = DAT_005ae704;
  *(uint *)(param_1 + 0x7d8) = uVar2;
  thunk_FUN_004cdbc0(uVar1);
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return *(uint *)(param_1 + 0x7d8);
  }
  FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0);
  FUN_00461010(DAT_005ae704,0xffff);
  if ((*(int *)(param_1 + 0x3b0) == 3) || (*(float *)(param_1 + 0x3b4) <= 0.0)) {
    FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  }
  else {
    fVar3 = (float10)_DAT_005974a3 - (float10)*(float *)(param_1 + 0x3b4) * (float10)_DAT_005974a3;
    FUN_00563a30();
    iStack_18 = (int)ROUND(fVar3);
    FUN_00461010(DAT_005ae704,iStack_18);
    FUN_004619f0(DAT_005ae704,0);
    FUN_004544d0(param_1 + 0x150,0,0x2e7);
    FUN_00461db0(DAT_005ae704);
  }
  thunk_FUN_004cdbc0(DAT_005ae704);
  return *(uint *)(param_1 + 0x7d8);
}

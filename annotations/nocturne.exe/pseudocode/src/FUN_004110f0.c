// Name: FUN_004110f0
// Address: 004110f0
// Address Range: [[004110f0, 004112e1]]
// Convention: unknown
// Signature: int FUN_004110f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004110f0(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  byte local_40 [24];
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  int local_18;
  
  if ((*(int *)(param_1 + 0x1fb34) == 0) && (*(int *)(param_1 + 0xbc90) == 2)) {
    return 0;
  }
  iVar3 = FUN_004e1660(param_1 + 0x150);
  uVar1 = *(uint *)(iVar3 + 0x24);
  fVar2 = *(float *)(param_1 + 0x158);
  local_1c = fVar2;
  iVar3 = FUN_004e1660(param_1 + 0x150);
  iVar3 = *(int *)(iVar3 + 100);
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_004112d5:
      local_18 = 65000;
      goto LAB_00411169;
    }
LAB_00411153:
    fVar5 = ((float10)fVar2 * (float10)_DAT_005786c0) / (float10)iVar3;
  }
  else {
    if (uVar1 < 7) goto LAB_00411153;
    if (uVar1 != 7) goto LAB_004112d5;
    fVar5 = (((float10)iVar3 - (float10)local_1c) * (float10)_DAT_005786c0) / (float10)iVar3;
  }
  FUN_00563a30((float)iVar3);
  local_18 = (int)ROUND(fVar5);
LAB_00411169:
  if (*(int *)(param_1 + 0x1fb38) != 0) {
    FUN_00408370((local_18 * 2) / 3);
    FUN_00460a00(DAT_005ae704,param_1 + 0x20);
    local_24 = DAT_0076432c;
    local_28 = 0;
    local_20 = 0;
    FUN_00460aa0(DAT_005ae704,&local_28,0);
    FUN_004544d0(&DAT_0076436c,0,0x23);
    thunk_FUN_004cdbc0(DAT_005ae704);
  }
  FUN_00409f20(param_1);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_40,0);
  iVar3 = FUN_0041ceb0(uVar4);
  if (iVar3 != 0) {
    FUN_00461000(DAT_005ae704,1);
    FUN_00461010(DAT_005ae704,local_18);
    FUN_004619f0(DAT_005ae704,1);
    FUN_0051d9d0(param_1 + 0x150,0xffffffff,0x2e7,1,0);
    FUN_00461db0(DAT_005ae704);
    if (_DAT_01cd4318 != 0) {
      FUN_004e22b0(param_1 + 0x150,param_1);
    }
    FUN_00461000(DAT_005ae704,0);
  }
  FUN_00409f60(param_1);
  return iVar3;
}

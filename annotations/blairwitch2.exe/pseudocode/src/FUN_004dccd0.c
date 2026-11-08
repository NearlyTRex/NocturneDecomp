// Name: FUN_004dccd0
// Address: 004dccd0
// Address Range: [[004dccd0, 004dcfaf]]
// Convention: unknown
// Signature: void FUN_004dccd0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dccd0(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_20;
  float local_1c;
  
  fVar1 = param_1[(int)param_1[0x11a] + 0x184];
  if (fVar1 != 0.0) {
    if ((param_1[0x117] != *(float *)((int)fVar1 + 0x6c4)) &&
       (iVar3 = FUN_0040c8f0(fVar1,_DAT_01d03560), iVar3 == 0)) {
      FUN_004dd270(param_1,0);
    }
    param_1[0x117] = *(float *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c4);
  }
  if ((*(int *)(0x01CB6900 + 0x264) == 0) && (*(int *)(0x01CB6900 + 0x25c) == 0)) {
    local_1c = 1.0 / _DAT_005f9020;
    if (0 < (int)param_1[4]) {
      iVar3 = 0;
      pfVar5 = param_1;
      do {
        iVar4 = FUN_0040c8f0(pfVar5[5],DAT_007bc85c);
        if (iVar4 != 0) {
          local_1c = 1.0 / *(float *)(iVar4 + 0x434) + local_1c;
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    fVar2 = (float)_DAT_005db9ea;
    fVar1 = *(float *)(0x01CB6900 + 0x284) * fVar2 * local_1c + *param_1;
    *param_1 = fVar1;
    if (fVar2 < fVar1) {
      *param_1 = 100.0;
    }
  }
  else {
    iVar3 = 0;
    local_20 = 0x43FA0000;
    pfVar5 = param_1;
    if (0 < (int)param_1[4]) {
      do {
        iVar4 = FUN_0040c8f0(pfVar5[5],DAT_007bc85c);
        if (iVar4 != 0) {
          local_20 = local_20 + *(float *)(iVar4 + 0x438);
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    fVar1 = *param_1 - (*(float *)(0x01CB6900 + 0x284) * (float)_DAT_005db9ea) / local_20;
    *param_1 = fVar1;
    if (fVar1 < 0.0) {
      *param_1 = 0.0;
    }
  }
  iVar3 = 0;
  pfVar5 = param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar4 = FUN_0040c8f0(pfVar5[5],_DAT_01d03560);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x430) != 2)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x14))(iVar4,*(uint *)(0x01CB6900 + 0x284));
      }
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  param_1[0xd0] = param_1[0xd0] - *(float *)(0x01CB6900 + 0x284);
  if (param_1[0xd0] <= 0.0) {
    param_1[0xd0] = 0.0;
  }
  param_1[0xd1] = param_1[0xd1] - *(float *)(0x01CB6900 + 0x284);
  if (param_1[0xd1] <= 0.0) {
    param_1[0xd1] = 0.0;
  }
  param_1[0xd2] = param_1[0xd2] - *(float *)(0x01CB6900 + 0x284);
  if (param_1[0xd2] <= 0.0) {
    param_1[0xd2] = 0.0;
  }
  param_1[0xd3] = param_1[0xd3] - *(float *)(0x01CB6900 + 0x284);
  if (param_1[0xd3] <= 0.0) {
    *(byte *)(param_1 + 0xd5) = 0;
    param_1[0xd3] = 0.0;
  }
  param_1[0xd4] = param_1[0xd4] - *(float *)(0x01CB6900 + 0x284);
  if (param_1[0xd4] < 0.0) {
    param_1[0xd4] = 0.0;
    return;
  }
  return;
}

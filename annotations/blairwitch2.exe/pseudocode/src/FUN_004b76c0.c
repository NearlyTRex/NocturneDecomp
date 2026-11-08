// Name: FUN_004b76c0
// Address: 004b76c0
// Address Range: [[004b76c0, 004b7fb6]]
// Convention: unknown
// Signature: void FUN_004b76c0(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b76c0(int param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  
  if (*(int *)(param_1 + 0x29c) != 0) {
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200);
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x201);
  }
  param_2[9] = 0;
  pfVar1 = (float *)(param_2 + 9);
  if ((&DAT_01c37790)[*(int *)(param_1 + 0x38)] == '\0') {
    if ((((&DAT_01c37790)[*(int *)(param_1 + 0x3c)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = *(float *)(0x01CB6900 + 0x284) / _DAT_005d78c3 + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005d78c7 < *pfVar1) &&
          (fVar2 = *pfVar1 - *(float *)(0x01CB6900 + 0x284) / _DAT_005d78c3, *pfVar1 = fVar2,
          fVar2 < _DAT_005d78c7)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c37790)[*(int *)(param_1 + 0x34)] == '\0') {
    if (((&DAT_01c37790)[*(int *)(param_1 + 0x44)] != '\0') ||
       ((&DAT_01c37790)[*(int *)(param_1 + 0x40)] != '\0')) {
      fVar2 = (float)*(int *)(param_1 + 0xb0) * (float)_DAT_005d78d3 * (float)_DAT_005d78db;
      pfVar1 = (float *)(param_2 + 10);
      if ((&DAT_01c37790)[*(int *)(param_1 + 0x44)] == '\0') {
        if ((((&DAT_01c37790)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005d78e3 < *pfVar1) &&
              (fVar2 = *pfVar1 - (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / fVar2,
              *pfVar1 = fVar2, fVar2 < _DAT_005d78e3)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004b77cb;
    }
    fVar2 = (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / _DAT_005d78cf;
    pfVar1 = (float *)(param_2 + 10);
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004b7da7;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004b77b8:
    param_2[10] = (uint)fVar2;
    if ((float)param_2[10] <= 0.0) goto LAB_004b77cb;
  }
  else {
    pfVar1 = (float *)(param_2 + 9);
    if ((&DAT_01c37790)[*(int *)(param_1 + 0x44)] == '\0') {
      if ((((&DAT_01c37790)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = *(float *)(0x01CB6900 + 0x284) / _DAT_005d78c3 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005d78c7 < *pfVar1) &&
            (fVar2 = *pfVar1 - *(float *)(0x01CB6900 + 0x284) / _DAT_005d78c3, *pfVar1 = fVar2,
            fVar2 < _DAT_005d78c7)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / _DAT_005d78cf;
    pfVar1 = (float *)(param_2 + 10);
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_004b77b8;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x004b7da7:
    if (0.0 <= fVar2) goto LAB_004b77cb;
  }
  param_2[10] = 0;
LAB_004b77cb:
  if (((&DAT_01c37790)[*(int *)(param_1 + 0x74)] == '\0') &&
     ((&DAT_01c37790)[*(int *)(param_1 + 0x78)] == '\0')) {
    fVar2 = (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / _DAT_005d78e7;
    pfVar1 = (float *)(param_2 + 0xb);
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      if (*pfVar1 < 0.0) {
        *pfVar1 = 0.0;
      }
    }
    else {
      *pfVar1 = *pfVar1 + fVar2;
      if (0.0 < *pfVar1) {
        *pfVar1 = 0.0;
      }
    }
  }
  else {
    fVar2 = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005d78eb * (float)_DAT_005d78db;
    pfVar1 = (float *)(param_2 + 0xb);
    if ((&DAT_01c37790)[*(int *)(param_1 + 0x74)] == '\0') {
      if ((((&DAT_01c37790)[*(int *)(param_1 + 0x78)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005d78e3 < *pfVar1) &&
            (fVar2 = *pfVar1 - (*(float *)(0x01CB6900 + 0x284) * _DAT_005d78cb) / fVar2,
            *pfVar1 = fVar2, fVar2 < _DAT_005d78e3)) {
      *pfVar1 = -0.25;
    }
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    bVar4 = (&DAT_01c37790)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar4 = (&DAT_01c37790)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar4;
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x28)] != (&DAT_01c37790)[*(int *)(param_1 + 0x28)]) {
    *param_2 = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x28)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x2c)] != (&DAT_01c37790)[*(int *)(param_1 + 0x2c)]) {
    param_2[1] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x2c)];
  }
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
  if (iVar3 == 0) {
    if ((&DAT_01cb7528)[*(int *)(param_1 + 0x48)] != (&DAT_01c37790)[*(int *)(param_1 + 0x48)]) {
      param_2[3] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x48)];
    }
  }
  else {
    param_2[3] = 0;
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x4c)] == (&DAT_01c37790)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x50)] == (&DAT_01c37790)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x68)] == (&DAT_01c37790)[*(int *)(param_1 + 0x68)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x68)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x70)] == (&DAT_01c37790)[*(int *)(param_1 + 0x70)]) {
    param_2[8] = 0;
  }
  else {
    param_2[8] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x70)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0xaf0)] == (&DAT_01c37790)[*(int *)(param_1 + 0xaf0)]) {
    param_2[0xc] = 0;
  }
  else {
    param_2[0xc] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0xaf0)];
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x90));
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01b4d2ec),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x94));
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01b4d2ec),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x98));
  if (iVar3 != 0) {
    FUN_004dbb50(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x9c));
  if (iVar3 != 0) {
    FUN_004dbb50(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0xa4));
  if (iVar3 != 0) {
    FUN_004dbc60(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0xa0));
  if (iVar3 != 0) {
    FUN_004defa0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x7c));
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01b4d2ec),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,0,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x80));
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01b4d2ec),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,3,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x84));
  if ((iVar3 != 0) &&
     ((iVar3 = FUN_0040c8f0(*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),_DAT_01b4d2ec),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,6,1);
    return;
  }
  return;
}

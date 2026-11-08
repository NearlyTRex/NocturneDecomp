// Name: FUN_004d0ee0
// Address: 004d0ee0
// Address Range: [[004d0ee0, 004d175b]]
// Convention: unknown
// Signature: void FUN_004d0ee0(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0ee0(int param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  
  if (*(int *)(param_1 + 0x2ac) != 0) {
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x201);
  }
  param_2[9] = 0;
  pfVar1 = (float *)(param_2 + 9);
  if ((&DAT_01c50950)[*(int *)(param_1 + 0x38)] == '\0') {
    if ((((&DAT_01c50950)[*(int *)(param_1 + 0x3c)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = *(float *)(0x01CCF390 + 0x294) / _DAT_005e19c4 + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005e19c8 < *pfVar1) &&
          (fVar2 = *pfVar1 - *(float *)(0x01CCF390 + 0x294) / _DAT_005e19c4, *pfVar1 = fVar2,
          fVar2 < _DAT_005e19c8)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c50950)[*(int *)(param_1 + 0x34)] == '\0') {
    if (((&DAT_01c50950)[*(int *)(param_1 + 0x44)] != '\0') ||
       ((&DAT_01c50950)[*(int *)(param_1 + 0x40)] != '\0')) {
      fVar2 = (float)*(int *)(param_1 + 0xb0) * (float)_DAT_005e19d4 * (float)_DAT_005e19dc;
      pfVar1 = (float *)(param_2 + 10);
      if ((&DAT_01c50950)[*(int *)(param_1 + 0x44)] == '\0') {
        if ((((&DAT_01c50950)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005e19e4 < *pfVar1) &&
              (fVar2 = *pfVar1 - (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / fVar2,
              *pfVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004d0feb;
    }
    fVar2 = (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / _DAT_005e19d0;
    pfVar1 = (float *)(param_2 + 10);
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004d1617;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004d0fd8:
    param_2[10] = (uint)fVar2;
    if ((float)param_2[10] <= 0.0) goto LAB_004d0feb;
  }
  else {
    pfVar1 = (float *)(param_2 + 9);
    if ((&DAT_01c50950)[*(int *)(param_1 + 0x44)] == '\0') {
      if ((((&DAT_01c50950)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = *(float *)(0x01CCF390 + 0x294) / _DAT_005e19c4 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005e19c8 < *pfVar1) &&
            (fVar2 = *pfVar1 - *(float *)(0x01CCF390 + 0x294) / _DAT_005e19c4, *pfVar1 = fVar2,
            fVar2 < _DAT_005e19c8)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / _DAT_005e19d0;
    pfVar1 = (float *)(param_2 + 10);
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_004d0fd8;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x004d1617:
    if (0.0 <= fVar2) goto LAB_004d0feb;
  }
  param_2[10] = 0;
LAB_004d0feb:
  if (((&DAT_01c50950)[*(int *)(param_1 + 0x74)] == '\0') &&
     ((&DAT_01c50950)[*(int *)(param_1 + 0x78)] == '\0')) {
    fVar2 = (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / _DAT_005e19e8;
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
    fVar2 = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005e19ec * (float)_DAT_005e19dc;
    pfVar1 = (float *)(param_2 + 0xb);
    if ((&DAT_01c50950)[*(int *)(param_1 + 0x74)] == '\0') {
      if ((((&DAT_01c50950)[*(int *)(param_1 + 0x78)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005e19e4 < *pfVar1) &&
            (fVar2 = *pfVar1 - (*(float *)(0x01CCF390 + 0x294) * _DAT_005e19cc) / fVar2,
            *pfVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
      *pfVar1 = -0.25;
    }
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    bVar4 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar4 = (&DAT_01c50950)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar4;
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x28)] != (&DAT_01c50950)[*(int *)(param_1 + 0x28)]) {
    *param_2 = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x28)];
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
    param_2[1] = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
      param_2[3] = (uint)(byte)(&DAT_01c50950)[iVar3];
    }
  }
  else {
    param_2[3] = 0;
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x4c)] == (&DAT_01c50950)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x50)] == (&DAT_01c50950)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x68)] == (&DAT_01c50950)[*(int *)(param_1 + 0x68)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x68)];
  }
  if ((&DAT_01ccff98)[*(int *)(param_1 + 0x6c)] == (&DAT_01c50950)[*(int *)(param_1 + 0x6c)]) {
    param_2[7] = 0;
  }
  else {
    param_2[7] = (uint)(byte)(&DAT_01c50950)[*(int *)(param_1 + 0x6c)];
  }
  iVar3 = *(int *)(param_1 + 0x70);
  if ((&DAT_01ccff98)[iVar3] == (&DAT_01c50950)[iVar3]) {
    param_2[8] = 0;
  }
  else {
    param_2[8] = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x90));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,5,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x94));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,5,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x98));
  if (iVar3 != 0) {
    FUN_004f8ec0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x9c));
  if (iVar3 != 0) {
    FUN_004f8ec0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0xa4));
  if (iVar3 != 0) {
    FUN_004f8fe0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0xa0));
  if (iVar3 != 0) {
    FUN_004fc370(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x7c));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,0,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x80));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,1,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x84));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,2,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x88));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,4,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x8c));
  if (iVar3 != 0) {
    FUN_004f8dc0(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8,0,3,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)(param_1 + 0x54));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x150))(iVar3);
  return;
}

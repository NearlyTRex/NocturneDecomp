// Name: FUN_004b9960
// Address: 004b9960
// Address Range: [[004b9960, 004ba213]]
// Convention: unknown
// Signature: void FUN_004b9960(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9960(int param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  if (*(int *)(param_1 + 0x32c) != 0) {
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x201);
  }
  param_2[10] = 0;
  pfVar1 = (float *)(param_2 + 10);
  if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x38)] == '\0') {
    if ((((&DAT_01c6cef0)[*(int *)(param_1 + 0x3c)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = *(float *)(0x01D2130C + 0x314) / _DAT_005c2800 + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((_DAT_005c2804 < *pfVar1) &&
          (fVar2 = *pfVar1 - *(float *)(0x01D2130C + 0x314) / _DAT_005c2800, *pfVar1 = fVar2,
          fVar2 < _DAT_005c2804)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x34)] == '\0') {
    if (((&DAT_01c6cef0)[*(int *)(param_1 + 0x44)] != '\0') ||
       ((&DAT_01c6cef0)[*(int *)(param_1 + 0x40)] != '\0')) {
      fVar2 = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005c2810 * (float)_DAT_005c2818;
      pfVar1 = (float *)(param_2 + 0xb);
      if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x44)] == '\0') {
        if ((((&DAT_01c6cef0)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((_DAT_005c2820 < *pfVar1) &&
              (fVar2 = *pfVar1 - (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / fVar2,
              *pfVar1 = fVar2, fVar2 < _DAT_005c2820)) {
        *pfVar1 = -0.25;
      }
      goto LAB_004b9a6d;
    }
    fVar2 = (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / _DAT_005c280c;
    pfVar1 = (float *)(param_2 + 0xb);
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x004ba097;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_004b9a5a:
    param_2[0xb] = (uint)fVar2;
    if ((float)param_2[0xb] <= 0.0) goto LAB_004b9a6d;
  }
  else {
    pfVar1 = (float *)(param_2 + 10);
    if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x44)] == '\0') {
      if ((((&DAT_01c6cef0)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = *(float *)(0x01D2130C + 0x314) / _DAT_005c2800 + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((_DAT_005c2804 < *pfVar1) &&
            (fVar2 = *pfVar1 - *(float *)(0x01D2130C + 0x314) / _DAT_005c2800, *pfVar1 = fVar2,
            fVar2 < _DAT_005c2804)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / _DAT_005c280c;
    pfVar1 = (float *)(param_2 + 0xb);
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_004b9a5a;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x004ba097:
    if (0.0 <= fVar2) goto LAB_004b9a6d;
  }
  param_2[0xb] = 0;
LAB_004b9a6d:
  if (((&DAT_01c6cef0)[*(int *)(param_1 + 0x78)] == '\0') &&
     ((&DAT_01c6cef0)[*(int *)(param_1 + 0x7c)] == '\0')) {
    fVar2 = (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / _DAT_005c2824;
    pfVar1 = (float *)(param_2 + 0xc);
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
    fVar2 = (float)*(int *)(param_1 + 0xb8) * (float)_DAT_005c2828 * (float)_DAT_005c2818;
    pfVar1 = (float *)(param_2 + 0xc);
    if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x78)] == '\0') {
      if ((((&DAT_01c6cef0)[*(int *)(param_1 + 0x7c)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((_DAT_005c2820 < *pfVar1) &&
            (fVar2 = *pfVar1 - (*(float *)(0x01D2130C + 0x314) * _DAT_005c2808) / fVar2,
            *pfVar1 = fVar2, fVar2 < _DAT_005c2820)) {
      *pfVar1 = -0.25;
    }
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    bVar5 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar5 = (&DAT_01c6cef0)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar5;
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x28)] != (&DAT_01c6cef0)[*(int *)(param_1 + 0x28)]) {
    *param_2 = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x28)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x2c)] != (&DAT_01c6cef0)[*(int *)(param_1 + 0x2c)]) {
    param_2[1] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x2c)];
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((&DAT_01d21fa0)[iVar3] != (&DAT_01c6cef0)[iVar3]) {
      param_2[3] = (uint)(byte)(&DAT_01c6cef0)[iVar3];
    }
    if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x4c)] != (&DAT_01c6cef0)[*(int *)(param_1 + 0x4c)]) {
      param_2[4] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x4c)];
    }
  }
  else {
    param_2[4] = 0;
    param_2[3] = 0;
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x50)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x54)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x54)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x54)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x6c)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x6c)]) {
    param_2[7] = 0;
  }
  else {
    param_2[7] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x6c)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x70)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x70)]) {
    param_2[8] = 0;
  }
  else {
    param_2[8] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x70)];
  }
  if ((&DAT_01d21fa0)[*(int *)(param_1 + 0x74)] == (&DAT_01c6cef0)[*(int *)(param_1 + 0x74)]) {
    param_2[9] = 0;
  }
  else {
    param_2[9] = (uint)(byte)(&DAT_01c6cef0)[*(int *)(param_1 + 0x74)];
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x94));
  if (iVar3 != 0) {
    FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,5,1);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x98));
  if (iVar3 != 0) {
    FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,5,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x9c));
  if (iVar3 != 0) {
    FUN_004dbc40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,1);
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0xa0));
  if (iVar3 != 0) {
    FUN_004dbc40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0xffffffff);
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x148))(iVar3);
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x80));
  if ((iVar4 != 0) &&
     (FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,0,1), iVar3 == 0)) {
    param_2[7] = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x84));
  if ((iVar4 != 0) &&
     (FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,1,1), iVar3 == 0)) {
    param_2[7] = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x88));
  if ((iVar4 != 0) &&
     (FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,2,1), iVar3 == 0)) {
    param_2[7] = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x8c));
  if ((iVar4 != 0) &&
     (FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,3,1), iVar3 == 0)) {
    param_2[7] = 1;
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x90));
  if ((iVar4 != 0) &&
     (FUN_004dbb40(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,0,4,1), iVar3 == 0)) {
    param_2[7] = 1;
  }
  iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,*(uint *)(param_1 + 0x58));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x150))(iVar3);
  return;
}

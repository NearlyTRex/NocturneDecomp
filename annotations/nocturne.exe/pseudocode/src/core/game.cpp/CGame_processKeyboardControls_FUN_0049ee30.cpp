// Name: core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
// Address: 0049ee30
// Address Range: [[0049ee30, 0049f704]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(int param_1,uint *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(int param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  if (*(int *)(param_1 + 0x27c) != 0) {
    (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x200);
    (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x201);
  }
  param_2[8] = 0;
  pfVar1 = (float *)(param_2 + 8);
  if ((&DAT_01c02598)[*(int *)(param_1 + 0x38)] == '\0') {
    if ((((&DAT_01c02598)[*(int *)(param_1 + 0x3c)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
       (*pfVar1 = *(float *)(0x01C775EC + 0x264) / 0.01f + *pfVar1,
       0x3f800000 < (int)*pfVar1)) {
      *pfVar1 = 1.0;
    }
  }
  else if ((-1.0f < *pfVar1) &&
          (fVar2 = *pfVar1 - *(float *)(0x01C775EC + 0x264) / 0.01f, *pfVar1 = fVar2,
          fVar2 < -1.0f)) {
    *pfVar1 = -1.0;
  }
  if ((&DAT_01c02598)[*(int *)(param_1 + 0x34)] == '\0') {
    if (((&DAT_01c02598)[*(int *)(param_1 + 0x44)] != '\0') ||
       ((&DAT_01c02598)[*(int *)(param_1 + 0x40)] != '\0')) {
      fVar2 = (float)*(int *)(param_1 + 0x9c) * (float)0.29999999999999999 * (float)1.52587890625e-05;
      pfVar1 = (float *)(param_2 + 9);
      if ((&DAT_01c02598)[*(int *)(param_1 + 0x44)] == '\0') {
        if ((((&DAT_01c02598)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
           (*pfVar1 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2 + *pfVar1,
           0x3e800000 < (int)*pfVar1)) {
          *pfVar1 = 0.25;
        }
      }
      else if ((-0.25f < *pfVar1) &&
              (fVar2 = *pfVar1 - (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2,
              *pfVar1 = fVar2, fVar2 < -0.25f)) {
        *pfVar1 = -0.25;
      }
      goto LAB_0049ef39;
    }
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.05f;
    pfVar1 = (float *)(param_2 + 9);
    if (0.0 <= *pfVar1) {
      *pfVar1 = *pfVar1 - fVar2;
      fVar2 = *pfVar1;
      goto joined_r0x0049f5c7;
    }
    fVar2 = *pfVar1 + fVar2;
LAB_0049ef26:
    param_2[9] = (uint)fVar2;
    if ((float)param_2[9] <= 0.0) goto LAB_0049ef39;
  }
  else {
    pfVar1 = (float *)(param_2 + 8);
    if ((&DAT_01c02598)[*(int *)(param_1 + 0x44)] == '\0') {
      if ((((&DAT_01c02598)[*(int *)(param_1 + 0x40)] != '\0') && ((int)*pfVar1 < 0x3f800000)) &&
         (*pfVar1 = *(float *)(0x01C775EC + 0x264) / 0.01f + *pfVar1,
         0x3f800000 < (int)*pfVar1)) {
        *pfVar1 = 1.0;
      }
    }
    else if ((-1.0f < *pfVar1) &&
            (fVar2 = *pfVar1 - *(float *)(0x01C775EC + 0x264) / 0.01f, *pfVar1 = fVar2,
            fVar2 < -1.0f)) {
      *pfVar1 = -1.0;
    }
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.05f;
    pfVar1 = (float *)(param_2 + 9);
    if (*pfVar1 < 0.0) {
      fVar2 = *pfVar1 + fVar2;
      goto LAB_0049ef26;
    }
    *pfVar1 = *pfVar1 - fVar2;
    fVar2 = *pfVar1;
joined_r0x0049f5c7:
    if (0.0 <= fVar2) goto LAB_0049ef39;
  }
  param_2[9] = 0;
LAB_0049ef39:
  if (((&DAT_01c02598)[*(int *)(param_1 + 0x60)] == '\0') &&
     ((&DAT_01c02598)[*(int *)(param_1 + 100)] == '\0')) {
    fVar2 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / 0.1f;
    pfVar1 = (float *)(param_2 + 10);
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
    fVar2 = (float)*(int *)(param_1 + 0xa0) * (float)0.20000000000000001 * (float)1.52587890625e-05;
    pfVar1 = (float *)(param_2 + 10);
    if ((&DAT_01c02598)[*(int *)(param_1 + 0x60)] == '\0') {
      if ((((&DAT_01c02598)[*(int *)(param_1 + 100)] != '\0') && ((int)*pfVar1 < 0x3e800000)) &&
         (*pfVar1 = (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2 + *pfVar1,
         0x3e800000 < (int)*pfVar1)) {
        *pfVar1 = 0.25;
      }
    }
    else if ((-0.25f < *pfVar1) &&
            (fVar2 = *pfVar1 - (*(float *)(0x01C775EC + 0x264) * 0.25f) / fVar2,
            *pfVar1 = fVar2, fVar2 < -0.25f)) {
      *pfVar1 = -0.25;
    }
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    bVar5 = (&DAT_01c02598)[*(int *)(param_1 + 0x30)];
  }
  else {
    bVar5 = (&DAT_01c02598)[*(int *)(param_1 + 0x30)] == '\0';
  }
  param_2[2] = (uint)bVar5;
  iVar3 = *(int *)(param_1 + 0x28);
  if ((&DAT_01c781c0)[iVar3] != (&DAT_01c02598)[iVar3]) {
    *param_2 = (uint)(byte)(&DAT_01c02598)[iVar3];
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((&DAT_01c781c0)[iVar3] != (&DAT_01c02598)[iVar3]) {
    param_2[1] = (uint)(byte)(&DAT_01c02598)[iVar3];
  }
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((&DAT_01c781c0)[iVar3] != (&DAT_01c02598)[iVar3]) {
      param_2[3] = (uint)(byte)(&DAT_01c02598)[iVar3];
    }
  }
  else {
    param_2[3] = 0;
  }
  if ((&DAT_01c781c0)[*(int *)(param_1 + 0x4c)] == (&DAT_01c02598)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c02598)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01c781c0)[*(int *)(param_1 + 0x50)] == (&DAT_01c02598)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c02598)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01c781c0)[*(int *)(param_1 + 0x58)] == (&DAT_01c02598)[*(int *)(param_1 + 0x58)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c02598)[*(int *)(param_1 + 0x58)];
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  if ((&DAT_01c781c0)[iVar3] == (&DAT_01c02598)[iVar3]) {
    param_2[7] = 0;
  }
  else {
    param_2[7] = (uint)(byte)(&DAT_01c02598)[iVar3];
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x7c));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,5,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x80));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,5,0xffffffff);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x84));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004c0950
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x88));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004c0950
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0xffffffff);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x90));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x8c));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x68));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,0,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x6c));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,1,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x70));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,2,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x74));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,4,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x78));
  if (iVar3 != 0) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850
              (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0,3,1);
  }
  iVar3 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,*(uint *)(param_1 + 0x54));
  if (iVar3 != 0) {
    uVar4 = (uint)(*(int *)(param_1 + 0x240) == 0);
    *(uint *)(param_1 + 0x240) = uVar4;
    if (((uVar4 == 0) || (iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8), iVar3 == 0)) ||
       (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), iVar3 == 0)) {
      if (*(int *)(param_1 + 0x240) != 0) {
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x240) = 0;
    }
    iVar3 = *(int *)(0x01E57284 + 0x15aabc);
    core_setdir_cpp_FUN_005125a0(0x01E57284,*(uint *)(0x01E56DA0 + 0xc),1);
    *(uint *)(0x01E56DA0 + 0x10) = 0;
    if (iVar3 == *(int *)(0x01E57284 + 0x15aabc)) {
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                (0x01E57284,*(int *)(0x01E57284 + 0x15aabc));
      return;
    }
  }
  return;
}

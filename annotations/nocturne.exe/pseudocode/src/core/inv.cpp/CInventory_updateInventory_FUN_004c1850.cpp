// Name: core_inv.cpp_CInventory_updateInventory_FUN_004c1850
// Address: 004c1850
// Address Range: [[004c1850, 004c1b1e]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004c1850(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004c1850(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_20;
  float local_1c;
  
  fVar1 = param_1[0xcc];
  if (fVar1 != 0.0) {
    if ((param_1[0x117] != *(float *)((int)fVar1 + 0x560)) &&
       (iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(fVar1,_DAT_01cc36c0), iVar3 == 0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(param_1,0);
    }
    param_1[0x117] = *(float *)((int)param_1[0xcc] + 0x560);
  }
  if ((*(int *)(0x01C775EC + 0x244) == 0) && (*(int *)(0x01C775EC + 0x240) == 0)) {
    local_20 = 1.0 / 120.0f;
    iVar3 = 0;
    pfVar5 = param_1;
    if (0 < (int)param_1[2]) {
      do {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(pfVar5[3],DAT_007646ac);
        if (iVar4 != 0) {
          local_20 = 1.0 / *(float *)(iVar4 + 0x2d0) + local_20;
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 1;
      } while (iVar3 < (int)param_1[2]);
    }
    fVar2 = (float)100;
    fVar1 = *(float *)(0x01C775EC + 0x264) * fVar2 * local_20 + *param_1;
    *param_1 = fVar1;
    if (fVar2 < fVar1) {
      *param_1 = 100.0;
    }
  }
  else {
    iVar3 = 0;
    local_1c = 30.0f;
    pfVar5 = param_1;
    if (0 < (int)param_1[2]) {
      do {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(pfVar5[3],DAT_007646ac);
        if (iVar4 != 0) {
          local_1c = local_1c + *(float *)(iVar4 + 0x2d4);
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 1;
      } while (iVar3 < (int)param_1[2]);
    }
    fVar1 = *param_1 - (*(float *)(0x01C775EC + 0x264) * (float)100) / local_1c;
    *param_1 = fVar1;
    if (fVar1 < 0.0) {
      *param_1 = 0.0;
    }
  }
  iVar3 = 0;
  pfVar5 = param_1;
  if (0 < (int)param_1[2]) {
    do {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(pfVar5[3],_DAT_01cc36c0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2cc) != 2)) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,*(uint *)(0x01C775EC + 0x264));
      }
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar3 < (int)param_1[2]);
  }
  param_1[0xce] = param_1[0xce] - *(float *)(0x01C775EC + 0x264);
  if (param_1[0xce] <= 0.0) {
    param_1[0xce] = 0.0;
  }
  param_1[0xcf] = param_1[0xcf] - *(float *)(0x01C775EC + 0x264);
  if (param_1[0xcf] <= 0.0) {
    param_1[0xcf] = 0.0;
  }
  param_1[0xd0] = param_1[0xd0] - *(float *)(0x01C775EC + 0x264);
  if (param_1[0xd0] <= 0.0) {
    param_1[0xd0] = 0.0;
  }
  param_1[0xd1] = param_1[0xd1] - *(float *)(0x01C775EC + 0x264);
  if (param_1[0xd1] <= 0.0) {
    *(byte *)(param_1 + 0xd3) = 0;
    param_1[0xd1] = 0.0;
  }
  param_1[0xd2] = param_1[0xd2] - *(float *)(0x01C775EC + 0x264);
  if (param_1[0xd2] < 0.0) {
    param_1[0xd2] = 0.0;
    return;
  }
  return;
}

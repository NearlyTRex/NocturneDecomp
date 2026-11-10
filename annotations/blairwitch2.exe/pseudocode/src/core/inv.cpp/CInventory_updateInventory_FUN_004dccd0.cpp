// Name: core_inv.cpp_CInventory_updateInventory_FUN_004dccd0
// Address: 004dccd0
// Address Range: [[004dccd0, 004dcfaf]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  float local_20;
  float local_1c;
  
  iVar3 = *(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610);
  if (iVar3 != 0) {
    if ((*(int *)(this_ptr + 0x45c) != *(int *)(iVar3 + 0x6c4)) &&
       (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar3,g_CLightGunClassInfo.name_hash),
       iVar3 == 0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,0);
    }
    *(uint *)(this_ptr + 0x45c) =
         *(uint *)(*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) + 0x6c4);
  }
  if ((*(int *)&g_CGamePtr->field_0x264 == 0) && (*(int *)&g_CGamePtr->field_0x25c == 0)) {
    local_1c = 1.0 / _DAT_005f9020;
    if (0 < *(int *)(this_ptr + 0x10)) {
      iVar3 = 0;
      pCVar5 = this_ptr;
      do {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar5 + 0x14),g_CBatteryClassInfo.name_hash);
        if (iVar4 != 0) {
          local_1c = 1.0 / *(float *)(iVar4 + 0x434) + local_1c;
        }
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(this_ptr + 0x10));
    }
    fVar2 = (float)_DAT_005db9ea;
    fVar1 = g_CGamePtr->delta_time_float * fVar2 * local_1c + *(float *)this_ptr;
    *(float *)this_ptr = fVar1;
    if (fVar2 < fVar1) {
      *(uint *)this_ptr = 0x42c80000;
    }
  }
  else {
    iVar3 = 0;
    local_20 = 0x43FA0000;
    pCVar5 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar5 + 0x14),g_CBatteryClassInfo.name_hash);
        if (iVar4 != 0) {
          local_20 = local_20 + *(float *)(iVar4 + 0x438);
        }
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(this_ptr + 0x10));
    }
    fVar1 = *(float *)this_ptr - (g_CGamePtr->delta_time_float * (float)_DAT_005db9ea) / local_20;
    *(float *)this_ptr = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)this_ptr = 0;
    }
  }
  iVar3 = 0;
  pCVar5 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(pCVar5 + 0x14),g_CLightGunClassInfo.name_hash);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x430) != 2)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x14))(iVar4,g_CGamePtr->delta_time_float);
      }
      iVar3 = iVar3 + 1;
      pCVar5 = pCVar5 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  *(float *)(this_ptr + 0x340) = *(float *)(this_ptr + 0x340) - g_CGamePtr->delta_time_float;
  if (*(float *)(this_ptr + 0x340) <= 0.0) {
    *(uint *)(this_ptr + 0x340) = 0;
  }
  *(float *)(this_ptr + 0x344) = *(float *)(this_ptr + 0x344) - g_CGamePtr->delta_time_float;
  if (*(float *)(this_ptr + 0x344) <= 0.0) {
    *(uint *)(this_ptr + 0x344) = 0;
  }
  *(float *)(this_ptr + 0x348) = *(float *)(this_ptr + 0x348) - g_CGamePtr->delta_time_float;
  if (*(float *)(this_ptr + 0x348) <= 0.0) {
    *(uint *)(this_ptr + 0x348) = 0;
  }
  *(float *)(this_ptr + 0x34c) = *(float *)(this_ptr + 0x34c) - g_CGamePtr->delta_time_float;
  if (*(float *)(this_ptr + 0x34c) <= 0.0) {
    this_ptr[0x354] = (CInventory)0x0;
    *(uint *)(this_ptr + 0x34c) = 0;
  }
  *(float *)(this_ptr + 0x350) = *(float *)(this_ptr + 0x350) - g_CGamePtr->delta_time_float;
  if (*(float *)(this_ptr + 0x350) < 0.0) {
    *(uint *)(this_ptr + 0x350) = 0;
    return;
  }
  return;
}

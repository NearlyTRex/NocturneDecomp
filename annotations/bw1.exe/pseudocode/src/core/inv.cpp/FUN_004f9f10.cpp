// Name: core_inv.cpp_FUN_004f9f10
// Address: 004f9f10
// Address Range: [[004f9f10, 004fa468]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f9f10(CInventory *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f9f10(CInventory *param_1)

{
  double dVar1;
  CDemonActor *actor_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  CInventory *pCVar10;
  int local_1c;
  
  if (*(int *)(param_1 + 0x338) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x338) + 0x568) != *(int *)(param_1 + 0x468)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(param_1,0);
    }
    *(uint *)(param_1 + 0x468) = *(uint *)(*(int *)(param_1 + 0x338) + 0x568);
  }
  local_1c = 0;
  pCVar10 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(pCVar10 + 0x14),g_CLightGunClassInfo.name_hash);
      iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(pCVar10 + 0x14),g_CLightPisClassInfo.name_hash);
      if ((iVar5 != 0) || (iVar6 != 0)) {
        if (iVar5 == 0) {
          if (*(int *)(iVar6 + 0x2d4) != 2) {
            (**(code **)(*(int *)(iVar6 + 0x154) + 0xc))(iVar6,g_CGamePtr->delta_time_float);
          }
        }
        else if (*(int *)(iVar5 + 0x2d4) != 2) {
          (**(code **)(*(int *)(iVar5 + 0x154) + 0xc))(iVar5,g_CGamePtr->delta_time_float);
        }
      }
      local_1c = local_1c + 1;
      pCVar10 = pCVar10 + 4;
    } while (local_1c < *(int *)(param_1 + 0x10));
  }
  if ((((*(int *)&g_CGamePtr->field_0x25c != 0) || (*(int *)&g_CFieldNotesPtr->field_0x40 != 0)) ||
      (DAT_007c3978 != 0)) || (*(int *)&g_CGamePtr->field_0x244 != 0)) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x340) - g_CGamePtr->delta_time_float;
  *(float *)(param_1 + 0x340) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x340) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x344) - g_CGamePtr->delta_time_float;
  *(float *)(param_1 + 0x344) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x344) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x348) - g_CGamePtr->delta_time_float;
  *(float *)(param_1 + 0x348) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x348) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x34c) - g_CGamePtr->delta_time_float;
  *(float *)(param_1 + 0x34c) = fVar2;
  if (fVar2 <= 0.0) {
    param_1[0x354] = (CInventory)0x0;
    *(uint *)(param_1 + 0x34c) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x350) - g_CGamePtr->delta_time_float;
  *(float *)(param_1 + 0x350) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x350) = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (_DAT_01d06f70 = _DAT_01d06f70 - g_CGamePtr->delta_time_float, _DAT_01d06f70 <= 0.0)) {
    _DAT_01d06f70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.1,0.4);
    iVar6 = 0;
    iVar5 = 0;
    _DAT_01d1bc48 = 0xffffffff;
    while (iVar6 < g_CDemonSetPtr->character_count) {
      actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar5);
      if (((*(int *)(actor_ptr[0x1d].create_event + 0x38) == 0) ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CBird"), iVar7 != 0))
         || (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                               (0x02C82A60,*(uint *)(actor_ptr[0x1d].create_event + 0x3c)),
            iVar7 != 0)) {
LAB_004fa216:
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      }
      else {
        iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar2 = *(float *)(iVar7 + 0x20) - (actor_ptr->location).position.x;
        fVar4 = *(float *)(iVar7 + 0x24) - (actor_ptr->location).position.y;
        fVar3 = *(float *)(iVar7 + 0x28) - (actor_ptr->location).position.z;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005e67f8 < fVar2) goto LAB_004fa216;
        if (dVar1 <= _DAT_005e6800) {
          if (dVar1 <= _DAT_005e6808) {
            if (dVar1 <= _DAT_005e6810) {
              _DAT_01d1bc48 = 0;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_full?.wav @ .3");
              *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              _DAT_01d1bc48 = 1;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_long?.wav @ .3");
              *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          else {
            _DAT_01d1bc48 = 2;
            iVar7 = 0;
            while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                     (0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0) {
              iVar7 = iVar7 + 4;
              if (0xf < iVar7) {
                return;
              }
            }
            uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                              (0x02C82A60,(void *)0x0,"sps_med?.wav @ .3");
            *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar9;
            *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          }
        }
        else {
          _DAT_01d1bc48 = 3;
          iVar7 = 0;
          while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                   (0x02C82A60,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0) {
            iVar7 = iVar7 + 4;
            if (0xf < iVar7) {
              return;
            }
          }
          uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                            (0x02C82A60,(void *)0x0,"sps_short?.wav @ .3");
          *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar9;
          *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 4;
        }
      }
    }
  }
  return;
}

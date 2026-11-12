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
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CDemonActor *this_ptr;
  int iVar6;
  int iVar7;
  uint uVar8;
  CInventory *pCVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  if (param_1->selected_weapon != (CWeapon *)0x0) {
    if (param_1->selected_weapon->ammo_count != param_1->cached_ammo_count) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(param_1,0);
    }
    param_1->cached_ammo_count = param_1->selected_weapon->ammo_count;
  }
  local_1c = 0;
  pCVar9 = param_1;
  if (0 < param_1->item_count) {
    do {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (pCVar9->items[0],g_CLightGunClassInfo.name_hash);
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCVar9->items[0],g_CLightPisClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) || (this_ptr != (CDemonActor *)0x0)) {
        if (pCVar5 == (CDemonActor *)0x0) {
          if (this_ptr[2].location.position.y != 2.8026e-45) {
            (*((this_ptr->vtable)._ub)->process)(this_ptr,g_CGamePtr->delta_time_float);
          }
        }
        else if (pCVar5[2].location.position.y != 2.8026e-45) {
          (*((pCVar5->vtable)._ub)->process)(pCVar5,g_CGamePtr->delta_time_float);
        }
      }
      local_1c = local_1c + 1;
      pCVar9 = (CInventory *)&pCVar9->owner;
    } while (local_1c < param_1->item_count);
  }
  if ((((g_CGamePtr->goggles_active != 0) || (g_CFieldNotesPtr->is_displayed != 0)) ||
      (DAT_007c3978 != 0)) || (g_CGamePtr->letterbox_mode != 0)) {
    param_1->item_highlight_timer = 0.0;
    param_1->message_display_timer = 0.0;
    param_1->ammo_detail_timer = 0.0;
    param_1->weapon_highlight_timer = 0.0;
  }
  fVar2 = param_1->weapon_highlight_timer - g_CGamePtr->delta_time_float;
  param_1->weapon_highlight_timer = fVar2;
  if (fVar2 <= 0.0) {
    param_1->weapon_highlight_timer = 0.0;
  }
  fVar2 = param_1->item_highlight_timer - g_CGamePtr->delta_time_float;
  param_1->item_highlight_timer = fVar2;
  if (fVar2 <= 0.0) {
    param_1->item_highlight_timer = 0.0;
  }
  fVar2 = param_1->inventory_display_timer - g_CGamePtr->delta_time_float;
  param_1->inventory_display_timer = fVar2;
  if (fVar2 <= 0.0) {
    param_1->inventory_display_timer = 0.0;
  }
  fVar2 = param_1->message_display_timer - g_CGamePtr->delta_time_float;
  param_1->message_display_timer = fVar2;
  if (fVar2 <= 0.0) {
    param_1->message_text[0] = '\0';
    param_1->message_display_timer = 0.0;
  }
  fVar2 = param_1->ammo_detail_timer - g_CGamePtr->delta_time_float;
  param_1->ammo_detail_timer = fVar2;
  if (fVar2 < 0.0) {
    param_1->ammo_detail_timer = 0.0;
  }
  if ((param_1->show_sps != 0) &&
     (_DAT_01d06f70 = _DAT_01d06f70 - g_CGamePtr->delta_time_float, _DAT_01d06f70 <= 0.0)) {
    _DAT_01d06f70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.1,0.4);
    iVar11 = 0;
    iVar10 = 0;
    _DAT_01d1bc48 = 0xffffffff;
    while (iVar11 < g_CDemonSetPtr->character_count) {
      pCVar5 = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar10);
      if (((*(int *)(pCVar5[0x1d].create_event + 0x38) == 0) ||
          (iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar5,"CBird"), iVar6 != 0)) ||
         (iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (0x02C82A60,*(uint *)(pCVar5[0x1d].create_event + 0x3c)), iVar6 != 0))
      {
LAB_004fa216:
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar2 = *(float *)(iVar6 + 0x20) - (pCVar5->location).position.x;
        fVar4 = *(float *)(iVar6 + 0x24) - (pCVar5->location).position.y;
        fVar3 = *(float *)(iVar6 + 0x28) - (pCVar5->location).position.z;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005e67f8 < fVar2) goto LAB_004fa216;
        if (dVar1 <= _DAT_005e6800) {
          if (dVar1 <= _DAT_005e6808) {
            if (dVar1 <= _DAT_005e6810) {
              _DAT_01d1bc48 = 0;
              iVar6 = 0;
              while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c)), iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_full?.wav @ .3");
              *(uint *)(pCVar5[0x1d].create_event + 0x3c) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              _DAT_01d1bc48 = 1;
              iVar6 = 0;
              while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c)), iVar7 != 0) {
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_long?.wav @ .3");
              *(uint *)(pCVar5[0x1d].create_event + 0x3c) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            _DAT_01d1bc48 = 2;
            iVar6 = 0;
            while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                     (0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c)), iVar7 != 0) {
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                              (0x02C82A60,(void *)0x0,"sps_med?.wav @ .3");
            *(uint *)(pCVar5[0x1d].create_event + 0x3c) = uVar8;
            *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          _DAT_01d1bc48 = 3;
          iVar6 = 0;
          while (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                   (0x02C82A60,*(uint *)(iVar6 + 0x1d1bc4c)), iVar7 != 0) {
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                            (0x02C82A60,(void *)0x0,"sps_short?.wav @ .3");
          *(uint *)(pCVar5[0x1d].create_event + 0x3c) = uVar8;
          *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}

// Name: core_inv.cpp_CInventory_updateInventory_FUN_004f9f10
// Address: 004f9f10
// Address Range: [[004f9f10, 004fa468]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004f9f10(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004f9f10(CInventory *this_ptr)

{
  double dVar1;
  CHero *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  CDemonActor *this_ptr_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  CInventory *pCVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  
  if (this_ptr->selected_weapon != (CWeapon *)0x0) {
    if (this_ptr->selected_weapon->ammo_count != this_ptr->cached_ammo_count) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapon->ammo_count;
  }
  local_1c = 0;
  pCVar10 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (pCVar10->items[0],g_CLightGunClassInfo.name_hash);
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c600
                              (pCVar10->items[0],g_CLightPisClassInfo.name_hash);
      if ((pCVar6 != (CDemonActor *)0x0) || (this_ptr_00 != (CDemonActor *)0x0)) {
        if (pCVar6 == (CDemonActor *)0x0) {
          if (this_ptr_00[2].location.position.y != 2.8026e-45) {
            (*((this_ptr_00->vtable)._ub)->process)(this_ptr_00,g_CGamePtr->delta_time_float);
          }
        }
        else if (pCVar6[2].location.position.y != 2.8026e-45) {
          (*((pCVar6->vtable)._ub)->process)(pCVar6,g_CGamePtr->delta_time_float);
        }
      }
      local_1c = local_1c + 1;
      pCVar10 = (CInventory *)&pCVar10->owner;
    } while (local_1c < this_ptr->item_count);
  }
  if ((((g_CGamePtr->goggles_active != 0) || (g_CFieldNotesPtr->is_displayed != 0)) ||
      (g_CPuzzle_PTR_007c3978 != (CPuzzle *)0x0)) || (g_CGamePtr->letterbox_mode != 0)) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->message_display_timer = 0.0;
    this_ptr->ammo_detail_timer = 0.0;
    this_ptr->weapon_highlight_timer = 0.0;
  }
  fVar3 = this_ptr->weapon_highlight_timer - g_CGamePtr->delta_time_float;
  this_ptr->weapon_highlight_timer = fVar3;
  if (fVar3 <= 0.0) {
    this_ptr->weapon_highlight_timer = 0.0;
  }
  fVar3 = this_ptr->item_highlight_timer - g_CGamePtr->delta_time_float;
  this_ptr->item_highlight_timer = fVar3;
  if (fVar3 <= 0.0) {
    this_ptr->item_highlight_timer = 0.0;
  }
  fVar3 = this_ptr->inventory_display_timer - g_CGamePtr->delta_time_float;
  this_ptr->inventory_display_timer = fVar3;
  if (fVar3 <= 0.0) {
    this_ptr->inventory_display_timer = 0.0;
  }
  fVar3 = this_ptr->message_display_timer - g_CGamePtr->delta_time_float;
  this_ptr->message_display_timer = fVar3;
  if (fVar3 <= 0.0) {
    this_ptr->message_text[0] = '\0';
    this_ptr->message_display_timer = 0.0;
  }
  fVar3 = this_ptr->ammo_detail_timer - g_CGamePtr->delta_time_float;
  this_ptr->ammo_detail_timer = fVar3;
  if (fVar3 < 0.0) {
    this_ptr->ammo_detail_timer = 0.0;
  }
  if ((this_ptr->show_sps != 0) &&
     (g_FLOAT_01d06f70 = g_FLOAT_01d06f70 - g_CGamePtr->delta_time_float, g_FLOAT_01d06f70 <= 0.0))
  {
    g_FLOAT_01d06f70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.1,0.4);
    iVar12 = 0;
    iVar11 = 0;
    g_INT_01d1bc48 = -1;
    while (iVar12 < g_CDemonSetPtr->character_count) {
      pCVar6 = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar11);
      if (((*(int *)(pCVar6[0x1d].create_event + 0x38) == 0) ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar6,"CBird"), iVar7 != 0)) ||
         (iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (g_CSound_PTR_006236b8,*(uint *)(pCVar6[0x1d].create_event + 0x3c)),
         iVar7 != 0)) {
LAB_004fa216:
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 4;
      }
      else {
        pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        fVar3 = (pCVar2->base).base.location.position.x - (pCVar6->location).position.x;
        fVar5 = (pCVar2->base).base.location.position.y - (pCVar6->location).position.y;
        fVar4 = (pCVar2->base).base.location.position.z - (pCVar6->location).position.z;
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        dVar1 = (double)fVar3;
        if ((float)1600 < fVar3) goto LAB_004fa216;
        if (dVar1 <= 900) {
          if (dVar1 <= 400) {
            if (dVar1 <= 100) {
              g_INT_01d1bc48 = 0;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (g_CSound_PTR_006236b8,*(uint *)(iVar7 + 0x1d1bc4c)),
                    iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (g_CSound_PTR_006236b8,(void *)0x0,"sps_full?.wav @ .3");
              *(uint *)(pCVar6[0x1d].create_event + 0x3c) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            }
            else {
              g_INT_01d1bc48 = 1;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                       (g_CSound_PTR_006236b8,*(uint *)(iVar7 + 0x1d1bc4c)),
                    iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (g_CSound_PTR_006236b8,(void *)0x0,"sps_long?.wav @ .3");
              *(uint *)(pCVar6[0x1d].create_event + 0x3c) = uVar9;
              *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            }
          }
          else {
            g_INT_01d1bc48 = 2;
            iVar7 = 0;
            while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                     (g_CSound_PTR_006236b8,*(uint *)(iVar7 + 0x1d1bc4c)),
                  iVar8 != 0) {
              iVar7 = iVar7 + 4;
              if (0xf < iVar7) {
                return;
              }
            }
            uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                              (g_CSound_PTR_006236b8,(void *)0x0,"sps_med?.wav @ .3");
            *(uint *)(pCVar6[0x1d].create_event + 0x3c) = uVar9;
            *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
          }
        }
        else {
          g_INT_01d1bc48 = 3;
          iVar7 = 0;
          while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                   (g_CSound_PTR_006236b8,*(uint *)(iVar7 + 0x1d1bc4c)), iVar8 != 0)
          {
            iVar7 = iVar7 + 4;
            if (0xf < iVar7) {
              return;
            }
          }
          uVar9 = core_sound_cpp_CSound_playSound_FUN_0057d880
                            (g_CSound_PTR_006236b8,(void *)0x0,"sps_short?.wav @ .3");
          *(uint *)(pCVar6[0x1d].create_event + 0x3c) = uVar9;
          *(uint *)(iVar7 + 0x1d1bc4c) = uVar9;
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        }
      }
    }
  }
  return;
}

// Name: core_inv.cpp_CInventory_updateInventory_FUN_004dcdb0
// Address: 004dcdb0
// Address Range: [[004dcdb0, 004dd2ba]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dcdb0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dcdb0(CInventory *this_ptr)

{
  double dVar1;
  CHero *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonActor *pCVar6;
  CCharacter *this_ptr_00;
  EDeathState EVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (((this_ptr->selected_weapon != (CWeapon *)0x0) &&
      (pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (this_ptr->selected_weapon->carried_by_actor,g_CHeroClassInfo.name_hash),
      pCVar6 != (CDemonActor *)0x0)) &&
     (((this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA &&
       (this_ptr->cached_mana_count != *(int *)(pCVar6[0x185].create_event + 0x50))) ||
      ((this_ptr->selected_weapon->ammo_type == AMMO_TYPE_BULLET &&
       (this_ptr->cached_ammo_count != *(int *)(pCVar6[0x185].create_event + 0x54))))))) {
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(this_ptr,0);
    if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA) {
      this_ptr->cached_mana_count = *(int *)(pCVar6[0x185].create_event + 0x50);
    }
    else {
      this_ptr->cached_ammo_count = *(int *)(pCVar6[0x185].create_event + 0x54);
    }
  }
  if ((((g_CGamePtr->goggles_active != 0) || (g_CFieldNotesPtr->is_displayed != 0)) ||
      (g_CPuzzle_PTR_007dffb4 != (CPuzzle *)0x0)) || (g_CGamePtr->letterbox_mode != 0)) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->message_display_timer = 0.0;
    this_ptr->ammo_detail_timer = 0.0;
    this_ptr->weapon_highlight_timer = 0.0;
  }
  this_ptr->weapon_highlight_timer = this_ptr->weapon_highlight_timer - g_CGamePtr->delta_time_float
  ;
  if (this_ptr->weapon_highlight_timer <= 0.0) {
    this_ptr->weapon_highlight_timer = 0.0;
  }
  this_ptr->item_highlight_timer = this_ptr->item_highlight_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->item_highlight_timer <= 0.0) {
    this_ptr->item_highlight_timer = 0.0;
  }
  this_ptr->inventory_display_timer =
       this_ptr->inventory_display_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->inventory_display_timer <= 0.0) {
    this_ptr->inventory_display_timer = 0.0;
  }
  this_ptr->message_display_timer = this_ptr->message_display_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->message_display_timer <= 0.0) {
    this_ptr->message_text[0] = '\0';
    this_ptr->message_display_timer = 0.0;
  }
  this_ptr->ammo_detail_timer = this_ptr->ammo_detail_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->ammo_detail_timer < 0.0) {
    this_ptr->ammo_detail_timer = 0.0;
  }
  if ((this_ptr->show_sps != 0) &&
     (g_FLOAT_01d5be80 = g_FLOAT_01d5be80 - g_CGamePtr->delta_time_float, g_FLOAT_01d5be80 <= 0.0))
  {
    g_FLOAT_01d5be80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.4);
    iVar12 = 0;
    iVar11 = 0;
    g_INT_01d70a20 = -1;
    while (iVar12 < g_CDemonSetPtr->character_count) {
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar11),
                               g_CEnemyClassInfo.name_hash);
      if (((this_ptr_00 == (CCharacter *)0x0) ||
          (EVar7 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
          EVar7 != DEATH_STATE_ALIVE)) ||
         ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c790
                             ((CDemonActor *)this_ptr_00,"CTVBat"), iVar8 != 0 ||
          (iVar8 = core_actor_cpp_isOfClass_FUN_0040c790
                             ((CDemonActor *)this_ptr_00,"CWhitewolf"), iVar8 != 0)))) {
LAB_004dd05b:
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 4;
      }
      else {
        pCVar2 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
        fVar3 = (pCVar2->base).base.location.position.x - (this_ptr_00->base).location.position.x;
        fVar5 = (pCVar2->base).base.location.position.y - (this_ptr_00->base).location.position.y;
        fVar4 = (pCVar2->base).base.location.position.z - (this_ptr_00->base).location.position.z;
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        dVar1 = (double)fVar3;
        if ((float)1600 < fVar3) goto LAB_004dd05b;
        if (dVar1 <= 900) {
          if (dVar1 <= 400) {
            if (dVar1 <= 100) {
              g_INT_01d70a20 = 0;
              iVar8 = 0;
              while (iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (g_CSound_PTR_006045f8,*(uint *)(iVar8 + 0x1d70a24)),
                    iVar9 != 0) {
                iVar8 = iVar8 + 4;
                if (0xf < iVar8) {
                  return;
                }
              }
              uVar10 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                 (g_CSound_PTR_006045f8,(void *)0x0,"voodoo1.wav");
              this_ptr_00->spectral_sound_handle = uVar10;
              *(uint *)(iVar8 + 0x1d70a24) = uVar10;
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            }
            else {
              g_INT_01d70a20 = 1;
              iVar8 = 0;
              while (iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (g_CSound_PTR_006045f8,*(uint *)(iVar8 + 0x1d70a24)),
                    iVar9 != 0) {
                iVar8 = iVar8 + 4;
                if (0xf < iVar8) {
                  return;
                }
              }
              uVar10 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                 (g_CSound_PTR_006045f8,(void *)0x0,"voodoo2.wav");
              this_ptr_00->spectral_sound_handle = uVar10;
              *(uint *)(iVar8 + 0x1d70a24) = uVar10;
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
            }
          }
          else {
            g_INT_01d70a20 = 2;
            iVar8 = 0;
            while (iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                     (g_CSound_PTR_006045f8,*(uint *)(iVar8 + 0x1d70a24)),
                  iVar9 != 0) {
              iVar8 = iVar8 + 4;
              if (0xf < iVar8) {
                return;
              }
            }
            uVar10 = core_sound_cpp_CSound_playSound_FUN_005609b0
                               (g_CSound_PTR_006045f8,(void *)0x0,"voodoo3.wav");
            this_ptr_00->spectral_sound_handle = uVar10;
            *(uint *)(iVar8 + 0x1d70a24) = uVar10;
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
          }
        }
        else {
          g_INT_01d70a20 = 3;
          iVar8 = 0;
          while (iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                   (g_CSound_PTR_006045f8,*(uint *)(iVar8 + 0x1d70a24)), iVar9 != 0)
          {
            iVar8 = iVar8 + 4;
            if (0xf < iVar8) {
              return;
            }
          }
          uVar10 = core_sound_cpp_CSound_playSound_FUN_005609b0
                             (g_CSound_PTR_006045f8,(void *)0x0,"voodoo4.wav");
          this_ptr_00->spectral_sound_handle = uVar10;
          *(uint *)(iVar8 + 0x1d70a24) = uVar10;
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        }
      }
    }
  }
  return;
}

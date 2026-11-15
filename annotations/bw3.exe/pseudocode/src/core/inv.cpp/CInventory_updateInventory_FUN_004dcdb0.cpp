// Name: core_inv.cpp_CInventory_updateInventory_FUN_004dcdb0
// Address: 004dcdb0
// Address Range: [[004dcdb0, 004dd2ba]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dcdb0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dcdb0(CInventory *this_ptr)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  CCharacter *this_ptr_00;
  EDeathState EVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  if (((this_ptr->selected_weapon != (CWeapon *)0x0) &&
      (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (this_ptr->selected_weapon->carried_by_actor,g_CHeroClassInfo.name_hash),
      pCVar5 != (CDemonActor *)0x0)) &&
     (((this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA &&
       (this_ptr->cached_mana_count != *(int *)(pCVar5[0x185].create_event + 0x50))) ||
      ((this_ptr->selected_weapon->ammo_type == AMMO_TYPE_BULLET &&
       (this_ptr->cached_ammo_count != *(int *)(pCVar5[0x185].create_event + 0x54))))))) {
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(this_ptr,0);
    if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA) {
      this_ptr->cached_mana_count = *(int *)(pCVar5[0x185].create_event + 0x50);
    }
    else {
      this_ptr->cached_ammo_count = *(int *)(pCVar5[0x185].create_event + 0x54);
    }
  }
  if ((((g_CGamePtr->goggles_active != 0) || (g_CFieldNotesPtr->is_displayed != 0)) ||
      (DAT_007dffb4 != 0)) || (g_CGamePtr->letterbox_mode != 0)) {
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
     (_DAT_01d5be80 = _DAT_01d5be80 - g_CGamePtr->delta_time_float, _DAT_01d5be80 <= 0.0)) {
    _DAT_01d5be80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.4);
    iVar11 = 0;
    iVar10 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar11 < g_CDemonSetPtr->character_count) {
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar10),
                               g_CEnemyClassInfo.name_hash);
      if (((this_ptr_00 == (CCharacter *)0x0) ||
          (EVar6 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
          EVar6 != DEATH_STATE_ALIVE)) ||
         ((iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                             ((CDemonActor *)this_ptr_00,"CTVBat"), iVar7 != 0 ||
          (iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                             ((CDemonActor *)this_ptr_00,"CWhitewolf"), iVar7 != 0)))) {
LAB_004dd05b:
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar7 + 0x20) - (this_ptr_00->base).location.position.x;
        fVar4 = *(float *)(iVar7 + 0x24) - (this_ptr_00->base).location.position.y;
        fVar3 = *(float *)(iVar7 + 0x28) - (this_ptr_00->base).location.position.z;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c65df < fVar2) goto LAB_004dd05b;
        if (dVar1 <= _DAT_005c65e7) {
          if (dVar1 <= _DAT_005c65ef) {
            if (dVar1 <= _DAT_005c65f7) {
              _DAT_01d70a20 = 0;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (0x02CF5680,*(uint *)(iVar7 + 0x1d70a24)), iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo1.wav");
              this_ptr_00->spectral_sound_handle = uVar9;
              *(uint *)(iVar7 + 0x1d70a24) = uVar9;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              _DAT_01d70a20 = 1;
              iVar7 = 0;
              while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                       (0x02CF5680,*(uint *)(iVar7 + 0x1d70a24)), iVar8 != 0) {
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo2.wav");
              this_ptr_00->spectral_sound_handle = uVar9;
              *(uint *)(iVar7 + 0x1d70a24) = uVar9;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            _DAT_01d70a20 = 2;
            iVar7 = 0;
            while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                     (0x02CF5680,*(uint *)(iVar7 + 0x1d70a24)), iVar8 != 0) {
              iVar7 = iVar7 + 4;
              if (0xf < iVar7) {
                return;
              }
            }
            uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                              (0x02CF5680,(void *)0x0,"voodoo3.wav");
            this_ptr_00->spectral_sound_handle = uVar9;
            *(uint *)(iVar7 + 0x1d70a24) = uVar9;
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          _DAT_01d70a20 = 3;
          iVar7 = 0;
          while (iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                   (0x02CF5680,*(uint *)(iVar7 + 0x1d70a24)), iVar8 != 0) {
            iVar7 = iVar7 + 4;
            if (0xf < iVar7) {
              return;
            }
          }
          uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                            (0x02CF5680,(void *)0x0,"voodoo4.wav");
          this_ptr_00->spectral_sound_handle = uVar9;
          *(uint *)(iVar7 + 0x1d70a24) = uVar9;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}

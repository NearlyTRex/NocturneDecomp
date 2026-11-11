// Name: core_inv.cpp_CInventory_updateInventory_FUN_004dccd0
// Address: 004dccd0
// Address Range: [[004dccd0, 004dcfaf]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

{
  CWeapon *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CInventory *pCVar6;
  float local_20;
  float local_1c;
  
  pCVar1 = this_ptr->selected_weapons[this_ptr->current_group];
  if (pCVar1 != (CWeapon *)0x0) {
    if ((this_ptr->cached_ammo_count != pCVar1->ammo_count) &&
       (iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CLightGunClassInfo.name_hash),
       iVar4 == 0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapons[this_ptr->current_group]->ammo_count;
  }
  if ((g_CGamePtr->flashlight_active == 0) && (g_CGamePtr->goggles_active == 0)) {
    local_1c = 1.0 / _DAT_005f9020;
    if (0 < this_ptr->item_count) {
      iVar4 = 0;
      pCVar6 = this_ptr;
      do {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (pCVar6->items[0],g_CBatteryClassInfo.name_hash);
        if (iVar5 != 0) {
          local_1c = 1.0 / *(float *)(iVar5 + 0x434) + local_1c;
        }
        iVar4 = iVar4 + 1;
        pCVar6 = (CInventory *)&pCVar6->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar3 = (float)_DAT_005db9ea;
    fVar2 = g_CGamePtr->delta_time_float * fVar3 * local_1c + this_ptr->battery_charge;
    this_ptr->battery_charge = fVar2;
    if (fVar3 < fVar2) {
      this_ptr->battery_charge = 100.0;
    }
  }
  else {
    iVar4 = 0;
    local_20 = 0x43FA0000;
    pCVar6 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (pCVar6->items[0],g_CBatteryClassInfo.name_hash);
        if (iVar5 != 0) {
          local_20 = local_20 + *(float *)(iVar5 + 0x438);
        }
        iVar4 = iVar4 + 1;
        pCVar6 = (CInventory *)&pCVar6->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar2 = this_ptr->battery_charge -
            (g_CGamePtr->delta_time_float * (float)_DAT_005db9ea) / local_20;
    this_ptr->battery_charge = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->battery_charge = 0.0;
    }
  }
  iVar4 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (pCVar6->items[0],g_CLightGunClassInfo.name_hash);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x430) != 2)) {
        (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x14))(iVar5,g_CGamePtr->delta_time_float);
      }
      iVar4 = iVar4 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar4 < this_ptr->item_count);
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
    return;
  }
  return;
}

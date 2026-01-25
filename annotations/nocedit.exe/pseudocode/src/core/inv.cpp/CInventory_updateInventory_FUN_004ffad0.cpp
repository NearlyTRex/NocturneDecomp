// Name: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
// Address: 004ffad0
// Address Range: [[004ffad0, 004ffd9e]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr)

{
  CWeapon *actor_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CInventory *pCVar5;
  float local_20;
  float local_1c;
  
  actor_ptr = this_ptr->selected_weapon;
  if (actor_ptr != (CWeapon *)0x0) {
    if ((this_ptr->cached_ammo_count != actor_ptr->ammo_count) &&
       (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (&actor_ptr->base_actor,g_CLightGunClassInfo.name_hash),
       pCVar3 == (CDemonActor *)0x0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapon->ammo_count;
  }
  if ((g_CGamePtr->auto_save_blocked == 0) && (g_CGamePtr->block_auto_save == 0)) {
    local_20 = 1.0 / 120.0f;
    iVar4 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          local_20 = 1.0 / pCVar3[2].location.position.z + local_20;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar2 = (float)100;
    fVar1 = g_CGamePtr->delta_time_float * fVar2 * local_20 + this_ptr->battery_charge;
    this_ptr->battery_charge = fVar1;
    if (fVar2 < fVar1) {
      this_ptr->battery_charge = 100.0;
    }
  }
  else {
    iVar4 = 0;
    local_1c = 30.0f;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          local_1c = local_1c + (float)pCVar3[2].location.area_id;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar1 = this_ptr->battery_charge -
            (g_CGamePtr->delta_time_float * (float)100) / local_1c;
    this_ptr->battery_charge = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->battery_charge = 0.0;
    }
  }
  iVar4 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar5->items[0],g_CLightGunClassInfo.name_hash);
      if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[2].location.position.y != 2.8026e-45)) {
        (*((pCVar3->vtable)._ub)->process)(pCVar3,g_CGamePtr->delta_time_float);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CInventory *)&pCVar5->owner;
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

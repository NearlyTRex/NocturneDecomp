// Name: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
// Address: 004ffad0
// Address Range: [[004ffad0, 004ffd9e]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr)

{
  CWeapon *actor_ptr_00;
  float fVar3;
  CLightGun *pCVar3;
  CBattery *pCVar4;
  CLightGun *this_ptr_00;
  CBattery *pCVar6;
  int iVar4;
  int iVar5;
  CInventory *pCVar7;
  CInventory *pCVar5;
  float local_20;
  float local_1c;
  float fVar2;
  CWeapon *actor_ptr;
  float fVar1;
  
  actor_ptr_00 = this_ptr->selected_weapon;
  if (actor_ptr_00 != (CWeapon *)0x0) {
    if ((this_ptr->cached_ammo_count != actor_ptr_00->ammo_count) &&
       (pCVar3 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (&actor_ptr_00->base,g_CLightGunClassInfo.name_hash),
       pCVar3 == (CLightGun *)0x0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapon->ammo_count;
  }
  if ((g_CGamePtr->flashlight_active == 0) && (g_CGamePtr->goggles_active == 0)) {
    local_20 = 1.0 / 120.0f;
    iVar5 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar6 = (CBattery *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar6 != (CBattery *)0x0) {
          local_20 = 1.0 / pCVar6->recharge_time + local_20;
        }
        iVar5 = iVar5 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar5 < this_ptr->item_count);
    }
    fVar2 = (float)100;
    fVar3 = g_CGamePtr->delta_time_float * fVar2 * local_20 + this_ptr->battery_charge;
    this_ptr->battery_charge = fVar3;
    if (fVar2 < fVar3) {
      this_ptr->battery_charge = 100.0;
    }
  }
  else {
    iVar4 = 0;
    local_1c = 30.0f;
    pCVar7 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar4 = (CBattery *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar7->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar4 != (CBattery *)0x0) {
          local_1c = local_1c + pCVar4->discharge_time;
        }
        iVar4 = iVar4 + 1;
        pCVar7 = (CInventory *)&pCVar7->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar1 = this_ptr->battery_charge -
            (g_CGamePtr->delta_time_float * (float)100) / local_1c;
    this_ptr->battery_charge = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->battery_charge = 0.0;
    }
  }
  iVar5 = 0;
  pCVar7 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      this_ptr_00 = (CLightGun *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (pCVar7->items[0],g_CLightGunClassInfo.name_hash);
      if ((this_ptr_00 != (CLightGun *)0x0) && ((this_ptr_00->base).weapon_state != 2)) {
        (*((this_ptr_00->base).base.vtable._ub)->process)
                  ((CDemonActor *)this_ptr_00,g_CGamePtr->delta_time_float);
      }
      iVar5 = iVar5 + 1;
      pCVar7 = (CInventory *)&pCVar7->owner;
    } while (iVar5 < this_ptr->item_count);
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

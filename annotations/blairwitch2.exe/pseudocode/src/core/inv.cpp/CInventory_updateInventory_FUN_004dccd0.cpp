// Name: core_inv.cpp_CInventory_updateInventory_FUN_004dccd0
// Address: 004dccd0
// Address Range: [[004dccd0, 004dcfaf]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)

{
  CWeapon *actor_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CInventory *pCVar5;
  float local_20;
  float local_1c;
  
  actor_ptr = this_ptr->selected_weapons[this_ptr->current_group];
  if (actor_ptr != (CWeapon *)0x0) {
    if ((this_ptr->cached_ammo_count != *(int *)((int)(&actor_ptr->physics_box + 1) + 8)) &&
       (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (&actor_ptr->base,g_CLightGunClassInfo.name_hash),
       pCVar3 == (CDemonActor *)0x0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapons[this_ptr->current_group]->ammo_count;
  }
  if ((g_CGamePtr->flashlight_active == 0) && (g_CGamePtr->goggles_active == 0)) {
    local_1c = 1.0 / _DAT_005f9020;
    if (0 < this_ptr->item_count) {
      iVar4 = 0;
      pCVar5 = this_ptr;
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          local_1c = 1.0 / pCVar3[1].particle_systems[0].fade_duration + local_1c;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar2 = (float)_DAT_005db9ea;
    fVar1 = g_CGamePtr->delta_time_float * fVar2 * local_1c + this_ptr->battery_charge;
    this_ptr->battery_charge = fVar1;
    if (fVar2 < fVar1) {
      this_ptr->battery_charge = 100.0;
    }
  }
  else {
    iVar4 = 0;
    local_20 = 0x43FA0000;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          local_20 = local_20 + pCVar3[1].particle_systems[0].fade_timer;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar1 = this_ptr->battery_charge -
            (g_CGamePtr->delta_time_float * (float)_DAT_005db9ea) / local_20;
    this_ptr->battery_charge = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->battery_charge = 0.0;
    }
  }
  iVar4 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (pCVar5->items[0],g_CLightGunClassInfo.name_hash);
      if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[1].particle_systems[0].fade_end != 2.8026e-45))
      {
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

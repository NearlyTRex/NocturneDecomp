// Name: core_inv.cpp_CInventory_ctor_FUN_004da760
// Address: 004da760
// Address Range: [[004da760, 004da836]]
// Convention: __cdecl
// Signature: CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004da760(CInventory *this_ptr)

#include "nocturne.h"

CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004da760(CInventory *this_ptr)

{
  CDemonActor **ppCVar1;
  CInventory *pCVar2;
  
  this_ptr->save_version = 0;
  this_ptr->battery_charge = 100.0;
  this_ptr->owner = (CDemonActor *)0x0;
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 0.0;
  this_ptr->inventory_display_timer = 0.0;
  this_ptr->render_mode_flag = 0;
  this_ptr->preserve_items = 0;
  this_ptr->light_gun_ptr = (CLightGun *)0x0;
  this_ptr->message_display_timer = 0.0;
  this_ptr->message_text[0] = '\0';
  this_ptr->ammo_ptr = (CAmmo *)0x0;
  this_ptr->cached_ammo_count = 0;
  this_ptr->show_compass = 0;
  this_ptr->show_sps = 0;
  this_ptr->current_group = 0;
  this_ptr->item_count = 0;
  pCVar2 = this_ptr;
  do {
    ppCVar1 = &pCVar2->owner;
    pCVar2->item_groups[0] = 0;
    pCVar2 = (CInventory *)ppCVar1;
  } while (ppCVar1 != this_ptr->items + 0x5f);
  pCVar2 = this_ptr;
  do {
    ppCVar1 = &pCVar2->owner;
    pCVar2->selected_items[0] = (CDemonActor *)0x0;
    pCVar2->selected_weapons[0] = (CWeapon *)0x0;
    pCVar2 = (CInventory *)ppCVar1;
  } while (ppCVar1 != this_ptr->items);
  return this_ptr;
}

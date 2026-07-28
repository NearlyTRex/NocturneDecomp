// Name: core_inv.cpp_CInventory_ctor_FUN_004bedc0
// Address: 004bedc0
// Address Range: [[004bedc0, 004bee57]]
// Convention: __cdecl
// Signature: CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004bedc0(CInventory *this_ptr)

#include "nocturne.h"

CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004bedc0(CInventory *this_ptr)

{
  this_ptr->save_version = 0;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  this_ptr->selected_item = (CDemonActor *)0x0;
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
  this_ptr->item_count = 0;
  return this_ptr;
}

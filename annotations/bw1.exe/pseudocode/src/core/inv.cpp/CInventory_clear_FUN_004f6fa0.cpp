// Name: core_inv.cpp_CInventory_clear_FUN_004f6fa0
// Address: 004f6fa0
// Address Range: [[004f6fa0, 004f7042]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004f6fa0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_clear_FUN_004f6fa0(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_FUN_004f8d00(this_ptr,this_ptr->items[0],(uint)(this_ptr->preserve_items == 0));
    iVar1 = this_ptr->item_count;
  }
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->preserve_items = 0;
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  if (this_ptr_00 != (CAmmo *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->dtor)(&this_ptr_00->base,2);
    this_ptr->ammo_ptr = (CAmmo *)0x0;
  }
  this_ptr->goggles_ptr = (CGoggles *)0x0;
  this_ptr->show_compass = 0;
  this_ptr->show_sps = 0;
  this_ptr->light_gun_ptr = (CLightGun *)0x0;
  return;
}

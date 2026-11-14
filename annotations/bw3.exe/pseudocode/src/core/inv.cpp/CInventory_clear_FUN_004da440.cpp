// Name: core_inv.cpp_CInventory_clear_FUN_004da440
// Address: 004da440
// Address Range: [[004da440, 004da4d9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004da440(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004da4a0) */

void __cdecl core_inv_cpp_CInventory_clear_FUN_004da440(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_CInventory_removeItem_FUN_004dbaa0
              (this_ptr,this_ptr->items[0],(uint)(this_ptr->preserve_items == 0));
    iVar1 = this_ptr->item_count;
  }
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->preserve_items = 0;
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  if (this_ptr_00 == (CAmmo *)0x0) {
    this_ptr->show_sps = 0;
    return;
  }
  (*((this_ptr_00->base).vtable._ub)->dtor)(&this_ptr_00->base,2);
  this_ptr->ammo_ptr = (CAmmo *)0x0;
  this_ptr->show_sps = 0;
  return;
}

// Name: core_inv.cpp_CInventory_clear_FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd180]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fd155) */

void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_CInventory_removeItem_FUN_004fea70
              (this_ptr,this_ptr->items[0],(uint)(this_ptr->preserve_items == 0));
    iVar1 = this_ptr->item_count;
  }
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->preserve_items = 0;
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  if (this_ptr_00 == (CAmmo *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\inv.cpp";
  g_CurrentDebugLine = 0x102;
  (*((this_ptr_00->base).vtable._ub)->dtor)(&this_ptr_00->base,2);
  this_ptr->ammo_ptr = (CAmmo *)0x0;
  return;
}

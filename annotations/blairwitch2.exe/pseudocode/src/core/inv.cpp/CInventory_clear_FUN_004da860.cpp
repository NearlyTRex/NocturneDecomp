// Name: core_inv.cpp_CInventory_clear_FUN_004da860
// Address: 004da860
// Address Range: [[004da860, 004da8f4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004da860(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_clear_FUN_004da860(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  CInventory *pCVar2;
  CDemonActor **ppCVar3;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_FUN_004db8e0(this_ptr,this_ptr->items[0],this_ptr->preserve_items == 0);
    iVar1 = this_ptr->item_count;
  }
  pCVar2 = this_ptr;
  do {
    ppCVar3 = &pCVar2->owner;
    pCVar2->selected_items[0] = (CDemonActor *)0x0;
    pCVar2->selected_weapons[0] = (CWeapon *)0x0;
    pCVar2 = (CInventory *)ppCVar3;
  } while (ppCVar3 != this_ptr->items);
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->preserve_items = 0;
  if (this_ptr_00 != (CAmmo *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->dtor)(&this_ptr_00->base,2);
    this_ptr->ammo_ptr = (CAmmo *)0x0;
  }
  this_ptr->show_sps = 0;
  this_ptr->show_compass = 0;
  return;
}

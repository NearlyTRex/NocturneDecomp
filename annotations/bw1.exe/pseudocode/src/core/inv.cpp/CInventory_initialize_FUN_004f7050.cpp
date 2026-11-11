// Name: core_inv.cpp_CInventory_initialize_FUN_004f7050
// Address: 004f7050
// Address Range: [[004f7050, 004f70d4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_initialize_FUN_004f7050(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004f7050(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  CInventory *pCVar2;
  CDemonActor **ppCVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004f6fa0(this_ptr);
  pCVar2 = this_ptr;
  do {
    iVar1 = rand();
    ppCVar3 = &pCVar2->owner;
    pCVar2->item_angles[0] = (float)iVar1 * _DAT_005e6064 * _DAT_005e6068 * (float)_DAT_005e6070;
    pCVar2 = (CInventory *)ppCVar3;
  } while (ppCVar3 != this_ptr->items + 0x5f);
  if (this_ptr->ammo_ptr != (CAmmo *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmo *)core_actor_cpp_createActorByName_FUN_0040c2b0("CAmmo");
  this_ptr->ammo_ptr = this_ptr_00;
  (*((this_ptr_00->base).vtable._ub)->setup)((CDemonActor *)this_ptr_00);
  this_ptr->cached_ammo_count = 0;
  return;
}

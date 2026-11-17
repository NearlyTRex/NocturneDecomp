// Name: core_inv.cpp_CInventory_initialize_FUN_004da900
// Address: 004da900
// Address Range: [[004da900, 004da985]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da900(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004da900(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  CInventory *pCVar2;
  CDemonActor **ppCVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004da860(this_ptr);
  pCVar2 = this_ptr;
  do {
    iVar1 = rand();
    ppCVar3 = &pCVar2->owner;
    pCVar2->item_angles[0] =
         (float)iVar1 * 3.051851e-05f * 3.141593f *
         (float)2;
    pCVar2 = (CInventory *)ppCVar3;
  } while (ppCVar3 != this_ptr->items + 0x5f);
  if (this_ptr->ammo_ptr != (CAmmo *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmo *)core_actor_cpp_createActorByName_FUN_0040c5a0("CAmmo");
  this_ptr->ammo_ptr = this_ptr_00;
  (*((this_ptr_00->base).vtable._ub)->setup)((CDemonActor *)this_ptr_00);
  this_ptr->cached_ammo_count = 0;
  return;
}

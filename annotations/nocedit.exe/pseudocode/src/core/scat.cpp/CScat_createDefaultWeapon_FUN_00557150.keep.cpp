// Name: core_scat.cpp_CScat_createDefaultWeapon_FUN_00557150
// Address: 00557150
// MANUAL RECONSTRUCTION
// Address Range: [[00557150, 005571b4]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_00557150(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_createDefaultWeapon_FUN_00557150(CScat *this_ptr)

{
  CBaronWeapon *item_actor;
  CInventory *this_ptr_00;

  this_ptr_00 = &(this_ptr->base).inventory;
  core_inv_cpp_CInventory_initialize_FUN_004fd190(this_ptr_00);
  item_actor = (CBaronWeapon *)
               core_actor_cpp_createActorByName_FUN_0040c430("CBaronWeapon");
  strcpy((item_actor->base).base.actor_name, "BaronProxy");
  core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr_00,(CDemonActor *)item_actor,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr_00,(CDemonActor *)0x0,5,1);
  return;
}

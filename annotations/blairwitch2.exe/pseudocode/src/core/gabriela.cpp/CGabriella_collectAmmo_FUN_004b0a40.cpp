// Name: core_gabriela.cpp_CGabriella_collectAmmo_FUN_004b0a40
// Address: 004b0a40
// Address Range: [[004b0a40, 004b0a80]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  CAmmoBox *this_ptr_00;
  
  pCVar1 = (this_ptr->base).object_to_pick_up;
  if (pCVar1 == (CDemonActor *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmoBox *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,g_CAmmoBoxClassInfo.name_hash);
  if (this_ptr_00 != (CAmmoBox *)0x0) {
    core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e670(this_ptr_00,(this_ptr->base).inventories);
  }
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  return;
}

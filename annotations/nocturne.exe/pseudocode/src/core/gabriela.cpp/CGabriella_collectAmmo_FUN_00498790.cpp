// Name: core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790
// Address: 00498790
// Address Range: [[00498790, 004987d0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella *this_ptr)

{
  CDemonActor *actor_ptr;
  CAmmoBox *this_ptr_00;
  
  actor_ptr = (this_ptr->base).object_to_pick_up;
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmoBox *)
                core_actor_cpp_castToClassHash_FUN_0040d890
                          (actor_ptr,g_CAmmoBoxActorType_007641f8.name_hash);
  if (this_ptr_00 != (CAmmoBox *)0x0) {
    core_ammobox_cpp_FUN_0040f1a0(this_ptr_00,&(this_ptr->base).inventory);
  }
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  return;
}

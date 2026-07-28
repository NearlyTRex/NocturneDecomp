// Name: core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790
// Address: 00498790
// Address Range: [[00498790, 004987d0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (this_ptr->base).object_to_pick_up;
  if (pCVar1 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (pCVar1,g_CAmmoBoxActorType_007641f8.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_ammobox_cpp_FUN_0040f1a0(pCVar1,&(this_ptr->base).inventory);
  }
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  return;
}

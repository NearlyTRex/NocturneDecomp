// Name: core_gabriela.cpp_CGabriella_FUN_004d5c10
// Address: 004d5c10
// Address Range: [[004d5c10, 004d5c50]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5c10(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d5c10(CGabriella *this_ptr)

{
  CDemonActor *actor_ptr;
  CAmmoBox *this_ptr_00;
  
  actor_ptr = (this_ptr->base).object_to_pick_up;
  if (actor_ptr == (CDemonActor *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmoBox *)
                core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoBoxClassInfo.name_hash)
  ;
  if (this_ptr_00 != (CAmmoBox *)0x0) {
    core_ammobox_cpp_CAmmoBox_FUN_00411700(this_ptr_00,&(this_ptr->base).inventory);
  }
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  return;
}

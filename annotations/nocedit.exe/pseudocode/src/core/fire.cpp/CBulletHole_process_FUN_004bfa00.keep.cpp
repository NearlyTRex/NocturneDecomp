// Name: core_fire.cpp_CBulletHole_process_FUN_004bfa00
// Address: 004bfa00
// MANUAL RECONSTRUCTION
// Address Range: [[004bfa00, 004bfa3e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_process_FUN_004bfa00(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_process_FUN_004bfa00(CBulletHole *this_ptr)

{
  CBulletHole *pCVar1;
  CVector3f local_10;
  
  if (this_ptr->actor_ptr != (CDemonActor *)0x0) {
    pCVar1 = (CBulletHole *)
             core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr->actor_ptr,&local_10,&this_ptr->transformed_pos);
    if (this_ptr != pCVar1) {
      this_ptr->position = pCVar1->position;
      return;
    }
  }
  return;
}

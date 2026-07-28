// Name: core_fire.cpp_CBulletHole_process_FUN_00482e90
// Address: 00482e90
// Address Range: [[00482e90, 00482ece]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_process_FUN_00482e90(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_process_FUN_00482e90(CBulletHole *this_ptr)

{
  CBulletHole *pCVar1;
  CVector3f local_10;
  
  if (this_ptr->actor_ptr != (CDemonActor *)0x0) {
    pCVar1 = (CBulletHole *)
             core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (this_ptr->actor_ptr,&local_10,&this_ptr->transformed_pos);
    if (this_ptr != pCVar1) {
      (this_ptr->position).x = (pCVar1->position).x;
      (this_ptr->position).y = (pCVar1->position).y;
      (this_ptr->position).z = (pCVar1->position).z;
      return;
    }
  }
  return;
}

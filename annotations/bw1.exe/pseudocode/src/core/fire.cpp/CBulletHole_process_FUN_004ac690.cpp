// Name: core_fire.cpp_CBulletHole_process_FUN_004ac690
// Address: 004ac690
// Address Range: [[004ac690, 004ac6e6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_process_FUN_004ac690(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_process_FUN_004ac690(CBulletHole *this_ptr)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f local_24;
  float local_18;
  float local_14 [2];
  
  bVar1 = 0;
  if (this_ptr->actor_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (this_ptr->actor_ptr,&this_ptr->transformed_pos,&local_24);
    local_18 = local_24.x;
    local_14[(uint)bVar1 * -2] = *(float *)((int)&local_24 + (uint)bVar1 * -8 + 4);
    local_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(float *)((int)&local_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if (this_ptr != (CBulletHole *)&local_18) {
      (this_ptr->position).x = local_18;
      (this_ptr->position).y = local_14[0];
      (this_ptr->position).z = local_14[1];
      return;
    }
  }
  return;
}

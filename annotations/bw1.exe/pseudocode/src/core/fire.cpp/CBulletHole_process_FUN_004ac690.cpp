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
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0;
  if (this_ptr->actor_ptr != (CDemonActor *)0x0) {
    core_actor_cpp_FUN_00408b40(this_ptr->actor_ptr,&this_ptr->transformed_pos);
    local_18 = local_24;
    *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (this_ptr != (CBulletHole *)&stack0xffffffe8) {
      (this_ptr->position).x = local_18;
      (this_ptr->position).y = local_14;
      (this_ptr->position).z = local_10;
      return;
    }
  }
  return;
}

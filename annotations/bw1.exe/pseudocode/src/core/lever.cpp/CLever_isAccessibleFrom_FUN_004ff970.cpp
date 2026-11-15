// Name: core_lever.cpp_CLever_isAccessibleFrom_FUN_004ff970
// Address: 004ff970
// Address Range: [[004ff970, 004ff9ef]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004ff970(CLever *this_ptr,CVector3f *world_position)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004ff970(CLever *this_ptr,CVector3f *world_position)

{
  byte bVar1;
  float afStackY_1010 [1016];
  float local_28;
  float local_20;
  CVector3f local_1c;
  
  bVar1 = 0;
  if (this_ptr->allowed_sides != LEVER_OPEN_SIDES_BOTH) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              (&this_ptr->base,world_position,&local_1c);
    local_28 = local_1c.x;
    *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)((int)&local_1c + (uint)bVar1 * -8 + 4);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)((int)&local_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if ((this_ptr->allowed_sides != LEVER_OPEN_SIDES_POS_Z) || (local_20 <= 0.0)) {
      if ((this_ptr->allowed_sides == LEVER_OPEN_SIDES_NEG_Z) && (local_20 < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

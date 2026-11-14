// Name: core_lever.cpp_CLever_isAccessibleFrom_FUN_004e24e0
// Address: 004e24e0
// Address Range: [[004e24e0, 004e255f]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004e24e0(CLever *this_ptr,CVector3f *world_position)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_isAccessibleFrom_FUN_004e24e0(CLever *this_ptr,CVector3f *world_position)

{
  byte bVar1;
  float afStackY_1010 [1016];
  uint local_28;
  float local_20;
  uint local_1c;
  
  bVar1 = 0;
  if (this_ptr->allowed_sides != LEVER_OPEN_SIDES_BOTH) {
    core_actor_cpp_FUN_00408de0(this_ptr,world_position);
    local_28 = local_1c;
    *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if ((this_ptr->allowed_sides != LEVER_OPEN_SIDES_POS_Z) || (local_20 <= 0.0)) {
      if ((this_ptr->allowed_sides == LEVER_OPEN_SIDES_NEG_Z) && (local_20 < 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

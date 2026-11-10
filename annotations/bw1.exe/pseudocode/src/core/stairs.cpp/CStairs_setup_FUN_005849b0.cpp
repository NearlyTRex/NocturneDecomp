// Name: core_stairs.cpp_CStairs_setup_FUN_005849b0
// Address: 005849b0
// Address Range: [[005849b0, 005849cf]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_setup_FUN_005849b0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_setup_FUN_005849b0(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_stairs_cpp_CStairs_buildCollision_FUN_00584cc0(this_ptr);
  return;
}

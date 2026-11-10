// Name: core_stairs.cpp_CStairs_setup_FUN_00561f60
// Address: 00561f60
// Address Range: [[00561f60, 00561f7f]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_setup_FUN_00561f60(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_setup_FUN_00561f60(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_stairs_cpp_CStairs_buildCollision_FUN_00562240(this_ptr);
  return;
}

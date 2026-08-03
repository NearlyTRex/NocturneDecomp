// Name: core_stairs.cpp_CStairs_setup_FUN_00534820
// Address: 00534820
// Address Range: [[00534820, 0053483f]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_setup_FUN_00534820(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_setup_FUN_00534820(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(this_ptr);
  return;
}

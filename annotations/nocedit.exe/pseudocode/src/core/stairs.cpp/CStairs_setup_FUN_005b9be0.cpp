// Name: core_stairs.cpp_CStairs_setup_FUN_005b9be0
// Address: 005b9be0
// Address Range: [[005b9be0, 005b9be9]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_setup_FUN_005b9be0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_setup_FUN_005b9be0(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_stairs_cpp_CStairs_buildCollision_FUN_005ba700(this_ptr);
  return;
}

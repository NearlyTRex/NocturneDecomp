// Name: core_stairs.cpp_CStairs_setup_FUN_00568420
// Address: 00568420
// Address Range: [[00568420, 0056843f]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_setup_FUN_00568420(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_setup_FUN_00568420(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_stairs_cpp_CStairs_buildCollision_FUN_00568730(this_ptr);
  return;
}

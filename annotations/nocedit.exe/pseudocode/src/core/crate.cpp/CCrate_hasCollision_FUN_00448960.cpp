// Name: core_crate.cpp_CCrate_hasCollision_FUN_00448960
// Address: 00448960
// Address Range: [[00448960, 0044897a]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_hasCollision_FUN_00448960(CCrate *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_hasCollision_FUN_00448960(CCrate *this_ptr,SCollisionInfo *collision_info)

{
  if (((this_ptr->base).was_created == 1) && (this_ptr->carrier == (CDemonActor *)0x0)) {
    return 1;
  }
  return 0;
}

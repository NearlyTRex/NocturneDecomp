// Name: core_vessel.cpp_CCryptVessel_hasCollision_FUN_005e9b90
// Address: 005e9b90
// Address Range: [[005e9b90, 005e9baa]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_hasCollision_FUN_005e9b90(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_hasCollision_FUN_005e9b90(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

{
  if (((this_ptr->base).was_created == 1) && (this_ptr->carrier == (CDemonActor *)0x0)) {
    return 1;
  }
  return 0;
}

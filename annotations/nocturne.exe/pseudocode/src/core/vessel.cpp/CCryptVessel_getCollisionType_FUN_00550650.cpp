// Name: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00550650
// Address: 00550650
// Address Range: [[00550650, 0055066a]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00550650(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00550650(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

{
  if (((this_ptr->base).lifecycle_state == ACTOR_CREATED) &&
     (this_ptr->carrier == (CDemonActor *)0x0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

// Name: core_vessel.cpp_CCryptVessel_getCollisionType_FUN_00585c70
// Address: 00585c70
// Address Range: [[00585c70, 00585c8a]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00585c70(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_vessel_cpp_CCryptVessel_getCollisionType_FUN_00585c70(CCryptVessel *this_ptr,SCollisionInfo *collision_info)

{
  if (((this_ptr->base).lifecycle_state == ACTOR_CREATED) &&
     (this_ptr->carrier == (CDemonActor *)0x0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

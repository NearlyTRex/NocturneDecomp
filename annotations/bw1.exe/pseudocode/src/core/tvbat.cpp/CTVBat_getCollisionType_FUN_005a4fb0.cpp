// Name: core_tvbat.cpp_CTVBat_getCollisionType_FUN_005a4fb0
// Address: 005a4fb0
// Address Range: [[005a4fb0, 005a4fcf] [005a4fd3, 005a4fd8]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005a4fb0(CTVBat *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005a4fb0(CTVBat *this_ptr,SCollisionInfo *collision_info)

{
  if ((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->state != 3)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

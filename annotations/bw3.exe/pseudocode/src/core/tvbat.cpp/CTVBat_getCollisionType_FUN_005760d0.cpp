// Name: core_tvbat.cpp_CTVBat_getCollisionType_FUN_005760d0
// Address: 005760d0
// Address Range: [[005760d0, 005760ef] [005760f3, 005760f8]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005760d0(CTVBat *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005760d0(CTVBat *this_ptr,SCollisionInfo *collision_info)

{
  if ((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->state != 3)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

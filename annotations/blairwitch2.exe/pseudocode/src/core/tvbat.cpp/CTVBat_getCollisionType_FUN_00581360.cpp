// Name: core_tvbat.cpp_CTVBat_getCollisionType_FUN_00581360
// Address: 00581360
// Address Range: [[00581360, 0058137f] [00581383, 00581388]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_00581360(CTVBat *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_00581360(CTVBat *this_ptr,SCollisionInfo *collision_info)

{
  if ((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->state != 3)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

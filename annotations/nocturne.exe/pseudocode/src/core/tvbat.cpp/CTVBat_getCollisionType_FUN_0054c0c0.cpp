// Name: core_tvbat.cpp_CTVBat_getCollisionType_FUN_0054c0c0
// Address: 0054c0c0
// Address Range: [[0054c0c0, 0054c0df] [0054c0e3, 0054c0e8]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(CTVBat *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_0054c0c0(CTVBat *this_ptr,SCollisionInfo *collision_info)

{
  if ((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->state != 3)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}

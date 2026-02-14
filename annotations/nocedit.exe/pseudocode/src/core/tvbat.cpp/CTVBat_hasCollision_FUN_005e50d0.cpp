// Name: core_tvbat.cpp_CTVBat_hasCollision_FUN_005e50d0
// Address: 005e50d0
// Address Range: [[005e50d0, 005e50ef] [005e50f3, 005e50f8]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_hasCollision_FUN_005e50d0(CTVBat *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_hasCollision_FUN_005e50d0(CTVBat *this_ptr,SCollisionInfo *collision_info)

{
  if ((0.0 < (this_ptr->base).base.hit_points) && (this_ptr->state != 3)) {
    return 1;
  }
  return 0;
}

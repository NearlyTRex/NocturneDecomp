// Name: core_stairs.cpp_CStairs_getCollisionType_FUN_00584ae0
// Address: 00584ae0
// Address Range: [[00584ae0, 00584af1]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00584ae0(CStairs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00584ae0(CStairs *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_query).ray_type != 0) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CUSTOM;
}

// Name: core_stairs.cpp_CStairs_getCollisionType_FUN_00568550
// Address: 00568550
// Address Range: [[00568550, 00568561]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00568550(CStairs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00568550(CStairs *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_query).ray_type != 0) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CUSTOM;
}

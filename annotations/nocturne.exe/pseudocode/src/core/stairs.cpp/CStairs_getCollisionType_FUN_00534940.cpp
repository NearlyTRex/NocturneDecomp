// Name: core_stairs.cpp_CStairs_getCollisionType_FUN_00534940
// Address: 00534940
// Address Range: [[00534940, 00534951]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00534940(CStairs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_00534940(CStairs *this_ptr,SCollisionInfo *collision_info)

{
  if ((collision_info->ray_query).ray_type != 0) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CUSTOM;
}

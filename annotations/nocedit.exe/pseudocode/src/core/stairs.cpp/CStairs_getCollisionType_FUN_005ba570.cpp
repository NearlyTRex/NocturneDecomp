// Name: core_stairs.cpp_CStairs_getCollisionType_FUN_005ba570
// Address: 005ba570
// Address Range: [[005ba570, 005ba581]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_005ba570(CStairs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_stairs_cpp_CStairs_getCollisionType_FUN_005ba570(CStairs *this_ptr,SCollisionInfo *collision_info)

{
  if (collision_info->ray_type != 0) {
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_CUSTOM;
}

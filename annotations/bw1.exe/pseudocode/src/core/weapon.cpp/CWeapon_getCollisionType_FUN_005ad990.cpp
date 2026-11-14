// Name: core_weapon.cpp_CWeapon_getCollisionType_FUN_005ad990
// Address: 005ad990
// Address Range: [[005ad990, 005ad99f]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_005ad990(CWeapon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_005ad990(CWeapon *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)((collision_info->ray_query).ray_type == 4);
}

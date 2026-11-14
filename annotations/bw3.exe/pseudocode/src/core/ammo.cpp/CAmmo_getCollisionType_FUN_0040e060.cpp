// Name: core_ammo.cpp_CAmmo_getCollisionType_FUN_0040e060
// Address: 0040e060
// Address Range: [[0040e060, 0040e06f]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammo_cpp_CAmmo_getCollisionType_FUN_0040e060(CAmmo *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammo_cpp_CAmmo_getCollisionType_FUN_0040e060(CAmmo *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)((collision_info->ray_query).ray_type == 4);
}

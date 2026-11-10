// Name: core_weapon.cpp_CWeapon_getCollisionType_FUN_0057b430
// Address: 0057b430
// Address Range: [[0057b430, 0057b43f]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_0057b430(CWeapon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_weapon_cpp_CWeapon_getCollisionType_FUN_0057b430(CWeapon *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(*(int *)collision_info == 4);
}

// Name: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040e9c0
// Address: 0040e9c0
// Address Range: [[0040e9c0, 0040e9d3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e9c0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e9c0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->has_collision != 0);
}

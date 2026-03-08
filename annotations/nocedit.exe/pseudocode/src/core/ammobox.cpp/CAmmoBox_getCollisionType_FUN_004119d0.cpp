// Name: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_004119d0
// Address: 004119d0
// Address Range: [[004119d0, 004119e3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_004119d0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_004119d0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->has_collision != 0);
}

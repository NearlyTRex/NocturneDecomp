// Name: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040f460
// Address: 0040f460
// Address Range: [[0040f460, 0040f473]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040f460(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040f460(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->has_collision != 0);
}

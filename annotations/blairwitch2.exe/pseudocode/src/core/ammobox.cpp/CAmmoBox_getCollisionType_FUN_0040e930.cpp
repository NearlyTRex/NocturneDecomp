// Name: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040e930
// Address: 0040e930
// Address Range: [[0040e930, 0040e943]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e930(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e930(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(this_ptr->has_collision != 0);
}

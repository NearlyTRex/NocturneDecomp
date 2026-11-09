// Name: core_ammobox.cpp_CAmmoBox_getCollisionType_FUN_0040e4d0
// Address: 0040e4d0
// Address Range: [[0040e4d0, 0040e4e3]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e4d0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_ammobox_cpp_CAmmoBox_getCollisionType_FUN_0040e4d0(CAmmoBox *this_ptr,SCollisionInfo *collision_info)

{
  return (uint)(*(int *)&this_ptr->field_0x324 != 0);
}

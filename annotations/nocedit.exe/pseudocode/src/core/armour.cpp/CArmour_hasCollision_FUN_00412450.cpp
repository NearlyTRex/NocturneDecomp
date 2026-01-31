// Name: core_armour.cpp_CArmour_hasCollision_FUN_00412450
// Address: 00412450
// Address Range: [[00412450, 00412462]]
// Convention: __cdecl
// Signature: int __cdecl core_armour_cpp_CArmour_hasCollision_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_armour_cpp_CArmour_hasCollision_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return iVar1;
}

// Name: core_armour.cpp_CArmour_getCollisionType_FUN_00412450
// Address: 00412450
// Address Range: [[00412450, 00412462]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

// Name: core_armour.cpp_CArmour_getCollisionType_FUN_0040fc10
// Address: 0040fc10
// Address Range: [[0040fc10, 0040fc22]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040fc10(CArmour *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040fc10(CArmour *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

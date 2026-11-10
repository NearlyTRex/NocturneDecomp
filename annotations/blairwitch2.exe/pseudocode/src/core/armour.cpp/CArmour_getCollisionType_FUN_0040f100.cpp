// Name: core_armour.cpp_CArmour_getCollisionType_FUN_0040f100
// Address: 0040f100
// Address Range: [[0040f100, 0040f112]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040f100(CArmour *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_armour_cpp_CArmour_getCollisionType_FUN_0040f100(CArmour *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

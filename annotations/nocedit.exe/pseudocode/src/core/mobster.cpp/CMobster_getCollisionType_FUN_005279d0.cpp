// Name: core_mobster.cpp_CMobster_getCollisionType_FUN_005279d0
// Address: 005279d0
// Address Range: [[005279d0, 005279e2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_005279d0(CMobster *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_005279d0(CMobster *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

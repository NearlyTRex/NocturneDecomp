// Name: core_mobster.cpp_CMobster_getCollisionType_FUN_004dc920
// Address: 004dc920
// Address Range: [[004dc920, 004dc932]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_004dc920(CMobster *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_004dc920(CMobster *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

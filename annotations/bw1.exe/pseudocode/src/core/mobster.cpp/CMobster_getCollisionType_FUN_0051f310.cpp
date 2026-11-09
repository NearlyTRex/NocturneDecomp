// Name: core_mobster.cpp_CMobster_getCollisionType_FUN_0051f310
// Address: 0051f310
// Address Range: [[0051f310, 0051f322]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_0051f310(CMobster *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_0051f310(CMobster *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

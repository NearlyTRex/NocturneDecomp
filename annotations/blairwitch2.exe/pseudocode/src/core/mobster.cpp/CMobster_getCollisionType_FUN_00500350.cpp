// Name: core_mobster.cpp_CMobster_getCollisionType_FUN_00500350
// Address: 00500350
// Address Range: [[00500350, 00500362]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_00500350(CMobster *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_mobster_cpp_CMobster_getCollisionType_FUN_00500350(CMobster *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

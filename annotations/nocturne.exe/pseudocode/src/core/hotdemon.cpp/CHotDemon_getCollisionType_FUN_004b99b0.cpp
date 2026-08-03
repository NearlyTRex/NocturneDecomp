// Name: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004b99b0
// Address: 004b99b0
// Address Range: [[004b99b0, 004b99c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004b99b0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004b99b0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

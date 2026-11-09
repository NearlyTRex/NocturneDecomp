// Name: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004f0880
// Address: 004f0880
// Address Range: [[004f0880, 004f0892]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004f0880(CHotDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004f0880(CHotDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

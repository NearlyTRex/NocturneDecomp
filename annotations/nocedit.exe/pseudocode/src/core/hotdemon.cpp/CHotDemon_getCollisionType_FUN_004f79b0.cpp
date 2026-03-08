// Name: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004f79b0
// Address: 004f79b0
// Address Range: [[004f79b0, 004f79c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004f79b0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004f79b0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

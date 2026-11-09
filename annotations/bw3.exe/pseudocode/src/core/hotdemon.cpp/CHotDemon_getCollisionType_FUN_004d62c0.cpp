// Name: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d62c0
// Address: 004d62c0
// Address Range: [[004d62c0, 004d62d2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d62c0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d62c0(CHotDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

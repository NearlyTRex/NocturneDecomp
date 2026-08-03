// Name: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00541840
// Address: 00541840
// Address Range: [[00541840, 00541852]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00541840(CSuccubus *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00541840(CSuccubus *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

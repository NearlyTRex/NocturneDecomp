// Name: core_succubus.cpp_CSuccubus_getCollisionType_FUN_005c7790
// Address: 005c7790
// Address Range: [[005c7790, 005c77a2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_005c7790(CSuccubus *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_005c7790(CSuccubus *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

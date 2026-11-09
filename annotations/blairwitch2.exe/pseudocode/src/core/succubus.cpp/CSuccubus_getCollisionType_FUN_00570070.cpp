// Name: core_succubus.cpp_CSuccubus_getCollisionType_FUN_00570070
// Address: 00570070
// Address Range: [[00570070, 00570082]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00570070(CSuccubus *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_succubus_cpp_CSuccubus_getCollisionType_FUN_00570070(CSuccubus *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_FUN_00427680(this_ptr,collision_info);
  return EVar1;
}

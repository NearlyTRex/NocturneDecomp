// Name: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004a88d0
// Address: 004a88d0
// Address Range: [[004a88d0, 004a88e2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004a88d0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004a88d0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

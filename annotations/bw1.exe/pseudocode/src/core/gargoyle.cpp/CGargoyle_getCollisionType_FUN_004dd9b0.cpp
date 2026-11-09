// Name: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004dd9b0
// Address: 004dd9b0
// Address Range: [[004dd9b0, 004dd9c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004dd9b0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004dd9b0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

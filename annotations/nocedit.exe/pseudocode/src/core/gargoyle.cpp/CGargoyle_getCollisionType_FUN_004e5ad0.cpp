// Name: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004e5ad0
// Address: 004e5ad0
// Address Range: [[004e5ad0, 004e5ae2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004e5ad0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004e5ad0(CGargoyle *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

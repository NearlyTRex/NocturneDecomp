// Name: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c6530
// Address: 004c6530
// Address Range: [[004c6530, 004c6542]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c6530(CGargoyle *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c6530(CGargoyle *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

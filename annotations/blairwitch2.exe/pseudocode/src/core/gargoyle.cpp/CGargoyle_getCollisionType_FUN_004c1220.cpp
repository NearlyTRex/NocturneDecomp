// Name: core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c1220
// Address: 004c1220
// Address Range: [[004c1220, 004c1232]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c1220(CGargoyle *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004c1220(CGargoyle *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_FUN_00427680(this_ptr,collision_info);
  return EVar1;
}

// Name: core_smiley.cpp_CSmiley_getCollisionType_FUN_0056d3e0
// Address: 0056d3e0
// Address Range: [[0056d3e0, 0056d3f2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0056d3e0(CSmiley *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0056d3e0(CSmiley *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

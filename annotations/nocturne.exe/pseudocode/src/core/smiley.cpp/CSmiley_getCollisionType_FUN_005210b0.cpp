// Name: core_smiley.cpp_CSmiley_getCollisionType_FUN_005210b0
// Address: 005210b0
// Address Range: [[005210b0, 005210c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_005210b0(CSmiley *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_005210b0(CSmiley *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

// Name: core_smiley.cpp_CSmiley_getCollisionType_FUN_005a37f0
// Address: 005a37f0
// Address Range: [[005a37f0, 005a3802]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_005a37f0(CSmiley *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_005a37f0(CSmiley *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

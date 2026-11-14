// Name: core_smiley.cpp_CSmiley_getCollisionType_FUN_0054ad60
// Address: 0054ad60
// Address Range: [[0054ad60, 0054ad72]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0054ad60(CSmiley *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_smiley_cpp_CSmiley_getCollisionType_FUN_0054ad60(CSmiley *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

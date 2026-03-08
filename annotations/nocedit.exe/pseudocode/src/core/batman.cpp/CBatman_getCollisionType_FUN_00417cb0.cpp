// Name: core_batman.cpp_CBatman_getCollisionType_FUN_00417cb0
// Address: 00417cb0
// Address Range: [[00417cb0, 00417cce]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_batman_cpp_CBatman_getCollisionType_FUN_00417cb0(CBatman *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_batman_cpp_CBatman_getCollisionType_FUN_00417cb0(CBatman *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (this_ptr->mist_state != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

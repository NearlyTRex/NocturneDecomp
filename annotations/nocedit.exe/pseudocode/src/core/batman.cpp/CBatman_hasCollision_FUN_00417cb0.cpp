// Name: core_batman.cpp_CBatman_hasCollision_FUN_00417cb0
// Address: 00417cb0
// Address Range: [[00417cb0, 00417cce]]
// Convention: __cdecl
// Signature: int __cdecl core_batman_cpp_CBatman_hasCollision_FUN_00417cb0(CBatman *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_batman_cpp_CBatman_hasCollision_FUN_00417cb0(CBatman *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return iVar1;
}

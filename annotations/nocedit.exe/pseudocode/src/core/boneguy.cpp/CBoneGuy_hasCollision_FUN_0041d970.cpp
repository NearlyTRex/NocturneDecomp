// Name: core_boneguy.cpp_CBoneGuy_hasCollision_FUN_0041d970
// Address: 0041d970
// Address Range: [[0041d970, 0041d98e]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_hasCollision_FUN_0041d970 (CBoneGuy *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_boneguy_cpp_CBoneGuy_hasCollision_FUN_0041d970
          (CBoneGuy *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (this_ptr->blown_up != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return iVar1;
}

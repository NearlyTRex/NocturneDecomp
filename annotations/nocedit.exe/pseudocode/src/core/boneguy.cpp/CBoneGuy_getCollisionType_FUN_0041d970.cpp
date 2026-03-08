// Name: core_boneguy.cpp_CBoneGuy_getCollisionType_FUN_0041d970
// Address: 0041d970
// Address Range: [[0041d970, 0041d98e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_0041d970(CBoneGuy *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_0041d970(CBoneGuy *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (this_ptr->blown_up != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

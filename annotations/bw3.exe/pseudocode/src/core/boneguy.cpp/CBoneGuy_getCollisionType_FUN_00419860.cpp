// Name: core_boneguy.cpp_CBoneGuy_getCollisionType_FUN_00419860
// Address: 00419860
// Address Range: [[00419860, 0041987e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_00419860(CBoneGuy *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_00419860(CBoneGuy *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (*(int *)&this_ptr->field_0xd0e4 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

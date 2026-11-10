// Name: core_djien.cpp_CDjien_getCollisionType_FUN_00461090
// Address: 00461090
// Address Range: [[00461090, 004610ad]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_djien_cpp_CDjien_getCollisionType_FUN_00461090(CDjien *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_djien_cpp_CDjien_getCollisionType_FUN_00461090(CDjien *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  if (*(int *)collision_info == 1) {
    return COLLISION_TYPE_CUSTOM;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

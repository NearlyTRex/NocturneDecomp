// Name: core_styldemo.cpp_CStylerDemon_getCollisionType_FUN_005a08f0
// Address: 005a08f0
// Address Range: [[005a08f0, 005a0902]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_styldemo_cpp_CStylerDemon_getCollisionType_FUN_005a08f0(CStylerDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_styldemo_cpp_CStylerDemon_getCollisionType_FUN_005a08f0(CStylerDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

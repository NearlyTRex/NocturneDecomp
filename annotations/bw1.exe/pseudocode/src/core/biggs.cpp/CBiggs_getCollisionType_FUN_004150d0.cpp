// Name: core_biggs.cpp_CBiggs_getCollisionType_FUN_004150d0
// Address: 004150d0
// Address Range: [[004150d0, 004150e2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004150d0(CBiggs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004150d0(CBiggs *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

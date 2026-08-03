// Name: core_biggs.cpp_CBiggs_getCollisionType_FUN_00415a10
// Address: 00415a10
// Address Range: [[00415a10, 00415a22]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_00415a10(CBiggs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_00415a10(CBiggs *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

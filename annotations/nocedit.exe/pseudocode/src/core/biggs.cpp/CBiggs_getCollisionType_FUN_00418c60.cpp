// Name: core_biggs.cpp_CBiggs_getCollisionType_FUN_00418c60
// Address: 00418c60
// Address Range: [[00418c60, 00418c72]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_00418c60(CBiggs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_00418c60(CBiggs *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

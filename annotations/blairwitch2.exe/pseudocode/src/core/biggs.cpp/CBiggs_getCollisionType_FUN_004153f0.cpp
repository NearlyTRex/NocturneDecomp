// Name: core_biggs.cpp_CBiggs_getCollisionType_FUN_004153f0
// Address: 004153f0
// Address Range: [[004153f0, 00415402]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004153f0(CBiggs *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_biggs_cpp_CBiggs_getCollisionType_FUN_004153f0(CBiggs *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_FUN_00427680(this_ptr,collision_info);
  return EVar1;
}

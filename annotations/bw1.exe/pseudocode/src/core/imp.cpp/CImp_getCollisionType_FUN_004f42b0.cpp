// Name: core_imp.cpp_CImp_getCollisionType_FUN_004f42b0
// Address: 004f42b0
// Address Range: [[004f42b0, 004f42c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004f42b0(CImp *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004f42b0(CImp *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

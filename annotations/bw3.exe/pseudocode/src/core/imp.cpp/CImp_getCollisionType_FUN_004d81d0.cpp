// Name: core_imp.cpp_CImp_getCollisionType_FUN_004d81d0
// Address: 004d81d0
// Address Range: [[004d81d0, 004d81e2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d81d0(CImp *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d81d0(CImp *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

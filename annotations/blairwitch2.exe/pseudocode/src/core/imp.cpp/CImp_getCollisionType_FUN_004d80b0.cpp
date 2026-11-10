// Name: core_imp.cpp_CImp_getCollisionType_FUN_004d80b0
// Address: 004d80b0
// Address Range: [[004d80b0, 004d80c2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d80b0(CImp *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004d80b0(CImp *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

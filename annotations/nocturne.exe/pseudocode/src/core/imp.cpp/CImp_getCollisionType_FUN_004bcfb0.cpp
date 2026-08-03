// Name: core_imp.cpp_CImp_getCollisionType_FUN_004bcfb0
// Address: 004bcfb0
// Address Range: [[004bcfb0, 004bcfc2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004bcfb0(CImp *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_imp_cpp_CImp_getCollisionType_FUN_004bcfb0(CImp *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

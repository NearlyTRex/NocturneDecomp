// Name: core_hino.cpp_CHino_getCollisionType_FUN_0059d640
// Address: 0059d640
// Address Range: [[0059d640, 0059d652]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hino_cpp_CHino_getCollisionType_FUN_0059d640(CHino *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hino_cpp_CHino_getCollisionType_FUN_0059d640(CHino *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

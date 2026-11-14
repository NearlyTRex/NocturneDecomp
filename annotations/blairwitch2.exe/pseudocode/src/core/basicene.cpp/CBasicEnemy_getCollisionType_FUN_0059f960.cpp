// Name: core_basicene.cpp_CBasicEnemy_getCollisionType_FUN_0059f960
// Address: 0059f960
// Address Range: [[0059f960, 0059f972]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_basicene_cpp_CBasicEnemy_getCollisionType_FUN_0059f960(CBasicEnemy *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_basicene_cpp_CBasicEnemy_getCollisionType_FUN_0059f960(CBasicEnemy *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

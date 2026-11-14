// Name: core_zombiepriest.cpp_CZombiePriest_getCollisionType_FUN_0058fc60
// Address: 0058fc60
// Address Range: [[0058fc60, 0058fc72]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_zombiepriest_cpp_CZombiePriest_getCollisionType_FUN_0058fc60(CZombiePriest *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_zombiepriest_cpp_CZombiePriest_getCollisionType_FUN_0058fc60(CZombiePriest *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

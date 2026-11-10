// Name: core_sentinel.cpp_CSentinel_getCollisionType_FUN_0052bb20
// Address: 0052bb20
// Address Range: [[0052bb20, 0052bb32]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0052bb20(CSentinel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0052bb20(CSentinel *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

// Name: core_sentinel.cpp_CSentinel_getCollisionType_FUN_0054ce10
// Address: 0054ce10
// Address Range: [[0054ce10, 0054ce22]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0054ce10(CSentinel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_0054ce10(CSentinel *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

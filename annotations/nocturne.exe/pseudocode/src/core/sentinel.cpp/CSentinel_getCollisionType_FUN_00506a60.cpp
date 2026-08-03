// Name: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00506a60
// Address: 00506a60
// Address Range: [[00506a60, 00506a72]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00506a60(CSentinel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00506a60(CSentinel *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

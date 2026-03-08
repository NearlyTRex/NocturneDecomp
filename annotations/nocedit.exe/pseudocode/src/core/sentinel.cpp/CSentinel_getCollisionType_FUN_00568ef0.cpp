// Name: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00568ef0
// Address: 00568ef0
// Address Range: [[00568ef0, 00568f02]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00568ef0(CSentinel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00568ef0(CSentinel *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

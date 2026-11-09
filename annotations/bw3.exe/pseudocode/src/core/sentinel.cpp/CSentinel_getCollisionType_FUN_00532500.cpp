// Name: core_sentinel.cpp_CSentinel_getCollisionType_FUN_00532500
// Address: 00532500
// Address Range: [[00532500, 00532512]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00532500(CSentinel *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00532500(CSentinel *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

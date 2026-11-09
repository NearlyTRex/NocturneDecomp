// Name: core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d4660
// Address: 004d4660
// Address Range: [[004d4660, 004d4672]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d4660(CHotDemon *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_hotdemon_cpp_CHotDemon_getCollisionType_FUN_004d4660(CHotDemon *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_FUN_00427680(this_ptr,collision_info);
  return EVar1;
}

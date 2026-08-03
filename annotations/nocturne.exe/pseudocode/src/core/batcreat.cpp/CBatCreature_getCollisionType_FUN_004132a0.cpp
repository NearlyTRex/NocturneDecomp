// Name: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_004132a0
// Address: 004132a0
// Address Range: [[004132a0, 004132b2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_004132a0(CBatCreature *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_004132a0(CBatCreature *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

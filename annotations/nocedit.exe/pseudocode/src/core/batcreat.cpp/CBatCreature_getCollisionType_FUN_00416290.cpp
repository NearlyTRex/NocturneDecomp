// Name: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00416290
// Address: 00416290
// Address Range: [[00416290, 004162a2]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00416290(CBatCreature *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00416290(CBatCreature *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

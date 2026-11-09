// Name: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412670
// Address: 00412670
// Address Range: [[00412670, 00412682]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412670(CBatCreature *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412670(CBatCreature *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                    ((CCharacter *)this_ptr,collision_info);
  return EVar1;
}

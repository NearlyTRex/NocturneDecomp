// Name: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412a00
// Address: 00412a00
// Address Range: [[00412a00, 00412a12]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412a00(CBatCreature *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_batcreat_cpp_CBatCreature_getCollisionType_FUN_00412a00(CBatCreature *this_ptr,SCollisionInfo *collision_info)

{
  ECollisionType EVar1;
  
  EVar1 = core_charactr_cpp_FUN_00427680(this_ptr,collision_info);
  return EVar1;
}

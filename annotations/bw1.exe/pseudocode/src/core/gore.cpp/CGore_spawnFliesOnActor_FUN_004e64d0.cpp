// Name: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
// Address: 004e64d0
// Address Range: [[004e64d0, 004e6503]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  
  iVar1 = core_gore_cpp_FUN_004e63e0(this_ptr,&actor->location,gather_count,spawn_rate,box_size);
  *(int *)(iVar1 + 0x2c) = (actor->location).area_id;
  *(CDemonActor **)(iVar1 + 0x2a08) = actor;
  return;
}

// Name: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30
// Address: 004cee30
// Address Range: [[004cee30, 004cee63]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  
  iVar1 = core_gore_cpp_FUN_004ced40(this_ptr,&actor->field_0x20,gather_count,spawn_rate,box_size);
  *(uint *)(iVar1 + 0x2c) = *(uint *)&actor->field_0x2c;
  *(CDemonActor **)(iVar1 + 0x2a08) = actor;
  return;
}

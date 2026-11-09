// Name: core_gore.cpp_FUN_004c9cc0
// Address: 004c9cc0
// Address Range: [[004c9cc0, 004c9cf3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004c9cc0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004c9cc0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

{
  int iVar1;
  
  iVar1 = core_gore_cpp_FUN_004c9bd0(this_ptr,&actor->field_0x20,gather_count,spawn_rate,box_size);
  *(uint *)(iVar1 + 0x2c) = *(uint *)&actor->field_0x2c;
  *(CDemonActor **)(iVar1 + 0x2b64) = actor;
  return;
}

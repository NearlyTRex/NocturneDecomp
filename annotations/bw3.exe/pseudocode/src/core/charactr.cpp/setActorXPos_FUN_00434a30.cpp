// Name: core_charactr.cpp_setActorXPos_FUN_00434a30
// Address: 00434a30
// Address Range: [[00434a30, 00434a3b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_setActorXPos_FUN_00434a30(CDemonActor *actor,float x)

#include "nocturne.h"

void __cdecl core_charactr_cpp_setActorXPos_FUN_00434a30(CDemonActor *actor,float x)

{
  *(float *)&actor->field_0x20 = x;
  return;
}

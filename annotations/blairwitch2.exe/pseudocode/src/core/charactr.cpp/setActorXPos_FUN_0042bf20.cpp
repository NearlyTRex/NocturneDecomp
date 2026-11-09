// Name: core_charactr.cpp_setActorXPos_FUN_0042bf20
// Address: 0042bf20
// Address Range: [[0042bf20, 0042bf2b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_setActorXPos_FUN_0042bf20(CDemonActor *actor,float x)

#include "nocturne.h"

void __cdecl core_charactr_cpp_setActorXPos_FUN_0042bf20(CDemonActor *actor,float x)

{
  *(float *)&actor->field_0x20 = x;
  return;
}

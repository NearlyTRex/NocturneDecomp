// Name: core_charactr.cpp_setActorXPos_FUN_0042f920
// Address: 0042f920
// Address Range: [[0042f920, 0042f92b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_setActorXPos_FUN_0042f920(CDemonActor *actor,float x)

#include "nocturne.h"

void __cdecl core_charactr_cpp_setActorXPos_FUN_0042f920(CDemonActor *actor,float x)

{
  (actor->location).position.x = x;
  return;
}

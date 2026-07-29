// Name: core_charactr.cpp_setActorXPos_FUN_0042b500
// Address: 0042b500
// Address Range: [[0042b500, 0042b50b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_setActorXPos_FUN_0042b500(CDemonActor *actor,float x)

#include "nocturne.h"

void __cdecl core_charactr_cpp_setActorXPos_FUN_0042b500(CDemonActor *actor,float x)

{
  (actor->location).position.x = x;
  return;
}

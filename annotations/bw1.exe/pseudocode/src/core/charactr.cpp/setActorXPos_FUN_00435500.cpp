// Name: core_charactr.cpp_setActorXPos_FUN_00435500
// Address: 00435500
// Address Range: [[00435500, 0043550b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_setActorXPos_FUN_00435500(CDemonActor *actor,float x)

#include "nocturne.h"

void __cdecl core_charactr_cpp_setActorXPos_FUN_00435500(CDemonActor *actor,float x)

{
  (actor->location).position.x = x;
  return;
}

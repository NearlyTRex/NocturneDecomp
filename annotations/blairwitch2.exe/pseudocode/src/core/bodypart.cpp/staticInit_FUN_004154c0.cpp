// Name: core_bodypart.cpp_staticInit_FUN_004154c0
// Address: 004154c0
// Address Range: [[004154c0, 004154e3]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_staticInit_FUN_004154c0(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_004154c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBodyPartClassInfo,"CBodyPart",
             core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0,&g_CBodyPartClassVersion,5,
             &g_CDemonActorClassInfo);
  return;
}

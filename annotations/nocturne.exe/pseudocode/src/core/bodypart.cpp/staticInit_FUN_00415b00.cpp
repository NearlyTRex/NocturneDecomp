// Name: core_bodypart.cpp_staticInit_FUN_00415b00
// Address: 00415b00
// Address Range: [[00415b00, 00415b23]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_staticInit_FUN_00415b00(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00415b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBodyPartClassInfo,"CBodyPart",
             core_bodypart_cpp_factoryFuncBodyPart_FUN_00415cf0,&g_CBodyPartClassVersion,5,
             &g_CDemonActorClassInfo);
  return;
}

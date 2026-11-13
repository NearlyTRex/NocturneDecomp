// Name: core_bodypart.cpp_staticInit_FUN_00414520
// Address: 00414520
// Address Range: [[00414520, 00414543]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_staticInit_FUN_00414520(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00414520(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBodyPartClassInfo,"CBodyPart",
             core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720,&g_CBodyPartClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}

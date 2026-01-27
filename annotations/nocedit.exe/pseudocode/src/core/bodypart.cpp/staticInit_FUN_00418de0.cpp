// Name: core_bodypart.cpp_staticInit_FUN_00418de0
// Address: 00418de0
// Address Range: [[00418de0, 00418e03]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_staticInit_FUN_00418de0(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00418de0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBodyPartClassInfo,"CBodyPart",core_bodypart_cpp_factoryFunc_FUN_00418fd0,
             &g_CBodyPartClassVersion,5,&g_CDemonActorClassInfo);
  return;
}

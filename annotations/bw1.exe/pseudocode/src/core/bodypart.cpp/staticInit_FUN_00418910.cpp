// Name: core_bodypart.cpp_staticInit_FUN_00418910
// Address: 00418910
// Address Range: [[00418910, 00418933]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_staticInit_FUN_00418910(void)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00418910(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBodyPartClassInfo,"CBodyPart",
             core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10,&g_CBodyPartClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}

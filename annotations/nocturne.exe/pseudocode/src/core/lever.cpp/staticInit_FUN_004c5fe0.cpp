// Name: core_lever.cpp_staticInit_FUN_004c5fe0
// Address: 004c5fe0
// Address Range: [[004c5fe0, 004c6003]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_staticInit_FUN_004c5fe0(void)

#include "nocturne.h"

void __cdecl core_lever_cpp_staticInit_FUN_004c5fe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLeverClassInfo,"CLever",core_lever_cpp_factoryFuncLever_FUN_004c6010,
             &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return;
}

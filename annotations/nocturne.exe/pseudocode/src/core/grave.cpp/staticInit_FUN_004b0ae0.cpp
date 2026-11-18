// Name: core_grave.cpp_staticInit_FUN_004b0ae0
// Address: 004b0ae0
// Address Range: [[004b0ae0, 004b0b03]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_staticInit_FUN_004b0ae0(void)

#include "nocturne.h"

void __cdecl core_grave_cpp_staticInit_FUN_004b0ae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGraveClassInfo,"CGrave",core_grave_cpp_factoryFuncGrave_FUN_004b0b10,
             &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return;
}

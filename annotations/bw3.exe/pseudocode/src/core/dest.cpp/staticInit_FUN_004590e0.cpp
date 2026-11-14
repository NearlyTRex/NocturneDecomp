// Name: core_dest.cpp_staticInit_FUN_004590e0
// Address: 004590e0
// Address Range: [[004590e0, 00459103]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_staticInit_FUN_004590e0(void)

#include "nocturne.h"

void __cdecl core_dest_cpp_staticInit_FUN_004590e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CActorDestinationClassInfo,"CActorDestination",
             core_dest_cpp_factoryFuncActorDestination_FUN_00459110,&g_CActorDestinationClassVersion
             ,4,&g_CDemonActorClassInfo);
  return;
}

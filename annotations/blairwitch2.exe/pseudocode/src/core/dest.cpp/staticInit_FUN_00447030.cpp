// Name: core_dest.cpp_staticInit_FUN_00447030
// Address: 00447030
// Address Range: [[00447030, 00447053]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_staticInit_FUN_00447030(void)

#include "nocturne.h"

void __cdecl core_dest_cpp_staticInit_FUN_00447030(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CActorDestinationClassInfo,"CActorDestination",
             core_dest_cpp_factoryFuncActorDestination_FUN_00447060,&g_CActorDestinationClassVersion
             ,4,&g_CDemonActorClassInfo);
  return;
}

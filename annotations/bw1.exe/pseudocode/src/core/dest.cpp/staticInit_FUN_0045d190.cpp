// Name: core_dest.cpp_staticInit_FUN_0045d190
// Address: 0045d190
// Address Range: [[0045d190, 0045d1b3]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_staticInit_FUN_0045d190(void)

#include "nocturne.h"

void __cdecl core_dest_cpp_staticInit_FUN_0045d190(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CActorDestinationClassInfo,"CActorDestination",
             core_dest_cpp_factoryFuncActorDestination_FUN_0045d1c0,&g_CActorDestinationClassVersion
             ,4,&g_CDemonActorClassInfo);
  return;
}

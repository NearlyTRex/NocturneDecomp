// Name: core_dest.cpp_staticInit_FUN_0044b740
// Address: 0044b740
// Address Range: [[0044b740, 0044b763]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_staticInit_FUN_0044b740(void)

#include "nocturne.h"

void __cdecl core_dest_cpp_staticInit_FUN_0044b740(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CActorDestinationClassInfo,"CActorDestination",
             core_dest_cpp_factoryFuncActorDestination_FUN_0044b770,&g_CActorDestinationClassVersion
             ,4,&g_CDemonActorClassInfo);
  return;
}

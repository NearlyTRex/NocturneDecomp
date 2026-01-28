// Name: core_teleport.cpp_staticInit_FUN_005da6e0
// Address: 005da6e0
// Address Range: [[005da6e0, 005da726]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_staticInit_FUN_005da6e0(void)

#include "nocturne.h"

void __cdecl core_teleport_cpp_staticInit_FUN_005da6e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTeleportDestClassInfo,"CTeleportDest",
             core_teleport_cpp_factoryFunc_FUN_005da730,&g_CTeleportDestClassVersion,1,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTeleportClassInfo,"CTeleport",core_teleport_cpp_factoryFunc_FUN_005da9a0,
             &g_CTeleportClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

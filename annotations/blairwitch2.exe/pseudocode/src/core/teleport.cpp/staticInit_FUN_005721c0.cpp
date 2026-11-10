// Name: core_teleport.cpp_staticInit_FUN_005721c0
// Address: 005721c0
// Address Range: [[005721c0, 00572206]]
// Convention: unknown
// Signature: void core_teleport_cpp_staticInit_FUN_005721c0(void)

#include "nocturne.h"

void core_teleport_cpp_staticInit_FUN_005721c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTeleportDestClassInfo,"CTeleportDest",
             core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210,&g_CTeleportDestClassVersion,1,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x264c074,"CTeleport",
             core_teleport_cpp_factoryFuncTeleport_FUN_005722c0,(int *)0x61e370,1,
             &g_CDemonActorClassInfo);
  return;
}

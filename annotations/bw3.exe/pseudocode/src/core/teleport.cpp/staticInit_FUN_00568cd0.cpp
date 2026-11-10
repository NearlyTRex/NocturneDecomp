// Name: core_teleport.cpp_staticInit_FUN_00568cd0
// Address: 00568cd0
// Address Range: [[00568cd0, 00568d16]]
// Convention: unknown
// Signature: void core_teleport_cpp_staticInit_FUN_00568cd0(void)

#include "nocturne.h"

void core_teleport_cpp_staticInit_FUN_00568cd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTeleportDestClassInfo,"CTeleportDest",
             core_teleport_cpp_factoryFuncTeleportDest_FUN_00568d20,&g_CTeleportDestClassVersion,1,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x2cf62e0,"CTeleport",
             core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0,(int *)0x6068b8,1,
             &g_CDemonActorClassInfo);
  return;
}

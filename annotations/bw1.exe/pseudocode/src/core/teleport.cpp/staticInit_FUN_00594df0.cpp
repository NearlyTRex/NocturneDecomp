// Name: core_teleport.cpp_staticInit_FUN_00594df0
// Address: 00594df0
// Address Range: [[00594df0, 00594e36]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_staticInit_FUN_00594df0(void)

#include "nocturne.h"

void __cdecl core_teleport_cpp_staticInit_FUN_00594df0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTeleportDestClassInfo,"CTeleportDest",
             core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40,&g_CTeleportDestClassVersion,1,
             &g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x2c83844,"CTeleport",
             core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0,(int *)0x6259c0,1,
             &g_CDemonActorClassInfo);
  return;
}

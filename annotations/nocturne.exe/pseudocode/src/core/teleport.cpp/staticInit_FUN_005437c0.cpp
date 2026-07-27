// Name: core_teleport.cpp_staticInit_FUN_005437c0
// Address: 005437c0
// Address Range: [[005437c0, 00543806]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_staticInit_FUN_005437c0(void)

#include "nocturne.h"

void __cdecl core_teleport_cpp_staticInit_FUN_005437c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTeleportDestActorType_02dca158,"CTeleportDest",
             core_teleport_cpp_FUN_00543810,&INT_005c107c,1,&g_CDemonActorActorType_00763e48);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTeleportActorType_02dca194,"CTeleport",core_teleport_cpp_FUN_005438a0,
             &INT_005c1080,1,&g_CDemonActorActorType_00763e48);
  return;
}

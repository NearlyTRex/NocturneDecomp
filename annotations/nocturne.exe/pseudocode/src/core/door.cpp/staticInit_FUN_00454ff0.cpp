// Name: core_door.cpp_staticInit_FUN_00454ff0
// Address: 00454ff0
// Address Range: [[00454ff0, 00455013]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_staticInit_FUN_00454ff0(void)

#include "nocturne.h"

void __cdecl core_door_cpp_staticInit_FUN_00454ff0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDoorActorType_01af4e9c,"CDoor",core_door_cpp_factoryFuncDoor_FUN_00455020,
             &g_INT_005ae690,0xb,&g_CDemonActorActorType_00763e48);
  return;
}

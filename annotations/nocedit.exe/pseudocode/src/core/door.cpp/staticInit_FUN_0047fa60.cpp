// Name: core_door.cpp_staticInit_FUN_0047fa60
// Address: 0047fa60
// Address Range: [[0047fa60, 0047fa83]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_staticInit_FUN_0047fa60(void)

#include "nocturne.h"

void __cdecl core_door_cpp_staticInit_FUN_0047fa60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDoorClassInfo,"CDoor",core_door_cpp_factoryFuncDoor_FUN_0047fa90,
             &g_CDoorClassVersion,0xb,&g_CDemonActorClassInfo);
  return;
}

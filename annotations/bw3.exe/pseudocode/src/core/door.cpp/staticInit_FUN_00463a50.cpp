// Name: core_door.cpp_staticInit_FUN_00463a50
// Address: 00463a50
// Address Range: [[00463a50, 00463a73]]
// Convention: unknown
// Signature: void core_door_cpp_staticInit_FUN_00463a50(void)

#include "nocturne.h"

void core_door_cpp_staticInit_FUN_00463a50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDoorClassInfo,(char *)0x5bbcc3,core_door_cpp_factoryFuncDoor_FUN_00463a80,
             &g_CDoorClassVersion,0xd,&g_CDemonActorClassInfo);
  return;
}

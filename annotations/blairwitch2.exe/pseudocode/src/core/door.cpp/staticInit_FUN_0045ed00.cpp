// Name: core_door.cpp_staticInit_FUN_0045ed00
// Address: 0045ed00
// Address Range: [[0045ed00, 0045ed23]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_staticInit_FUN_0045ed00(void)

#include "nocturne.h"

void __cdecl core_door_cpp_staticInit_FUN_0045ed00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDoorClassInfo,(char *)0x5d0950,core_door_cpp_factoryFuncDoor_FUN_0045ed30,
             &g_CDoorClassVersion,0xd,&g_CDemonActorClassInfo);
  return;
}

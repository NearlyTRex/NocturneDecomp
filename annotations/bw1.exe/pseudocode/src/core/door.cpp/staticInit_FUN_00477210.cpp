// Name: core_door.cpp_staticInit_FUN_00477210
// Address: 00477210
// Address Range: [[00477210, 00477233]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_staticInit_FUN_00477210(void)

#include "nocturne.h"

void __cdecl core_door_cpp_staticInit_FUN_00477210(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDoorClassInfo,(char *)0x5da74c,core_door_cpp_factoryFuncDoor_FUN_00477240,
             &g_CDoorClassVersion,0xd,&g_CDemonActorClassInfo);
  return;
}

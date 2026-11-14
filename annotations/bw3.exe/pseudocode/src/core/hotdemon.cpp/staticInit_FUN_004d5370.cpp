// Name: core_hotdemon.cpp_staticInit_FUN_004d5370
// Address: 004d5370
// Address Range: [[004d5370, 004d53fc]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_staticInit_FUN_004d5370(void)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_staticInit_FUN_004d5370(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHotDemonClassInfo,"CHotDemon",
             core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400,&g_CHotDemonClassVersion,1,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1d5bb58,"CAngel_Forest",core_hotdemon_cpp_FUN_004d62e0,
             (int *)0x600024,1,&g_CHotDemonClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1d5bb94,"CAngel_Spirit",core_hotdemon_cpp_FUN_004d6360,
             (int *)0x600028,1,&g_CHotDemonClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1d5bbd0,"CAngel_Demon",core_hotdemon_cpp_FUN_004d63e0,
             (int *)0x60002c,1,&g_CHotDemonClassInfo);
  return;
}

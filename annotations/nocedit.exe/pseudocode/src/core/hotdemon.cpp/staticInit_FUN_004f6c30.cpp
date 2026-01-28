// Name: core_hotdemon.cpp_staticInit_FUN_004f6c30
// Address: 004f6c30
// Address Range: [[004f6c30, 004f6c53]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_staticInit_FUN_004f6c30(void)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_staticInit_FUN_004f6c30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHotDemonClassInfo,"CHotDemon",core_hotdemon_cpp_factoryFunc_FUN_004f6c60,
             &g_CHotDemonClassVersion,1,&g_CEnemyClassInfo);
  return;
}

// Name: core_succubus.cpp_staticInit_FUN_005c6a10
// Address: 005c6a10
// Address Range: [[005c6a10, 005c6a33]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_staticInit_FUN_005c6a10(void)

#include "nocturne.h"

void __cdecl core_succubus_cpp_staticInit_FUN_005c6a10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CSuccubusClassInfo,"CSuccubus",core_succubus_cpp_factoryFunc_FUN_005c6a40,
             &g_CSuccubusClassVersion,1,&g_CEnemyClassInfo);
  return;
}

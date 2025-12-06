// Name: core_succubus.cpp_staticInit_FUN_005c6a10
// Address: 005c6a10
// Address Range: [[005c6a10, 005c6a33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_succubus.cpp_staticInit_FUN_005c6a10(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_succubus_cpp_staticInit_FUN_005c6a10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSuccubusClassInfo,"CSuccubus",core_succubus_cpp_FUN_005c6a40,
                      &g_CSuccubusClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}

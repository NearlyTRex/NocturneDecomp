// Name: core_cow.cpp_staticInit_FUN_004440d0
// Address: 004440d0
// Address Range: [[004440d0, 004440f3]]
// Convention: __cdecl
// Signature: void core_cow.cpp_staticInit_FUN_004440d0(void)

#include "nocturne.h"

void __cdecl core_cow_cpp_staticInit_FUN_004440d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CZombieCowClassInfo,"CZombieCow",core_cow_cpp_factoryFunc_FUN_00444100,
             &g_CZombieCowClassVersion,2,&g_CEnemyClassInfo);
  return;
}

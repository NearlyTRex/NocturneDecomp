// Name: core_zombie.cpp_staticInit_FUN_005f8c90
// Address: 005f8c90
// Address Range: [[005f8c90, 005f8cb3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_zombie.cpp_staticInit_FUN_005f8c90(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_zombie_cpp_staticInit_FUN_005f8c90(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CZombieClassInfo,"CZombie",core_zombie_cpp_FUN_005f8fa0,
                      &g_CZombieClassVersion,0xb,&g_CEnemyClassInfo);
  return pCVar1;
}

// Name: core_shovel.cpp_staticInit_FUN_00588b30
// Address: 00588b30
// Address Range: [[00588b30, 00588b53]]
// Convention: __cdecl
// Signature: void core_shovel.cpp_staticInit_FUN_00588b30(void)

#include "nocturne.h"

void __cdecl core_shovel_cpp_staticInit_FUN_00588b30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CShovelClassInfo,"CShovel",core_shovel_cpp_factoryFunc_FUN_00588b60,
             &g_CShovelClassVersion,1,&g_CWeaponClassInfo);
  return;
}

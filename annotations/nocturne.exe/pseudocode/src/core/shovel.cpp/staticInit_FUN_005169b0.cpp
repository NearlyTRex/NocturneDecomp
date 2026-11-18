// Name: core_shovel.cpp_staticInit_FUN_005169b0
// Address: 005169b0
// Address Range: [[005169b0, 005169d3]]
// Convention: __cdecl
// Signature: void __cdecl core_shovel_cpp_staticInit_FUN_005169b0(void)

#include "nocturne.h"

void __cdecl core_shovel_cpp_staticInit_FUN_005169b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CShovelClassInfo,"CShovel",core_shovel_cpp_factoryFuncShovel_FUN_005169e0,
             &g_CShovelClassVersion,1,&g_CWeaponClassInfo);
  return;
}

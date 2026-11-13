// Name: core_shovel.cpp_staticInit_FUN_005623b0
// Address: 005623b0
// Address Range: [[005623b0, 005623d3]]
// Convention: __cdecl
// Signature: void __cdecl core_shovel_cpp_staticInit_FUN_005623b0(void)

#include "nocturne.h"

void __cdecl core_shovel_cpp_staticInit_FUN_005623b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CShovelClassInfo,";CShovel" + 1,
             core_shovel_cpp_factoryFuncShovel_FUN_005623e0,&g_CShovelClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

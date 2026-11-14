// Name: core_shovel.cpp_staticInit_FUN_0053fdc0
// Address: 0053fdc0
// Address Range: [[0053fdc0, 0053fde3]]
// Convention: __cdecl
// Signature: void __cdecl core_shovel_cpp_staticInit_FUN_0053fdc0(void)

#include "nocturne.h"

void __cdecl core_shovel_cpp_staticInit_FUN_0053fdc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CShovelClassInfo,";CShovel" + 1,
             core_shovel_cpp_factoryFuncShovel_FUN_0053fdf0,&g_CShovelClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

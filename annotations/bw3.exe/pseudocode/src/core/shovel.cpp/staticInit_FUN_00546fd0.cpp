// Name: core_shovel.cpp_staticInit_FUN_00546fd0
// Address: 00546fd0
// Address Range: [[00546fd0, 00546ff3]]
// Convention: __cdecl
// Signature: void __cdecl core_shovel_cpp_staticInit_FUN_00546fd0(void)

#include "nocturne.h"

void __cdecl core_shovel_cpp_staticInit_FUN_00546fd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CShovelClassInfo,"$@CShovel" + 2,
             core_shovel_cpp_factoryFuncShovel_FUN_00547000,&g_CShovelClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

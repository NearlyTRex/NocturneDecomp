// Name: core_crossbow.cpp_staticInit_FUN_0043a460
// Address: 0043a460
// Address Range: [[0043a460, 0043a483]]
// Convention: __cdecl
// Signature: void __cdecl core_crossbow_cpp_staticInit_FUN_0043a460(void)

#include "nocturne.h"

void __cdecl core_crossbow_cpp_staticInit_FUN_0043a460(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CCrossbowClassInfo,"CCrossbow",
             core_crossbow_cpp_factoryFuncCrossbow_FUN_0043a490,&g_CCrossbowClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

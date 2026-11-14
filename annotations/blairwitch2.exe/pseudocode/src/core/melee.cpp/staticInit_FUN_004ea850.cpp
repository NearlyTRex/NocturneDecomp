// Name: core_melee.cpp_staticInit_FUN_004ea850
// Address: 004ea850
// Address Range: [[004ea850, 004ea873]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_staticInit_FUN_004ea850(void)

#include "nocturne.h"

void __cdecl core_melee_cpp_staticInit_FUN_004ea850(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMeleeClassInfo,"CMelee",core_melee_cpp_factoryFuncMelee_FUN_004ea880,
             &g_CMeleeClassVersion,7,&g_CWeaponClassInfo);
  return;
}

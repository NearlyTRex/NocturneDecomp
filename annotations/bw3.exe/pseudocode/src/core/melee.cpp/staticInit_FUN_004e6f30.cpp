// Name: core_melee.cpp_staticInit_FUN_004e6f30
// Address: 004e6f30
// Address Range: [[004e6f30, 004e6f53]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_staticInit_FUN_004e6f30(void)

#include "nocturne.h"

void __cdecl core_melee_cpp_staticInit_FUN_004e6f30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CMeleeClassInfo,"CMelee",core_melee_cpp_factoryFuncMelee_FUN_004e6f60,
             &g_CMeleeClassVersion,7,&g_CWeaponClassInfo);
  return;
}

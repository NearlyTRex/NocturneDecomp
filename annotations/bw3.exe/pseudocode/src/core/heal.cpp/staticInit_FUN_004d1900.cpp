// Name: core_heal.cpp_staticInit_FUN_004d1900
// Address: 004d1900
// Address Range: [[004d1900, 004d1923]]
// Convention: __cdecl
// Signature: void __cdecl core_heal_cpp_staticInit_FUN_004d1900(void)

#include "nocturne.h"

void __cdecl core_heal_cpp_staticInit_FUN_004d1900(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHealClassInfo,(char *)0x5c4a0f,core_heal_cpp_factoryFuncHeal_FUN_004d1930,
             &g_CHealClassVersion,1,&g_CWeaponClassInfo);
  return;
}

// Name: core_dynamite.cpp_staticInit_FUN_0047b010
// Address: 0047b010
// Address Range: [[0047b010, 0047b04c]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_0047b010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_staticInit_FUN_0047b010(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDynamiteClassInfo,"p@CDynamite" + 2,
             core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  _DAT_01c5a134 = 0;
  _DAT_01c5a138 = 0xc2000000;
  _DAT_01c5a13c = 0;
  return;
}

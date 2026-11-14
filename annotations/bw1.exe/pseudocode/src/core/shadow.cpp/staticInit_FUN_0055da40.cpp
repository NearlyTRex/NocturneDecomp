// Name: core_shadow.cpp_staticInit_FUN_0055da40
// Address: 0055da40
// Address Range: [[0055da40, 0055da9f]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_staticInit_FUN_0055da40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_staticInit_FUN_0055da40(void)

{
  _DAT_0269cb98 = 0xbe8f5c29;
  _DAT_0269cb9c = 0x3ed70a3d;
  _DAT_0269cba0 = 0x3f19999a;
  _DAT_0269cba4 = 0x3eb33333;
  _DAT_0269cba8 = 0x3ed70a3d;
  _DAT_0269cbac = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CShadowClassInfo,"CCShadow" + 1,
             core_shadow_cpp_factoryFuncShadow_FUN_0055daa0,&g_CShadowClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

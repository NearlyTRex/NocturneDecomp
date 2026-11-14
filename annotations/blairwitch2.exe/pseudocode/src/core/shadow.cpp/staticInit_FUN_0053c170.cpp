// Name: core_shadow.cpp_staticInit_FUN_0053c170
// Address: 0053c170
// Address Range: [[0053c170, 0053c1cf]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_staticInit_FUN_0053c170(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_staticInit_FUN_0053c170(void)

{
  _DAT_020b190c = 0xbe8f5c29;
  _DAT_020b1910 = 0x3ed70a3d;
  _DAT_020b1914 = 0x3f19999a;
  _DAT_020b1918 = 0x3eb33333;
  _DAT_020b191c = 0x3ed70a3d;
  _DAT_020b1920 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CShadowClassInfo,"CCShadow" + 1,
             core_shadow_cpp_factoryFuncShadow_FUN_0053c1d0,&g_CShadowClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}

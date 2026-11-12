// Name: core_shadow.cpp_staticInit_FUN_00543400
// Address: 00543400
// Address Range: [[00543400, 005434c8]]
// Convention: unknown
// Signature: void core_shadow_cpp_staticInit_FUN_00543400(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_staticInit_FUN_00543400(void)

{
  _DAT_0270f7c0 = 0xbe8f5c29;
  _DAT_0270f7c4 = 0x3ed70a3d;
  _DAT_0270f7c8 = 0x3f19999a;
  _DAT_0270f7cc = 0x3eb33333;
  _DAT_0270f7d0 = 0x3ed70a3d;
  _DAT_0270f7d4 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CShadowClassInfo,"CCShadow" + 1,
             core_shadow_cpp_factoryFuncShadow_FUN_005434d0,&g_CShadowClassVersion,2,
             &g_CEnemyClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x270f854,"CShadow_Forest",core_shadow_cpp_FUN_00545e70,
             (int *)0x6040d0,1,&g_CShadowClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x270f890,"CSpiritShadow",core_shadow_cpp_FUN_00545f00,
             (int *)0x6040d4,1,&g_CShadowClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x270f8cc,"CDemonShadow",core_shadow_cpp_FUN_00545f90,
             (int *)0x6040d8,1,&g_CShadowClassInfo);
  return;
}

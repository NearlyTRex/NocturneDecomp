// Name: core_werewolf.cpp_staticInit_FUN_0058b6f0
// Address: 0058b6f0
// Address Range: [[0058b6f0, 0058b74f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_0058b6f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_staticInit_FUN_0058b6f0(void)

{
  _DAT_02662d04 = 0xbe8f5c29;
  _DAT_02662d08 = 0x3ed70a3d;
  _DAT_02662d0c = 0x3f19999a;
  _DAT_02662d10 = 0x3eb33333;
  _DAT_02662d14 = 0x3ed70a3d;
  _DAT_02662d18 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_0058b750,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}

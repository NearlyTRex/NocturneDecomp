// Name: core_werewolf.cpp_staticInit_FUN_0057d4c0
// Address: 0057d4c0
// Address Range: [[0057d4c0, 0057d51f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_0057d4c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_staticInit_FUN_0057d4c0(void)

{
  _DAT_02d2025c = 0xbe8f5c29;
  _DAT_02d20260 = 0x3ed70a3d;
  _DAT_02d20264 = 0x3f19999a;
  _DAT_02d20268 = 0x3eb33333;
  _DAT_02d2026c = 0x3ed70a3d;
  _DAT_02d20270 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_0057d520,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}

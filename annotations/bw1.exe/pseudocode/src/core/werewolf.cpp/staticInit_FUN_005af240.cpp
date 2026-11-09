// Name: core_werewolf.cpp_staticInit_FUN_005af240
// Address: 005af240
// Address Range: [[005af240, 005af29f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_005af240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_staticInit_FUN_005af240(void)

{
  _DAT_02c9a544 = 0xbe8f5c29;
  _DAT_02c9a548 = 0x3ed70a3d;
  _DAT_02c9a54c = 0x3f19999a;
  _DAT_02c9a550 = 0x3eb33333;
  _DAT_02c9a554 = 0x3ed70a3d;
  _DAT_02c9a558 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}

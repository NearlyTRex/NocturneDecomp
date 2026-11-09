// Name: core_ghoul.cpp_staticInit_FUN_004ddcd0
// Address: 004ddcd0
// Address Range: [[004ddcd0, 004ddd25]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004ddcd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_staticInit_FUN_004ddcd0(void)

{
  _DAT_01cd0d44 = 0xbf19999a;
  _DAT_01cd0d48 = 0;
  _DAT_01cd0d4c = 0;
  _DAT_01cd0d50 = 0x3f19999a;
  _DAT_01cd0d54 = 0;
  _DAT_01cd0d58 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGhoulClassInfo,(char *)0x5e3a41,core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}

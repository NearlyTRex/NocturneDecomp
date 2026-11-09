// Name: core_ghoul.cpp_staticInit_FUN_004c6850
// Address: 004c6850
// Address Range: [[004c6850, 004c68a5]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004c6850(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_staticInit_FUN_004c6850(void)

{
  _DAT_01d22d4c = 0xbf19999a;
  _DAT_01d22d50 = 0;
  _DAT_01d22d54 = 0;
  _DAT_01d22d58 = 0x3f19999a;
  _DAT_01d22d5c = 0;
  _DAT_01d22d60 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGhoulClassInfo,(char *)0x5c404d,core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}

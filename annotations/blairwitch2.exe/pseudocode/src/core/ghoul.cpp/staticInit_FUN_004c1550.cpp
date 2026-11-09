// Name: core_ghoul.cpp_staticInit_FUN_004c1550
// Address: 004c1550
// Address Range: [[004c1550, 004c15a5]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004c1550(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_staticInit_FUN_004c1550(void)

{
  _DAT_01cb81c8 = 0xbf19999a;
  _DAT_01cb81cc = 0;
  _DAT_01cb81d0 = 0;
  _DAT_01cb81d4 = 0x3f19999a;
  _DAT_01cb81d8 = 0;
  _DAT_01cb81dc = 0;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGhoulClassInfo,(char *)0x5d8e87,core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}

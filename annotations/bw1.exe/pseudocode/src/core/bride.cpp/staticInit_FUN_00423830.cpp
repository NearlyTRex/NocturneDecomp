// Name: core_bride.cpp_staticInit_FUN_00423830
// Address: 00423830
// Address Range: [[00423830, 00423885]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

{
  _DAT_007c5334 = 0xbf19999a;
  _DAT_007c5338 = 0;
  _DAT_007c533c = 0;
  _DAT_007c5340 = 0x3f19999a;
  _DAT_007c5344 = 0;
  _DAT_007c5348 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBrideClassInfo,"?CBride" + 1,core_bride_cpp_factoryFuncBride_FUN_00423890,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}

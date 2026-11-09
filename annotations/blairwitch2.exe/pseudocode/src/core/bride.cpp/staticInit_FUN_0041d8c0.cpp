// Name: core_bride.cpp_staticInit_FUN_0041d8c0
// Address: 0041d8c0
// Address Range: [[0041d8c0, 0041d915]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_0041d8c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_staticInit_FUN_0041d8c0(void)

{
  _DAT_007bcc88 = 0xbf19999a;
  _DAT_007bcc8c = 0;
  _DAT_007bcc90 = 0;
  _DAT_007bcc94 = 0x3f19999a;
  _DAT_007bcc98 = 0;
  _DAT_007bcc9c = 0;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBrideClassInfo,"?CBride" + 1,core_bride_cpp_factoryFuncBride_FUN_0041d920,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}

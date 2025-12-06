// Name: core_bride.cpp_staticInit_FUN_00423700
// Address: 00423700
// Address Range: [[00423700, 00423755]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bride.cpp_staticInit_FUN_00423700(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_00822c88 = 0xbf19999a;
  _DAT_00822c8c = 0;
  _DAT_00822c90 = 0;
  _DAT_00822c94 = 0x3f19999a;
  _DAT_00822c98 = 0;
  _DAT_00822c9c = 0;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBrideClassInfo,"CBride",core_bride_cpp_FUN_00423760,
                      &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return pCVar1;
}

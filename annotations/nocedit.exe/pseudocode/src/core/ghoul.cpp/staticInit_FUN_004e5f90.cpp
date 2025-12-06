// Name: core_ghoul.cpp_staticInit_FUN_004e5f90
// Address: 004e5f90
// Address Range: [[004e5f90, 004e5fe5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ghoul.cpp_staticInit_FUN_004e5f90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_02d832a8 = 0xbf19999a;
  _DAT_02d832ac = 0;
  _DAT_02d832b0 = 0;
  _DAT_02d832b4 = 0x3f19999a;
  _DAT_02d832b8 = 0;
  _DAT_02d832bc = 0;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_FUN_004e5ff0,
                      &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return pCVar1;
}

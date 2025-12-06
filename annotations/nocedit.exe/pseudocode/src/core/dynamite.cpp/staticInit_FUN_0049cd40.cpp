// Name: core_dynamite.cpp_staticInit_FUN_0049cd40
// Address: 0049cd40
// Address Range: [[0049cd40, 0049cd7c]]
// Convention: __cdecl
// Signature: CDemonActorType * core_dynamite.cpp_staticInit_FUN_0049cd40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CDynamiteClassInfo,"CDynamite",core_dynamite_cpp_FUN_0049cd80,
                      &g_CDynamiteClassVersion,1,&g_CWeaponClassInfo);
  _DAT_02ceed24 = 0;
  _DAT_02ceed28 = 0xc2000000;
  _DAT_02ceed2c = 0;
  return pCVar1;
}

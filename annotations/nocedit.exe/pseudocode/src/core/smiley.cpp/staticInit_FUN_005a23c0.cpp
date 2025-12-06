// Name: core_smiley.cpp_staticInit_FUN_005a23c0
// Address: 005a23c0
// Address Range: [[005a23c0, 005a23e3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_smiley.cpp_staticInit_FUN_005a23c0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_smiley_cpp_staticInit_FUN_005a23c0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSmileyClassInfo,"CSmiley",core_smiley_cpp_FUN_005a23f0,
                      &g_CSmileyClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}

// Name: core_hero.cpp_staticInit_FUN_004f2120
// Address: 004f2120
// Address Range: [[004f2120, 004f2163]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hero.cpp_staticInit_FUN_004f2120(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_hero_cpp_staticInit_FUN_004f2120(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHeroClassInfo,"CHero",(CDemonActor_FactoryFunc *)0x0,
             &g_CHeroPlaceholderClassVersion,0xc,&g_CCharacterClassInfo);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHeroPlaceholderClassInfo,"CHeroPlaceholder",
                      core_hero_cpp_FUN_004f3bc0,&g_CHeroPlaceholderClassVersion,1,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}

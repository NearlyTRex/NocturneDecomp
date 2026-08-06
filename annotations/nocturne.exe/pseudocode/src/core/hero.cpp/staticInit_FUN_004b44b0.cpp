// Name: core_hero.cpp_staticInit_FUN_004b44b0
// Address: 004b44b0
// Address Range: [[004b44b0, 004b44f3]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_staticInit_FUN_004b44b0(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_staticInit_FUN_004b44b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHeroActorType_01cae0ec,"CHero",(CDemonActor_FactoryFunc *)0x0,
             &g_INT_005ba940,0xc,&g_CCharacterActorType_00765a60);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHeroPlaceholderActorType_01cae128,"CHeroPlaceholder",
             core_hero_cpp_factoryFunc_FUN_004b5f60,&g_INT_005ba944,1,
             &g_CDemonActorActorType_00763e48);
  return;
}

// Name: core_hero.cpp_staticInit_FUN_004d2270
// Address: 004d2270
// Address Range: [[004d2270, 004d22b3]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_staticInit_FUN_004d2270(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_staticInit_FUN_004d2270(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHeroClassInfo,"CHero",(CDemonActor_FactoryFunc *)0x0,&g_CHeroClassVersion,
             0xf,&g_CCharacterClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)0x1d5ba74,"CHeroPlaceholder",
             core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0,&DAT_005fffbc,2,
             &g_CDemonActorClassInfo);
  return;
}

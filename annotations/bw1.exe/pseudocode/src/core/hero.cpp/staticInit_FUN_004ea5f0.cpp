// Name: core_hero.cpp_staticInit_FUN_004ea5f0
// Address: 004ea5f0
// Address Range: [[004ea5f0, 004ea633]]
// Convention: unknown
// Signature: void core_hero_cpp_staticInit_FUN_004ea5f0(void)

#include "nocturne.h"

void core_hero_cpp_staticInit_FUN_004ea5f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHeroClassInfo,"CHero",(CDemonActor_FactoryFunc *)0x0,&g_CHeroClassVersion,
             0xd,&g_CCharacterClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x1d06b14,"CHeroPlaceholder",
             core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70,&DAT_0061ef24,2,
             &g_CDemonActorClassInfo);
  return;
}

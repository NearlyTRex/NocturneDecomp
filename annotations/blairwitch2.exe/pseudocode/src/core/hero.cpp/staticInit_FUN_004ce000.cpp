// Name: core_hero.cpp_staticInit_FUN_004ce000
// Address: 004ce000
// Address Range: [[004ce000, 004ce043]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_staticInit_FUN_004ce000(void)

#include "nocturne.h"

void __cdecl core_hero_cpp_staticInit_FUN_004ce000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHeroClassInfo,(char *)0x5d99fc,(CDemonActor_FactoryFunc *)0x0,&g_CHeroClassVersion,
             0x11,&g_CCharacterClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x1cedf54,"CHeroPlaceholder",
             core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d0910,&DAT_00617a60,2,
             &g_CDemonActorClassInfo);
  return;
}

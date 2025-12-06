// Name: core_stone.cpp_staticInit_FUN_005baca0
// Address: 005baca0
// Address Range: [[005baca0, 005bacc3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_stone.cpp_staticInit_FUN_005baca0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_stone_cpp_staticInit_FUN_005baca0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTempleStoneClassInfo,"CTempleStone",core_stone_cpp_FUN_005bacd0,
                      &g_CTempleStoneClassVersion,1,&g_CBoxActorClassInfo);
  return pCVar1;
}

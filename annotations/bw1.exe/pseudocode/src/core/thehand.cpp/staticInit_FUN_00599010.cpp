// Name: core_thehand.cpp_staticInit_FUN_00599010
// Address: 00599010
// Address Range: [[00599010, 00599033]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_staticInit_FUN_00599010(void)

#include "nocturne.h"

void __cdecl core_thehand_cpp_staticInit_FUN_00599010(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTheHandClassInfo,"*>CTheHand" + 2,
             core_thehand_cpp_factoryFuncTheHand_FUN_00599040,&g_CTheHandClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}

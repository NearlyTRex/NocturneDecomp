// Name: core_gargoyle.cpp_staticInit_FUN_004dc210
// Address: 004dc210
// Address Range: [[004dc210, 004dc233]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_staticInit_FUN_004dc210(void)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_staticInit_FUN_004dc210(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGargoyleClassInfo,"CGargoyle",
             core_gargoyle_cpp_factoryFuncGargoyle_FUN_004dc240,&g_CGargoyleClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

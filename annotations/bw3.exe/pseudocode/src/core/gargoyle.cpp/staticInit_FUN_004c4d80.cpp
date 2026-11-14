// Name: core_gargoyle.cpp_staticInit_FUN_004c4d80
// Address: 004c4d80
// Address Range: [[004c4d80, 004c4da3]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_staticInit_FUN_004c4d80(void)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_staticInit_FUN_004c4d80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGargoyleClassInfo,"CGargoyle",
             core_gargoyle_cpp_factoryFuncGargoyle_FUN_004c4db0,&g_CGargoyleClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

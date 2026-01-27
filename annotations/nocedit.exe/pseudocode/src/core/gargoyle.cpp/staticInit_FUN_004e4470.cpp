// Name: core_gargoyle.cpp_staticInit_FUN_004e4470
// Address: 004e4470
// Address Range: [[004e4470, 004e4493]]
// Convention: __cdecl
// Signature: void core_gargoyle.cpp_staticInit_FUN_004e4470(void)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_staticInit_FUN_004e4470(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGargoyleClassInfo,"CGargoyle",core_gargoyle_cpp_factoryFunc_FUN_004e44a0,
             &g_CGargoyleClassVersion,2,&g_CEnemyClassInfo);
  return;
}

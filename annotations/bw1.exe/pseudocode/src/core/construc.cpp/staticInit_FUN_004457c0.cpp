// Name: core_construc.cpp_staticInit_FUN_004457c0
// Address: 004457c0
// Address Range: [[004457c0, 004457e3]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_staticInit_FUN_004457c0(void)

#include "nocturne.h"

void __cdecl core_construc_cpp_staticInit_FUN_004457c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CConstructClassInfo,"CConstruct",
             core_construc_cpp_factoryFuncConstruct_FUN_004457f0,&g_CConstructClassVersion,3,
             &g_CEnemyClassInfo);
  return;
}

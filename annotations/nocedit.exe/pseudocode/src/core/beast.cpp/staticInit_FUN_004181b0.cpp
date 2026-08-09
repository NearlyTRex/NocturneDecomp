// Name: core_beast.cpp_staticInit_FUN_004181b0
// Address: 004181b0
// Address Range: [[004181b0, 004181d3]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_staticInit_FUN_004181b0(void)

#include "nocturne.h"

void __cdecl core_beast_cpp_staticInit_FUN_004181b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBeastClassInfo,"CBeast",core_beast_cpp_factoryFuncBeast_FUN_004181e0,
             &g_CBeastClassVersion,1,&g_CEnemyClassInfo);
  return;
}

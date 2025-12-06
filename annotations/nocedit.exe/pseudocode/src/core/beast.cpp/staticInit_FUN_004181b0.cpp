// Name: core_beast.cpp_staticInit_FUN_004181b0
// Address: 004181b0
// Address Range: [[004181b0, 004181d3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_beast.cpp_staticInit_FUN_004181b0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_beast_cpp_staticInit_FUN_004181b0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBeastClassInfo,"CBeast",core_beast_cpp_constructor_FUN_004181e0,
                      &g_CBeastClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}

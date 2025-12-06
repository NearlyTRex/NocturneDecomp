// Name: core_gargoyle.cpp_staticInit_FUN_004e4470
// Address: 004e4470
// Address Range: [[004e4470, 004e4493]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gargoyle.cpp_staticInit_FUN_004e4470(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_gargoyle_cpp_staticInit_FUN_004e4470(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGargoyleClassInfo,"CGargoyle",core_gargoyle_cpp_FUN_004e44a0,
                      &g_CGargoyleClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}

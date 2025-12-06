// Name: core_boneguy.cpp_staticInit_FUN_0041b6d0
// Address: 0041b6d0
// Address Range: [[0041b6d0, 0041b6f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_boneguy.cpp_staticInit_FUN_0041b6d0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_boneguy_cpp_staticInit_FUN_0041b6d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBoneGuyClassInfo,"CBoneGuy",
                      core_boneguy_cpp_constructor_FUN_0041b820,&g_CBoneGuyClassVersion,5,
                      &g_CEnemyClassInfo);
  return pCVar1;
}

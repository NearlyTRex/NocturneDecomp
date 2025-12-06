// Name: core_colonel.cpp_staticInit_FUN_0043f770
// Address: 0043f770
// Address Range: [[0043f770, 0043f793]]
// Convention: __cdecl
// Signature: CDemonActorType * core_colonel.cpp_staticInit_FUN_0043f770(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_colonel_cpp_staticInit_FUN_0043f770(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CColonelClassInfo,"CColonel",core_colonel_cpp_FUN_0043f7a0,
                      &g_CColonelClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}

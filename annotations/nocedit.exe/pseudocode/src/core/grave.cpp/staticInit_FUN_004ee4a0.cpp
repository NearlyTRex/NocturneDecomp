// Name: core_grave.cpp_staticInit_FUN_004ee4a0
// Address: 004ee4a0
// Address Range: [[004ee4a0, 004ee4c3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_grave.cpp_staticInit_FUN_004ee4a0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGraveClassInfo,"CGrave",core_grave_cpp_FUN_004ee4d0,
                      &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return pCVar1;
}

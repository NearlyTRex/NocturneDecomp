// Name: core_health.cpp_staticInit_FUN_004f1d60
// Address: 004f1d60
// Address Range: [[004f1d60, 004f1d83]]
// Convention: __cdecl
// Signature: CDemonActorType * core_health.cpp_staticInit_FUN_004f1d60(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_health_cpp_staticInit_FUN_004f1d60(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHealthItemClassInfo,"CHealthItem",core_health_cpp_FUN_004f1d90,
                      &g_CHealthItemClassVersion,3,&g_CDemonActorClassInfo);
  return pCVar1;
}

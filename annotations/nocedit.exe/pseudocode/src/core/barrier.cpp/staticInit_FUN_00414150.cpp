// Name: core_barrier.cpp_staticInit_FUN_00414150
// Address: 00414150
// Address Range: [[00414150, 00414173]]
// Convention: __cdecl
// Signature: CDemonActorType * core_barrier.cpp_staticInit_FUN_00414150(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_barrier_cpp_staticInit_FUN_00414150(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBarrierClassInfo,"CBarrier",
                      core_barrier_cpp_constructor_FUN_00414180,&g_CBarrierClassVersion,2,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}

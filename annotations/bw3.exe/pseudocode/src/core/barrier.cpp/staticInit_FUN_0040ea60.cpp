// Name: core_barrier.cpp_staticInit_FUN_0040ea60
// Address: 0040ea60
// Address Range: [[0040ea60, 0040ea83]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_staticInit_FUN_0040ea60(void)

#include "nocturne.h"

void __cdecl core_barrier_cpp_staticInit_FUN_0040ea60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBarrierClassInfo,"CBarrier",
             core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90,&g_CBarrierClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}

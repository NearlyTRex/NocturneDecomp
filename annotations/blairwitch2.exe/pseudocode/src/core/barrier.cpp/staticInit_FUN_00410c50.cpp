// Name: core_barrier.cpp_staticInit_FUN_00410c50
// Address: 00410c50
// Address Range: [[00410c50, 00410c73]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_staticInit_FUN_00410c50(void)

#include "nocturne.h"

void __cdecl core_barrier_cpp_staticInit_FUN_00410c50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBarrierClassInfo,"CBarrier",
             core_barrier_cpp_factoryFuncBarrier_FUN_00410c80,&g_CBarrierClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}

// Name: core_barrier.cpp_staticInit_FUN_004107d0
// Address: 004107d0
// Address Range: [[004107d0, 004107f3]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_staticInit_FUN_004107d0(void)

#include "nocturne.h"

void __cdecl core_barrier_cpp_staticInit_FUN_004107d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBarrierClassInfo,"CBarrier",
             core_barrier_cpp_factoryFuncBarrier_FUN_00410800,&g_CBarrierClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}

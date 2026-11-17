// Name: core_barrier.cpp_staticInit_FUN_004116b0
// Address: 004116b0
// Address Range: [[004116b0, 004116d3]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_staticInit_FUN_004116b0(void)

#include "nocturne.h"

void __cdecl core_barrier_cpp_staticInit_FUN_004116b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBarrierClassInfo,"CBarrier",
             core_barrier_cpp_factoryFuncBarrier_FUN_004116e0,&g_CBarrierClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}

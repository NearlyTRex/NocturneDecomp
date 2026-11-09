// Name: core_spike.cpp_staticInit_FUN_00566800
// Address: 00566800
// Address Range: [[00566800, 00566823]]
// Convention: unknown
// Signature: void core_spike_cpp_staticInit_FUN_00566800(void)

#include "nocturne.h"

void core_spike_cpp_staticInit_FUN_00566800(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpikeClassInfo,(char *)0x5d5b02,core_spike_cpp_factoryFuncSpike_FUN_00566830,
             &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

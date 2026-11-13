// Name: core_spike.cpp_staticInit_FUN_005604e0
// Address: 005604e0
// Address Range: [[005604e0, 00560503]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_staticInit_FUN_005604e0(void)

#include "nocturne.h"

void __cdecl core_spike_cpp_staticInit_FUN_005604e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSpikeClassInfo,(char *)0x5eafe4,core_spike_cpp_factoryFuncSpike_FUN_00560510,
             &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

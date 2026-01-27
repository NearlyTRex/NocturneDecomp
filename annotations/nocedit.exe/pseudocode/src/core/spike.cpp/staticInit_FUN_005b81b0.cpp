// Name: core_spike.cpp_staticInit_FUN_005b81b0
// Address: 005b81b0
// Address Range: [[005b81b0, 005b81d3]]
// Convention: __cdecl
// Signature: void core_spike.cpp_staticInit_FUN_005b81b0(void)

#include "nocturne.h"

void __cdecl core_spike_cpp_staticInit_FUN_005b81b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CSpikeClassInfo,"CSpike",core_spike_cpp_factoryFunc_FUN_005b81e0,
             &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

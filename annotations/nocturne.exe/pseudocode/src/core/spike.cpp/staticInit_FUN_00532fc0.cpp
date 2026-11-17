// Name: core_spike.cpp_staticInit_FUN_00532fc0
// Address: 00532fc0
// Address Range: [[00532fc0, 00532fe3]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_staticInit_FUN_00532fc0(void)

#include "nocturne.h"

void __cdecl core_spike_cpp_staticInit_FUN_00532fc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSpikeClassInfo,"CSpike",core_spike_cpp_factoryFuncSpike_FUN_00532ff0,
             &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

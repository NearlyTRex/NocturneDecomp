// Name: core_spike.cpp_staticInit_FUN_00532fc0
// Address: 00532fc0
// Address Range: [[00532fc0, 00532fe3]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_staticInit_FUN_00532fc0(void)

#include "nocturne.h"

void __cdecl core_spike_cpp_staticInit_FUN_00532fc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSpikeActorType_02dc9e28,"CSpike",core_spike_cpp_factoryFunc_FUN_00532ff0,
             &INT_005c0f90,1,&g_CDemonActorActorType_00763e48);
  return;
}

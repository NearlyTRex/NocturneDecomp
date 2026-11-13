// Name: core_spike.cpp_staticInit_FUN_00582f30
// Address: 00582f30
// Address Range: [[00582f30, 00582f53]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_staticInit_FUN_00582f30(void)

#include "nocturne.h"

void __cdecl core_spike_cpp_staticInit_FUN_00582f30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSpikeClassInfo,(char *)0x5f61e8,core_spike_cpp_factoryFuncSpike_FUN_00582f60,
             &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

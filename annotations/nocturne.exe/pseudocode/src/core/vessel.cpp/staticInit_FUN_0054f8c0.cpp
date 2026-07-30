// Name: core_vessel.cpp_staticInit_FUN_0054f8c0
// Address: 0054f8c0
// Address Range: [[0054f8c0, 0054f8e3]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_staticInit_FUN_0054f8c0(void)

#include "nocturne.h"

void __cdecl core_vessel_cpp_staticInit_FUN_0054f8c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CCryptVesselActorType_02dd11cc,"CCryptVessel",
             core_vessel_cpp_factoryFunc_FUN_0054f8f0,&g_INT_005c11c4,4,
             &g_CDemonActorActorType_00763e48);
  return;
}

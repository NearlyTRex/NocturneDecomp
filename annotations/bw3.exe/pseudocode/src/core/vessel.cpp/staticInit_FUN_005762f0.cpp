// Name: core_vessel.cpp_staticInit_FUN_005762f0
// Address: 005762f0
// Address Range: [[005762f0, 00576313]]
// Convention: unknown
// Signature: void core_vessel_cpp_staticInit_FUN_005762f0(void)

#include "nocturne.h"

void core_vessel_cpp_staticInit_FUN_005762f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CCryptVesselClassInfo,"?CCryptVessel" + 1,
             core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320,&g_CCryptVesselClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}

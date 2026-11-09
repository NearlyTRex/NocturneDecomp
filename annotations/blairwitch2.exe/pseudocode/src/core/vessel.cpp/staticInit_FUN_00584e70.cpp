// Name: core_vessel.cpp_staticInit_FUN_00584e70
// Address: 00584e70
// Address Range: [[00584e70, 00584e93]]
// Convention: unknown
// Signature: void core_vessel_cpp_staticInit_FUN_00584e70(void)

#include "nocturne.h"

void core_vessel_cpp_staticInit_FUN_00584e70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CCryptVesselClassInfo,"CCryptVessel",
             core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0,&g_CCryptVesselClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}

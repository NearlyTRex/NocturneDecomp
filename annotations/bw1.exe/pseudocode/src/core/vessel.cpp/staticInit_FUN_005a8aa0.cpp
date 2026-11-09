// Name: core_vessel.cpp_staticInit_FUN_005a8aa0
// Address: 005a8aa0
// Address Range: [[005a8aa0, 005a8ac3]]
// Convention: unknown
// Signature: void core_vessel_cpp_staticInit_FUN_005a8aa0(void)

#include "nocturne.h"

void core_vessel_cpp_staticInit_FUN_005a8aa0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCryptVesselClassInfo,"CCryptVessel",
             core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0,&g_CCryptVesselClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}

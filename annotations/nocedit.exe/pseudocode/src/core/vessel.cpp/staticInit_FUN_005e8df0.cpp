// Name: core_vessel.cpp_staticInit_FUN_005e8df0
// Address: 005e8df0
// Address Range: [[005e8df0, 005e8e13]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_staticInit_FUN_005e8df0(void)

#include "nocturne.h"

void __cdecl core_vessel_cpp_staticInit_FUN_005e8df0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CCryptVesselClassInfo,"CCryptVessel",
             core_vessel_cpp_factoryFuncCryptVessel_FUN_005e8e20,&g_CCryptVesselClassVersion,4,
             &g_CDemonActorClassInfo);
  return;
}

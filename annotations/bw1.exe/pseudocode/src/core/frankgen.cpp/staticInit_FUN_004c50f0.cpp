// Name: core_frankgen.cpp_staticInit_FUN_004c50f0
// Address: 004c50f0
// Address Range: [[004c50f0, 004c5113]]
// Convention: unknown
// Signature: void core_frankgen_cpp_staticInit_FUN_004c50f0(void)

#include "nocturne.h"

void core_frankgen_cpp_staticInit_FUN_004c50f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFrankenstienMachineClassInfo,"CFrankenstienMachine",
             core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120,
             &g_CFrankenstienMachineClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

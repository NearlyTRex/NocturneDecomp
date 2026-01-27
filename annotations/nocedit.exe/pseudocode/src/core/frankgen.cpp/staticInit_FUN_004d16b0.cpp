// Name: core_frankgen.cpp_staticInit_FUN_004d16b0
// Address: 004d16b0
// Address Range: [[004d16b0, 004d16d3]]
// Convention: __cdecl
// Signature: void core_frankgen.cpp_staticInit_FUN_004d16b0(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_staticInit_FUN_004d16b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFrankenstienMachineClassInfo,"CFrankenstienMachine",
             core_frankgen_cpp_factoryFunc_FUN_004d16e0,&g_CFrankenstienMachineClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

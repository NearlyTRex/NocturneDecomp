// Name: core_frankgen.cpp_staticInit_FUN_004ac140
// Address: 004ac140
// Address Range: [[004ac140, 004ac163]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_staticInit_FUN_004ac140(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_staticInit_FUN_004ac140(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFrankenstienMachineClassInfo,"CFrankenstienMachine",
             core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170,
             &g_CFrankenstienMachineClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

// Name: core_frankgen.cpp_staticInit_FUN_004945d0
// Address: 004945d0
// Address Range: [[004945d0, 004945f3]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_staticInit_FUN_004945d0(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_staticInit_FUN_004945d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFrankenstienMachineClassInfo,"CFrankenstienMachine",
             core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_00494600,
             &g_CFrankenstienMachineClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

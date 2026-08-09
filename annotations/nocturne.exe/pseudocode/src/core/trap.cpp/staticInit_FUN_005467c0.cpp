// Name: core_trap.cpp_staticInit_FUN_005467c0
// Address: 005467c0
// Address Range: [[005467c0, 005467e3]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_staticInit_FUN_005467c0(void)

#include "nocturne.h"

void __cdecl core_trap_cpp_staticInit_FUN_005467c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTrapActorType_02dd100c,"CTrap",core_trap_cpp_factoryFuncTrap_FUN_005467f0,
             &INT_005c1108,1,&g_CDemonActorActorType_00763e48);
  return;
}

// Name: core_trap.cpp_staticInit_FUN_005763f0
// Address: 005763f0
// Address Range: [[005763f0, 00576413]]
// Convention: unknown
// Signature: void core_trap_cpp_staticInit_FUN_005763f0(void)

#include "nocturne.h"

void core_trap_cpp_staticInit_FUN_005763f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTrapClassInfo,(char *)0x5eccd8,core_trap_cpp_factoryFuncTrap_FUN_00576420,
             &g_CTrapClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

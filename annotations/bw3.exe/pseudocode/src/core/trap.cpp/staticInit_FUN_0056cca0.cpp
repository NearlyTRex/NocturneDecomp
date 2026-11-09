// Name: core_trap.cpp_staticInit_FUN_0056cca0
// Address: 0056cca0
// Address Range: [[0056cca0, 0056ccab]]
// Convention: unknown
// Signature: void core_trap_cpp_staticInit_FUN_0056cca0(void)

#include "nocturne.h"

void core_trap_cpp_staticInit_FUN_0056cca0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTrapClassInfo,"CTrap",core_trap_cpp_factoryFuncTrap_FUN_0056ccd0,
             &g_CTrapClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

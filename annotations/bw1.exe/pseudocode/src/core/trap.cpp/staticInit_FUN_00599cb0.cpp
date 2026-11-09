// Name: core_trap.cpp_staticInit_FUN_00599cb0
// Address: 00599cb0
// Address Range: [[00599cb0, 00599cd3]]
// Convention: unknown
// Signature: void core_trap_cpp_staticInit_FUN_00599cb0(void)

#include "nocturne.h"

void core_trap_cpp_staticInit_FUN_00599cb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTrapClassInfo,"CTrap",core_trap_cpp_factoryFuncTrap_FUN_00599ce0,
             &g_CTrapClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

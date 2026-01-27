// Name: core_trap.cpp_staticInit_FUN_005de620
// Address: 005de620
// Address Range: [[005de620, 005de643]]
// Convention: __cdecl
// Signature: void core_trap.cpp_staticInit_FUN_005de620(void)

#include "nocturne.h"

void __cdecl core_trap_cpp_staticInit_FUN_005de620(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTrapClassInfo,"CTrap",core_trap_cpp_factoryFunc_FUN_005de650,
             &g_CTrapClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

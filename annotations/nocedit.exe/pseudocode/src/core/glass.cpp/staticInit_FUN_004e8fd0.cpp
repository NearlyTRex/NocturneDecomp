// Name: core_glass.cpp_staticInit_FUN_004e8fd0
// Address: 004e8fd0
// Address Range: [[004e8fd0, 004e8ff3]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_staticInit_FUN_004e8fd0(void)

#include "nocturne.h"

void __cdecl core_glass_cpp_staticInit_FUN_004e8fd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_factoryFuncGlass_FUN_004e9000,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}

// Name: core_glass.cpp_staticInit_FUN_004e0fb0
// Address: 004e0fb0
// Address Range: [[004e0fb0, 004e0fd3]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_staticInit_FUN_004e0fb0(void)

#include "nocturne.h"

void __cdecl core_glass_cpp_staticInit_FUN_004e0fb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_factoryFuncGlass_FUN_004e0fe0,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}

// Name: core_glass.cpp_staticInit_FUN_004abaf0
// Address: 004abaf0
// Address Range: [[004abaf0, 004abb13]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_staticInit_FUN_004abaf0(void)

#include "nocturne.h"

void __cdecl core_glass_cpp_staticInit_FUN_004abaf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_factoryFuncGlass_FUN_004abb20,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}

// Name: core_glass.cpp_staticInit_FUN_004c4840
// Address: 004c4840
// Address Range: [[004c4840, 004c4863]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_staticInit_FUN_004c4840(void)

#include "nocturne.h"

void __cdecl core_glass_cpp_staticInit_FUN_004c4840(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_factoryFuncGlass_FUN_004c4870,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}

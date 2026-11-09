// Name: core_glass.cpp_staticInit_FUN_004c9b40
// Address: 004c9b40
// Address Range: [[004c9b40, 004c9b63]]
// Convention: unknown
// Signature: void core_glass_cpp_staticInit_FUN_004c9b40(void)

#include "nocturne.h"

void core_glass_cpp_staticInit_FUN_004c9b40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_factoryFuncGlass_FUN_004c9b70,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}

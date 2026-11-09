// Name: core_styler.cpp_staticInit_FUN_0059d6f0
// Address: 0059d6f0
// Address Range: [[0059d6f0, 0059d713]]
// Convention: unknown
// Signature: void core_styler_cpp_staticInit_FUN_0059d6f0(void)

#include "nocturne.h"

void core_styler_cpp_staticInit_FUN_0059d6f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CStylerClassInfo,"CStyler",core_styler_cpp_factoryFuncStyler_FUN_0059d720,
             &g_CStylerClassVersion,2,&g_CEnemyClassInfo);
  return;
}

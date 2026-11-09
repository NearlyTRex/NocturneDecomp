// Name: core_gasmask.cpp_staticInit_FUN_004c12e0
// Address: 004c12e0
// Address Range: [[004c12e0, 004c1303]]
// Convention: unknown
// Signature: void core_gasmask_cpp_staticInit_FUN_004c12e0(void)

#include "nocturne.h"

void core_gasmask_cpp_staticInit_FUN_004c12e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGasMaskClassInfo,"CGasMask",
             core_gasmask_cpp_factoryFuncGasMask_FUN_004c1310,&g_CGasMaskClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

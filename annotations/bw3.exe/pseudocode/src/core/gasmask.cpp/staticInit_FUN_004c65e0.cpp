// Name: core_gasmask.cpp_staticInit_FUN_004c65e0
// Address: 004c65e0
// Address Range: [[004c65e0, 004c6603]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_staticInit_FUN_004c65e0(void)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_staticInit_FUN_004c65e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGasMaskClassInfo,"CGasMask",
             core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610,&g_CGasMaskClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

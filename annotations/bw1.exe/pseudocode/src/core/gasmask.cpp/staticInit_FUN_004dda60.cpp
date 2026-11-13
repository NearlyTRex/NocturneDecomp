// Name: core_gasmask.cpp_staticInit_FUN_004dda60
// Address: 004dda60
// Address Range: [[004dda60, 004dda83]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_staticInit_FUN_004dda60(void)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_staticInit_FUN_004dda60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGasMaskClassInfo,"CGasMask",
             core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90,&g_CGasMaskClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

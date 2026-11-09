// Name: core_colonel.cpp_staticInit_FUN_004355b0
// Address: 004355b0
// Address Range: [[004355b0, 004355d3]]
// Convention: unknown
// Signature: void core_colonel_cpp_staticInit_FUN_004355b0(void)

#include "nocturne.h"

void core_colonel_cpp_staticInit_FUN_004355b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CColonelClassInfo,"CColonel",
             core_colonel_cpp_factoryFuncColonel_FUN_004355e0,&g_CColonelClassVersion,1,
             &g_CHeroClassInfo);
  return;
}

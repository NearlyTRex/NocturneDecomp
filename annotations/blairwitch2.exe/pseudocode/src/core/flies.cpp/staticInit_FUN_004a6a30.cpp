// Name: core_flies.cpp_staticInit_FUN_004a6a30
// Address: 004a6a30
// Address Range: [[004a6a30, 004a6a53]]
// Convention: unknown
// Signature: void core_flies_cpp_staticInit_FUN_004a6a30(void)

#include "nocturne.h"

void core_flies_cpp_staticInit_FUN_004a6a30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFliesClassInfo,"CFlies",core_flies_cpp_factoryFuncFlies_FUN_004a6a60,
             &g_CFliesClassVersion,3,&g_CDemonActorClassInfo);
  return;
}

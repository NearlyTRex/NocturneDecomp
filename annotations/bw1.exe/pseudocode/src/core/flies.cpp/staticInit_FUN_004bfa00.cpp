// Name: core_flies.cpp_staticInit_FUN_004bfa00
// Address: 004bfa00
// Address Range: [[004bfa00, 004bfa23]]
// Convention: unknown
// Signature: void core_flies_cpp_staticInit_FUN_004bfa00(void)

#include "nocturne.h"

void core_flies_cpp_staticInit_FUN_004bfa00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFliesClassInfo,"CFlies",core_flies_cpp_factoryFuncFlies_FUN_004bfa30,
             &g_CFliesClassVersion,3,&g_CDemonActorClassInfo);
  return;
}

// Name: core_crate.cpp_staticInit_FUN_00448fb0
// Address: 00448fb0
// Address Range: [[00448fb0, 00448fd3]]
// Convention: unknown
// Signature: void core_crate_cpp_staticInit_FUN_00448fb0(void)

#include "nocturne.h"

void core_crate_cpp_staticInit_FUN_00448fb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCrateClassInfo,"CCrate",core_crate_cpp_factoryFuncCrate_FUN_00448fe0,
             &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return;
}

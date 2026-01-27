// Name: core_crate.cpp_staticInit_FUN_00448460
// Address: 00448460
// Address Range: [[00448460, 00448483]]
// Convention: __cdecl
// Signature: void core_crate.cpp_staticInit_FUN_00448460(void)

#include "nocturne.h"

void __cdecl core_crate_cpp_staticInit_FUN_00448460(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CCrateClassInfo,"CCrate",core_crate_cpp_factoryFunc_FUN_00448490,
             &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return;
}

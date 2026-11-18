// Name: core_crate.cpp_staticInit_FUN_0043c7b0
// Address: 0043c7b0
// Address Range: [[0043c7b0, 0043c7d3]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_staticInit_FUN_0043c7b0(void)

#include "nocturne.h"

void __cdecl core_crate_cpp_staticInit_FUN_0043c7b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CCrateClassInfo,"CCrate",core_crate_cpp_factoryFuncCrate_FUN_0043c7e0,
             &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return;
}

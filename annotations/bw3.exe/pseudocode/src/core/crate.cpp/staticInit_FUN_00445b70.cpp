// Name: core_crate.cpp_staticInit_FUN_00445b70
// Address: 00445b70
// Address Range: [[00445b70, 00445b93]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_staticInit_FUN_00445b70(void)

#include "nocturne.h"

void __cdecl core_crate_cpp_staticInit_FUN_00445b70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CCrateClassInfo,"CCrate",core_crate_cpp_factoryFuncCrate_FUN_00445ba0,
             &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return;
}

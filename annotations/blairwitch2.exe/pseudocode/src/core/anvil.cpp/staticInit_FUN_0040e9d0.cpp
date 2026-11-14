// Name: core_anvil.cpp_staticInit_FUN_0040e9d0
// Address: 0040e9d0
// Address Range: [[0040e9d0, 0040e9f3]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_staticInit_FUN_0040e9d0(void)

#include "nocturne.h"

void __cdecl core_anvil_cpp_staticInit_FUN_0040e9d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CAnvilClassInfo,"CAnvil",core_anvil_cpp_factoryFuncAnvil_FUN_0040ea00,
             &g_CAnvilClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

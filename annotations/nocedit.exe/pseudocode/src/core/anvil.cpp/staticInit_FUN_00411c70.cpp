// Name: core_anvil.cpp_staticInit_FUN_00411c70
// Address: 00411c70
// Address Range: [[00411c70, 00411c93]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_staticInit_FUN_00411c70(void)

#include "nocturne.h"

void __cdecl core_anvil_cpp_staticInit_FUN_00411c70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CAnvilClassInfo,"CAnvil",core_anvil_cpp_factoryFuncAnvil_FUN_00411ca0,
             &g_CAnvilClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

// Name: core_anvil.cpp_staticInit_FUN_0040e570
// Address: 0040e570
// Address Range: [[0040e570, 0040e593]]
// Convention: unknown
// Signature: void core_anvil_cpp_staticInit_FUN_0040e570(void)

#include "nocturne.h"

void core_anvil_cpp_staticInit_FUN_0040e570(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CAnvilClassInfo,"CAnvil",core_anvil_cpp_factoryFuncAnvil_FUN_0040e5a0,
             &g_CAnvilClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

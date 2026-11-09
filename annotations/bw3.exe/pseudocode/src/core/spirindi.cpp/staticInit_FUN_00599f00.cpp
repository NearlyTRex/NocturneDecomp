// Name: core_spirindi.cpp_staticInit_FUN_00599f00
// Address: 00599f00
// Address Range: [[00599f00, 00599f23]]
// Convention: unknown
// Signature: void core_spirindi_cpp_staticInit_FUN_00599f00(void)

#include "nocturne.h"

void core_spirindi_cpp_staticInit_FUN_00599f00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpiritIndianClassInfo,"CSpiritIndian",
             core_spirindi_cpp_factoryFuncSpiritIndian_FUN_00599f30,&g_CSpiritIndianClassVersion,1,
             &g_CNPCClassInfo);
  return;
}

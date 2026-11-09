// Name: core_bat.cpp_staticInit_FUN_0040ece0
// Address: 0040ece0
// Address Range: [[0040ece0, 0040ed03]]
// Convention: unknown
// Signature: void core_bat_cpp_staticInit_FUN_0040ece0(void)

#include "nocturne.h"

void core_bat_cpp_staticInit_FUN_0040ece0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBatClassInfo,(char *)0x5b621e,core_bat_cpp_factoryFuncBat_FUN_0040edb0,
             &g_CBatClassVersion,4,&g_CDemonActorClassInfo);
  return;
}

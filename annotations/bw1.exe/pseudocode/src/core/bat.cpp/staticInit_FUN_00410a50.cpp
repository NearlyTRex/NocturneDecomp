// Name: core_bat.cpp_staticInit_FUN_00410a50
// Address: 00410a50
// Address Range: [[00410a50, 00410a73]]
// Convention: unknown
// Signature: void core_bat_cpp_staticInit_FUN_00410a50(void)

#include "nocturne.h"

void core_bat_cpp_staticInit_FUN_00410a50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBatClassInfo,(char *)0x5d35c1,core_bat_cpp_factoryFuncBat_FUN_00410b20,
             &g_CBatClassVersion,4,&g_CDemonActorClassInfo);
  return;
}

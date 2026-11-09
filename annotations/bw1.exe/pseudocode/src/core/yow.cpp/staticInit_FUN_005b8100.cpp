// Name: core_yow.cpp_staticInit_FUN_005b8100
// Address: 005b8100
// Address Range: [[005b8100, 005b8123]]
// Convention: unknown
// Signature: void core_yow_cpp_staticInit_FUN_005b8100(void)

#include "nocturne.h"

void core_yow_cpp_staticInit_FUN_005b8100(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CYowClassInfo,(char *)0x5fa1c4,core_yow_cpp_factoryFuncYow_FUN_005b8130,
             &g_CYowClassVersion,1,&g_CEnemyClassInfo);
  return;
}

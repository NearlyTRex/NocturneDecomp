// Name: core_hostage.cpp_staticInit_FUN_004d1270
// Address: 004d1270
// Address Range: [[004d1270, 004d1293]]
// Convention: unknown
// Signature: void core_hostage_cpp_staticInit_FUN_004d1270(void)

#include "nocturne.h"

void core_hostage_cpp_staticInit_FUN_004d1270(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHostageClassInfo,"CHostage",
             core_hostage_cpp_factoryFuncHostage_FUN_004d12a0,&g_CHostageClassVersion,0xc,
             &g_CNPCClassInfo);
  return;
}

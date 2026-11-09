// Name: core_moloch.cpp_staticInit_FUN_005012e0
// Address: 005012e0
// Address Range: [[005012e0, 00501303]]
// Convention: unknown
// Signature: void core_moloch_cpp_staticInit_FUN_005012e0(void)

#include "nocturne.h"

void core_moloch_cpp_staticInit_FUN_005012e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMolochClassInfo,"CMoloch",core_moloch_cpp_factoryFuncMoloch_FUN_00501310,
             &g_CMolochClassVersion,1,&g_CHeroClassInfo);
  return;
}

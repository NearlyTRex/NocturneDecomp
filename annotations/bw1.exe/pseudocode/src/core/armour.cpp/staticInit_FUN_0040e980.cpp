// Name: core_armour.cpp_staticInit_FUN_0040e980
// Address: 0040e980
// Address Range: [[0040e980, 0040e9a3]]
// Convention: unknown
// Signature: void core_armour_cpp_staticInit_FUN_0040e980(void)

#include "nocturne.h"

void core_armour_cpp_staticInit_FUN_0040e980(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CArmourClassInfo,"CArmour",core_armour_cpp_factoryFuncArmour_FUN_0040e9b0,
             &g_CArmourClassVersion,1,&g_CEnemyClassInfo);
  return;
}

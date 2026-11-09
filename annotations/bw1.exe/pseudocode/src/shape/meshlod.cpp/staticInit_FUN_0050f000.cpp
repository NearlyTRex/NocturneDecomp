// Name: shape_meshlod.cpp_staticInit_FUN_0050f000
// Address: 0050f000
// Address Range: [[0050f000, 0050f023]]
// Convention: unknown
// Signature: void shape_meshlod_cpp_staticInit_FUN_0050f000(void)

#include "nocturne.h"

void shape_meshlod_cpp_staticInit_FUN_0050f000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMimicClassInfo,"CMimic",shape_meshlod_cpp_factoryFuncMimic_FUN_0050f090,
             &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return;
}

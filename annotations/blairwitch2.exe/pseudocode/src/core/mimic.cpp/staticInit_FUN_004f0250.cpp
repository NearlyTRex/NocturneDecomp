// Name: core_mimic.cpp_staticInit_FUN_004f0250
// Address: 004f0250
// Address Range: [[004f0250, 004f0273]]
// Convention: unknown
// Signature: void core_mimic_cpp_staticInit_FUN_004f0250(void)

#include "nocturne.h"

void core_mimic_cpp_staticInit_FUN_004f0250(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMimicClassInfo,"CMimic",core_mimic_cpp_factoryFuncMimic_FUN_004f02e0,
             &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return;
}

// Name: core_mimic.cpp_staticInit_FUN_0050f000
// Address: 0050f000
// Address Range: [[0050f000, 0050f023]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_staticInit_FUN_0050f000(void)

#include "nocturne.h"

void __cdecl core_mimic_cpp_staticInit_FUN_0050f000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMimicClassInfo,"CMimic",core_mimic_cpp_factoryFuncMimic_FUN_0050f090,
             &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return;
}

// Name: core_mimic.cpp_staticInit_FUN_004d4390
// Address: 004d4390
// Address Range: [[004d4390, 004d43b3]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_staticInit_FUN_004d4390(void)

#include "nocturne.h"

void __cdecl core_mimic_cpp_staticInit_FUN_004d4390(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMimicActorType_01cc9058,"CMimic",
             core_mimic_cpp_factoryFuncMimic_FUN_004d4420,&INT_005baf48,3,
             &g_CEnemyActorType_01bcdebc);
  return;
}

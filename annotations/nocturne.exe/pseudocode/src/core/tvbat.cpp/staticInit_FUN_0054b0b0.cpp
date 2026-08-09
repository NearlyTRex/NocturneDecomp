// Name: core_tvbat.cpp_staticInit_FUN_0054b0b0
// Address: 0054b0b0
// Address Range: [[0054b0b0, 0054b0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_staticInit_FUN_0054b0b0(void)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_staticInit_FUN_0054b0b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTVBatActorType_02dd110c,"CTVBat",
             core_tvbat_cpp_factoryFuncTVBat_FUN_0054b0e0,&INT_005c1174,5,
             &g_CEnemyActorType_01bcdebc);
  return;
}

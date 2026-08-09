// Name: core_sentinel.cpp_staticInit_FUN_005058c0
// Address: 005058c0
// Address Range: [[005058c0, 005058e3]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_staticInit_FUN_005058c0(void)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_staticInit_FUN_005058c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSentinelActorType_01e57248,"CSentinel",
             core_sentinel_cpp_factoryFuncSentinel_FUN_005058f0,&INT_005be310,2,
             &g_CEnemyActorType_01bcdebc);
  return;
}

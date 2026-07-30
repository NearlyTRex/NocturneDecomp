// Name: core_hotdemon.cpp_staticInit_FUN_004b8c40
// Address: 004b8c40
// Address Range: [[004b8c40, 004b8c63]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_staticInit_FUN_004b8c40(void)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_staticInit_FUN_004b8c40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHotDemonActorType_01cae210,"CHotDemon",
             core_hotdemon_cpp_factoryFunc_FUN_004b8c70,&INT_005ba994,1,&g_CEnemyActorType_01bcdebc)
  ;
  return;
}

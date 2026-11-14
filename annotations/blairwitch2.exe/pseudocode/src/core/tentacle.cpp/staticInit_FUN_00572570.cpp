// Name: core_tentacle.cpp_staticInit_FUN_00572570
// Address: 00572570
// Address Range: [[00572570, 00572593]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_staticInit_FUN_00572570(void)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_staticInit_FUN_00572570(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTentacleClassInfo,"?CTentacle" + 1,
             core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0,&g_CTentacleClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

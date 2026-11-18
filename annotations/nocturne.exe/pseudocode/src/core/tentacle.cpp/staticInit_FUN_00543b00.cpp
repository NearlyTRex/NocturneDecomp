// Name: core_tentacle.cpp_staticInit_FUN_00543b00
// Address: 00543b00
// Address Range: [[00543b00, 00543b23]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTentacleClassInfo,"CTentacle",
             core_tentacle_cpp_factoryFuncTentacle_FUN_00543b30,&g_CTentacleClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

// Name: core_tentacle.cpp_staticInit_FUN_00543b00
// Address: 00543b00
// Address Range: [[00543b00, 00543b23]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_staticInit_FUN_00543b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTentacleActorType_02dca1e0,"CTentacle",core_tentacle_cpp_FUN_00543b30,
             &INT_005c10b0,2,&g_CEnemyActorType_01bcdebc);
  return;
}

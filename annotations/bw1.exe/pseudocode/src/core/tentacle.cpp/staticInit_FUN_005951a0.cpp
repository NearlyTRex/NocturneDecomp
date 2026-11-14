// Name: core_tentacle.cpp_staticInit_FUN_005951a0
// Address: 005951a0
// Address Range: [[005951a0, 005951c3]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_staticInit_FUN_005951a0(void)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_staticInit_FUN_005951a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTentacleClassInfo,"?CTentacle" + 1,
             core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0,&g_CTentacleClassVersion,2,
             &g_CEnemyClassInfo);
  return;
}

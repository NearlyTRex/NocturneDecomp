// Name: core_tentacle.cpp_staticInit_FUN_005daef0
// Address: 005daef0
// Address Range: [[005daef0, 005daf13]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tentacle.cpp_staticInit_FUN_005daef0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_tentacle_cpp_staticInit_FUN_005daef0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTentacleClassInfo,"CTentacle",core_tentacle_cpp_FUN_005daf20,
                      &g_CTentacleClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}

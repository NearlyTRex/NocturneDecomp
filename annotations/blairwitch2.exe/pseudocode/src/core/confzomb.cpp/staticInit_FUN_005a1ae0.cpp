// Name: core_confzomb.cpp_staticInit_FUN_005a1ae0
// Address: 005a1ae0
// Address Range: [[005a1ae0, 005a1b03]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_staticInit_FUN_005a1ae0(void)

#include "nocturne.h"

void __cdecl core_confzomb_cpp_staticInit_FUN_005a1ae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CConfederateZombieClassInfo,"$@CConfederateZombie" + 2,
             core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10,
             &g_CConfederateZombieClassVersion,1,&g_CBasicEnemyClassInfo);
  return;
}

// Name: core_batman.cpp_staticInit_FUN_00412ac0
// Address: 00412ac0
// Address Range: [[00412ac0, 00412ae3]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_staticInit_FUN_00412ac0(void)

#include "nocturne.h"

void __cdecl core_batman_cpp_staticInit_FUN_00412ac0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBatmanClassInfo,"@CBatman" + 1,
             core_batman_cpp_factoryFuncBatman_FUN_00412af0,&g_CBatmanClassVersion,3,
             &g_CEnemyClassInfo);
  return;
}

// Name: core_succubus.cpp_staticInit_FUN_00540ae0
// Address: 00540ae0
// Address Range: [[00540ae0, 00540b03]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_staticInit_FUN_00540ae0(void)

#include "nocturne.h"

void __cdecl core_succubus_cpp_staticInit_FUN_00540ae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CSuccubusActorType_02dca01c,"CSuccubus",
             core_succubus_cpp_factoryFuncSuccubus_FUN_00540b10,&INT_005c1008,1,
             &g_CEnemyActorType_01bcdebc);
  return;
}

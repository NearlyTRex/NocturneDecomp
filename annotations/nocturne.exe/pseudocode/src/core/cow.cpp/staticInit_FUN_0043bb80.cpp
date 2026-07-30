// Name: core_cow.cpp_staticInit_FUN_0043bb80
// Address: 0043bb80
// Address Range: [[0043bb80, 0043bba3]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_staticInit_FUN_0043bb80(void)

#include "nocturne.h"

void __cdecl core_cow_cpp_staticInit_FUN_0043bb80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CZombieCowActorType_0077bd04,"CZombieCow",
             core_cow_cpp_factoryFunc_FUN_0043bbb0,&g_INT_005ad3ac,2,&g_CEnemyActorType_01bcdebc);
  return;
}

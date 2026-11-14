// Name: core_succubus.cpp_staticInit_FUN_0056f260
// Address: 0056f260
// Address Range: [[0056f260, 0056f283]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_staticInit_FUN_0056f260(void)

#include "nocturne.h"

void __cdecl core_succubus_cpp_staticInit_FUN_0056f260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CSuccubusClassInfo,"CSuccubus",
             core_succubus_cpp_factoryFuncSuccubus_FUN_0056f290,&g_CSuccubusClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}

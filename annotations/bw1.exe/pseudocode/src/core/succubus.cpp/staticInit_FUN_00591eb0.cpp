// Name: core_succubus.cpp_staticInit_FUN_00591eb0
// Address: 00591eb0
// Address Range: [[00591eb0, 00591ed3]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_staticInit_FUN_00591eb0(void)

#include "nocturne.h"

void __cdecl core_succubus_cpp_staticInit_FUN_00591eb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CSuccubusClassInfo,"CSuccubus",
             core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0,&g_CSuccubusClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}

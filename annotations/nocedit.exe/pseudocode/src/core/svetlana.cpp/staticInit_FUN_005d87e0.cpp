// Name: core_svetlana.cpp_staticInit_FUN_005d87e0
// Address: 005d87e0
// Address Range: [[005d87e0, 005d8803]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_staticInit_FUN_005d87e0(void)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_staticInit_FUN_005d87e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CSvetlanaClassInfo,"CSvetlana",
             core_svetlana_cpp_factoryFuncSvetlana_FUN_005d8810,&g_CSvetlanaClassVersion,1,
             &g_CHeroClassInfo);
  return;
}

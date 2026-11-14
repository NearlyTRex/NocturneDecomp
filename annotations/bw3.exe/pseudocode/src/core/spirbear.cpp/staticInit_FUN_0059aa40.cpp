// Name: core_spirbear.cpp_staticInit_FUN_0059aa40
// Address: 0059aa40
// Address Range: [[0059aa40, 0059aa63]]
// Convention: __cdecl
// Signature: void __cdecl core_spirbear_cpp_staticInit_FUN_0059aa40(void)

#include "nocturne.h"

void __cdecl core_spirbear_cpp_staticInit_FUN_0059aa40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpiritBearClassInfo,"CSpiritBear",
             core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70,&g_CSpiritBearClassVersion,1,
             &g_CNPCClassInfo);
  return;
}

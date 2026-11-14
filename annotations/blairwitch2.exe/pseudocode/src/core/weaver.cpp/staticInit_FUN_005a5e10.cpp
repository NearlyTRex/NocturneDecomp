// Name: core_weaver.cpp_staticInit_FUN_005a5e10
// Address: 005a5e10
// Address Range: [[005a5e10, 005a5e33]]
// Convention: __cdecl
// Signature: void __cdecl core_weaver_cpp_staticInit_FUN_005a5e10(void)

#include "nocturne.h"

void __cdecl core_weaver_cpp_staticInit_FUN_005a5e10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CRobinClassInfo,"CRobin",core_weaver_cpp_factoryFuncRobin_FUN_005a5e40,
             &g_CRobinClassVersion,1,&g_CBasicNPCClassInfo);
  return;
}

// Name: core_hostage.cpp_staticInit_FUN_004ed4a0
// Address: 004ed4a0
// Address Range: [[004ed4a0, 004ed4c3]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_staticInit_FUN_004ed4a0(void)

#include "nocturne.h"

void __cdecl core_hostage_cpp_staticInit_FUN_004ed4a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHostageClassInfo,"CHostage",
             core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0,&g_CHostageClassVersion,0xc,
             &g_CNPCClassInfo);
  return;
}

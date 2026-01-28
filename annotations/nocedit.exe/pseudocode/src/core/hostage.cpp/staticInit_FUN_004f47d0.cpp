// Name: core_hostage.cpp_staticInit_FUN_004f47d0
// Address: 004f47d0
// Address Range: [[004f47d0, 004f47f3]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void)

#include "nocturne.h"

void __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHostageClassInfo,"CHostage",core_hostage_cpp_factoryFunc_FUN_004f4800,
             &g_CHostageClassVersion,0xc,&g_CNPCClassInfo);
  return;
}

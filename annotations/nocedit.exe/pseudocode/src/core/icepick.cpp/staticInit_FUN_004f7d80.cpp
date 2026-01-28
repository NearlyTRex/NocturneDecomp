// Name: core_icepick.cpp_staticInit_FUN_004f7d80
// Address: 004f7d80
// Address Range: [[004f7d80, 004f7da3]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void)

#include "nocturne.h"

void __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CIcePickClassInfo,"CIcePick",core_icepick_cpp_factoryFunc_FUN_004f7db0,
             &g_CIcePickClassVersion,1,&g_CHeroClassInfo);
  return;
}

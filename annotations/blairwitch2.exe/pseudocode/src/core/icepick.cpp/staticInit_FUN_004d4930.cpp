// Name: core_icepick.cpp_staticInit_FUN_004d4930
// Address: 004d4930
// Address Range: [[004d4930, 004d4953]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_staticInit_FUN_004d4930(void)

#include "nocturne.h"

void __cdecl core_icepick_cpp_staticInit_FUN_004d4930(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CIcePickClassInfo,"CIcePick",
             core_icepick_cpp_factoryFuncIcePick_FUN_004d4960,&g_CIcePickClassVersion,1,
             &g_CHeroClassInfo);
  return;
}

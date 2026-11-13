// Name: core_icepick.cpp_staticInit_FUN_004f0b30
// Address: 004f0b30
// Address Range: [[004f0b30, 004f0b53]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_staticInit_FUN_004f0b30(void)

#include "nocturne.h"

void __cdecl core_icepick_cpp_staticInit_FUN_004f0b30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CIcePickClassInfo,"CIcePick",
             core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60,&g_CIcePickClassVersion,1,
             &g_CHeroClassInfo);
  return;
}

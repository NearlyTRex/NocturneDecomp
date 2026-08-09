// Name: core_icepick.cpp_staticInit_FUN_004b9cc0
// Address: 004b9cc0
// Address Range: [[004b9cc0, 004b9ce3]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_staticInit_FUN_004b9cc0(void)

#include "nocturne.h"

void __cdecl core_icepick_cpp_staticInit_FUN_004b9cc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CIcePickActorType_01cae2d0,"CIcePick",
             core_icepick_cpp_factoryFuncIcePick_FUN_004b9cf0,&g_INT_005ba9cc,1,
             &g_CHeroActorType_01cae0ec);
  return;
}

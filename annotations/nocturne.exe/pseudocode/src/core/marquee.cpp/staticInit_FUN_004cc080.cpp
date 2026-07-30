// Name: core_marquee.cpp_staticInit_FUN_004cc080
// Address: 004cc080
// Address Range: [[004cc080, 004cc0a3]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_staticInit_FUN_004cc080(void)

#include "nocturne.h"

void __cdecl core_marquee_cpp_staticInit_FUN_004cc080(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMarqueeActorType_01cc48d4,"CMarquee",
             core_marquee_cpp_factoryFunc_FUN_004cc0b0,&INT_005badb8,1,
             &g_CDemonActorActorType_00763e48);
  return;
}

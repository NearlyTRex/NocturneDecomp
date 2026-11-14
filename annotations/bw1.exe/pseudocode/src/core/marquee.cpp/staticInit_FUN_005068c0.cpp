// Name: core_marquee.cpp_staticInit_FUN_005068c0
// Address: 005068c0
// Address Range: [[005068c0, 005068e3]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_staticInit_FUN_005068c0(void)

#include "nocturne.h"

void __cdecl core_marquee_cpp_staticInit_FUN_005068c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CMarqueeClassInfo,"CMarquee",
             core_marquee_cpp_factoryFuncMarquee_FUN_005068f0,&g_CMarqueeClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

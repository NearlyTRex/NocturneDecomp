// Name: core_marquee.cpp_staticInit_FUN_004e7c20
// Address: 004e7c20
// Address Range: [[004e7c20, 004e7c43]]
// Convention: unknown
// Signature: void core_marquee_cpp_staticInit_FUN_004e7c20(void)

#include "nocturne.h"

void core_marquee_cpp_staticInit_FUN_004e7c20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CMarqueeClassInfo,"CMarquee",
             core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50,&g_CMarqueeClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}

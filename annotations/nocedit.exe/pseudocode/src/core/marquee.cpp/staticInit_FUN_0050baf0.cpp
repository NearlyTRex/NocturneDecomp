// Name: core_marquee.cpp_staticInit_FUN_0050baf0
// Address: 0050baf0
// Address Range: [[0050baf0, 0050bb13]]
// Convention: __cdecl
// Signature: void core_marquee.cpp_staticInit_FUN_0050baf0(void)

#include "nocturne.h"

void __cdecl core_marquee_cpp_staticInit_FUN_0050baf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMarqueeClassInfo,"CMarquee",core_marquee_cpp_factoryFunc_FUN_0050bb20,
             &g_CMarqueeClassVersion,1,&g_CDemonActorClassInfo);
  return;
}

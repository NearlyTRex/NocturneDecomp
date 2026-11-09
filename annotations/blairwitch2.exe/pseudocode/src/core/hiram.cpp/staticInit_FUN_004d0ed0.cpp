// Name: core_hiram.cpp_staticInit_FUN_004d0ed0
// Address: 004d0ed0
// Address Range: [[004d0ed0, 004d0ef3]]
// Convention: unknown
// Signature: void core_hiram_cpp_staticInit_FUN_004d0ed0(void)

#include "nocturne.h"

void core_hiram_cpp_staticInit_FUN_004d0ed0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHiramClassInfo,"CHiram",core_hiram_cpp_factoryFuncHiram_FUN_004d0f00,
             &g_CHiramClassVersion,1,&g_CNPCClassInfo);
  return;
}

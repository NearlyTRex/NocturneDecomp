// Name: core_hiram.cpp_staticInit_FUN_004ed130
// Address: 004ed130
// Address Range: [[004ed130, 004ed153]]
// Convention: unknown
// Signature: void core_hiram_cpp_staticInit_FUN_004ed130(void)

#include "nocturne.h"

void core_hiram_cpp_staticInit_FUN_004ed130(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHiramClassInfo,"CHiram",core_hiram_cpp_factoryFuncHiram_FUN_004ed160,
             &g_CHiramClassVersion,1,&g_CNPCClassInfo);
  return;
}

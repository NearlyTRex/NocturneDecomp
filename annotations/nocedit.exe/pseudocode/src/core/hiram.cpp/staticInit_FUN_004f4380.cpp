// Name: core_hiram.cpp_staticInit_FUN_004f4380
// Address: 004f4380
// Address Range: [[004f4380, 004f43a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hiram.cpp_staticInit_FUN_004f4380(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_hiram_cpp_staticInit_FUN_004f4380(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHiramClassInfo,"CHiram",core_hiram_cpp_FUN_004f43b0,
                      &g_CHiramClassVersion,1,&g_CNPCClassInfo);
  return pCVar1;
}

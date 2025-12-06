// Name: core_icepick.cpp_staticInit_FUN_004f7d80
// Address: 004f7d80
// Address Range: [[004f7d80, 004f7da3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_icepick.cpp_staticInit_FUN_004f7d80(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CIcePickClassInfo,"CIcePick",core_icepick_cpp_FUN_004f7db0,
                      &g_CIcePickClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}

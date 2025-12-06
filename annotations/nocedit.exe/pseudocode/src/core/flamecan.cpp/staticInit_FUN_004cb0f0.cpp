// Name: core_flamecan.cpp_staticInit_FUN_004cb0f0
// Address: 004cb0f0
// Address Range: [[004cb0f0, 004cb113]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flamecan.cpp_staticInit_FUN_004cb0f0(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_flamecan_cpp_staticInit_FUN_004cb0f0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlameCanClassInfo,"CFlameCan",core_flamecan_cpp_FUN_004cb120,
                      &g_CFlameCanClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}

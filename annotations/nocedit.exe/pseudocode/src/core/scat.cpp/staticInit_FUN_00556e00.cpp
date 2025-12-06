// Name: core_scat.cpp_staticInit_FUN_00556e00
// Address: 00556e00
// Address Range: [[00556e00, 00556e23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_scat.cpp_staticInit_FUN_00556e00(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_scat_cpp_staticInit_FUN_00556e00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CScatClassInfo,"CScat",core_scat_cpp_FUN_00556e90,
                      &g_CScatClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}

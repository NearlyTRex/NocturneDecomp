// Name: core_flashlit.cpp_staticInit_FUN_004cbb50
// Address: 004cbb50
// Address Range: [[004cbb50, 004cbb73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flashlit.cpp_staticInit_FUN_004cbb50(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlashlightClassInfo,"CFlashlight",core_flashlit_cpp_FUN_004cbb80,
                      &g_CFlashlightClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}

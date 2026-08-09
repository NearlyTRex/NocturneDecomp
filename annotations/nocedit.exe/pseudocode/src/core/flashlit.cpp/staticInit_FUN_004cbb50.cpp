// Name: core_flashlit.cpp_staticInit_FUN_004cbb50
// Address: 004cbb50
// Address Range: [[004cbb50, 004cbb73]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFlashlightClassInfo,"CFlashlight",
             core_flashlit_cpp_factoryFuncFlashlight_FUN_004cbb80,&g_CFlashlightClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

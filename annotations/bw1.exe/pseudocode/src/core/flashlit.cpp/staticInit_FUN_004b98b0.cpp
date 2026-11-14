// Name: core_flashlit.cpp_staticInit_FUN_004b98b0
// Address: 004b98b0
// Address Range: [[004b98b0, 004b98d3]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_staticInit_FUN_004b98b0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_staticInit_FUN_004b98b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFlashlightClassInfo,"CFlashlight",
             core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0,&g_CFlashlightClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

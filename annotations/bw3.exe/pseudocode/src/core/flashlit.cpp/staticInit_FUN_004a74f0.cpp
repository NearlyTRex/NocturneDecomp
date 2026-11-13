// Name: core_flashlit.cpp_staticInit_FUN_004a74f0
// Address: 004a74f0
// Address Range: [[004a74f0, 004a7513]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_staticInit_FUN_004a74f0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_staticInit_FUN_004a74f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFlashlightClassInfo,"CFlashlight",
             core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520,&g_CFlashlightClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

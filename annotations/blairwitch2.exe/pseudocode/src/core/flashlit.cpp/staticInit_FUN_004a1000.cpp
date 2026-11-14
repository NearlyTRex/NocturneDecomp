// Name: core_flashlit.cpp_staticInit_FUN_004a1000
// Address: 004a1000
// Address Range: [[004a1000, 004a1023]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_staticInit_FUN_004a1000(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_staticInit_FUN_004a1000(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFlashlightClassInfo,"CFlashlight",
             core_flashlit_cpp_factoryFuncFlashlight_FUN_004a1030,&g_CFlashlightClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}

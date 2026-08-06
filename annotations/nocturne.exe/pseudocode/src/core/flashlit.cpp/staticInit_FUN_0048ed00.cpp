// Name: core_flashlit.cpp_staticInit_FUN_0048ed00
// Address: 0048ed00
// Address Range: [[0048ed00, 0048ed23]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_staticInit_FUN_0048ed00(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_staticInit_FUN_0048ed00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFlashlightActorType_01c706cc,"CFlashlight",
             core_flashlit_cpp_factoryFunc_FUN_0048ed30,&g_INT_005b91f8,1,
             &g_CWeaponActorType_02ddf970);
  return;
}

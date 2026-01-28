// Name: core_fire.cpp_loadGunFlashAssets_FUN_004c1be0
// Address: 004c1be0
// Address Range: [[004c1be0, 004c1bff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_004c1be0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_004c1be0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&g_FireEffectGunFlashModel,"gunflash.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&g_FireEffectGunFlashModel);
  return;
}

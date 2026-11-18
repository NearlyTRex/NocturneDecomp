// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_004a24a0
// Address: 004a24a0
// Address Range: [[004a24a0, 004a255b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004a24a0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004a24a0(CFireEffect *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLTextureBasic_005fc97c);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_FireEffectBlueSparkTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLTextureBasic_005fc9ac);
  texture = g_FireEffectSmokeParticleTextures;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLTextureBasic_005fc9c4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    texture = texture + 1;
  } while (texture != g_FireEffectSmokeParticleTextures + sizeof(g_FireEffectSmokeParticleTextures) / sizeof(g_FireEffectSmokeParticleTextures[0]));
  core_fire_cpp_loadStakeAssets_FUN_00497a30();
  core_fire_cpp_loadFireBallAssets_FUN_004992f0();
  core_fire_cpp_loadRockAssets_FUN_0049a000();
  core_fire_cpp_loadLeafAssets_FUN_0049a170();
  core_fire_cpp_loadGunFlameAssets_FUN_0049e170();
  core_fire_cpp_loadGunFlashAssets_FUN_0049a630();
  core_fire_cpp_loadLightningBoltAssets_FUN_0049f380(1);
  core_fire_cpp_loadDebrisAssets_FUN_0049c680();
  return;
}

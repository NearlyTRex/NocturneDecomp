// Name: core_fire.cpp_FUN_004a24a0
// Address: 004a24a0
// Address Range: [[004a24a0, 004a255b]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a24a0(void)

#include "nocturne.h"

void core_fire_cpp_FUN_004a24a0(void)

{
  SMRGLTextureBasic *texture;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fc964);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fc97c);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fc994);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fc9ac);
  texture = (SMRGLTextureBasic *)&DAT_005fc5a4;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fc9c4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&DAT_005fc964);
  core_fire_cpp_loadStakeAssets_FUN_00497a30();
  core_fire_cpp_loadFireBallAssets_FUN_004992f0();
  core_fire_cpp_loadRockAssets_FUN_0049a000();
  core_fire_cpp_loadLeafAssets_FUN_0049a170();
  core_fire_cpp_loadLightningBoltAssets_FUN_0049e170();
  core_fire_cpp_loadGunFlashAssets_FUN_0049a630();
  core_fire_cpp_FUN_0049f380(1);
  core_fire_cpp_loadDebrisAssets_FUN_0049c680();
  return;
}

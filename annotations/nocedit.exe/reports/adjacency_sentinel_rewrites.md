# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `prompts/fix_compilation.md` §16.

## Summary

- Rewrites applied: **72**
- Functions touched: **26**
- Pools indexed: **494**
- Adjacency pairs in lookup: **494**

## Rewrites by function

### `core_dlight.cpp_captureLightTextures_FUN_00474a90`

- Pool `g_LightTextures` sentinel `g_LightTexturesEnd` (count 20)
  - Before: `while (texture != (SMRGLTextureBasic *)&g_LightTexturesEnd)`
  - After:  `while (texture != g_LightTextures + 20)`

### `core_dmodel.cpp_freeAllModels_FUN_00478cb0`

- Pool `g_CKeyFramedModelPool` sentinel `g_KeyFrameModelPoolEnd` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_KeyFrameModelPoolEnd)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + 256)`

### `core_fire.cpp_CFireEffect_init_FUN_004c6c80`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar17 != &g_CFlameClassInfo)`
  - After:  `while (pCVar17 != g_RainDropPool + 256)`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (pCVar15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (pCVar15 != g_PopcornPool + 256)`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (pCVar13 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (pCVar13 != g_ShellPool + 50)`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_06 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_06 != g_TrailPool + 100)`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_05 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_05 != g_LightningBoltPool + 10)`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_04 != g_GunFlamePool + 500)`
- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_03 != g_CraterPool + 20)`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_02 != g_TossPool + 20)`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_01 != g_ExplosionPool + 10)`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (pCVar11 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (pCVar11 != g_RockPool + 64)`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (pCVar9 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (pCVar9 != g_FireballPool + 64)`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (pCVar7 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (pCVar7 != g_BulletTrailPool + 10)`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (pCVar5 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (pCVar5 != g_GlassParticlePool + 256)`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (pCVar3 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (pCVar3 != g_MuzzleFlashPool + 20)`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (pCVar2 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (pCVar2 != g_SparkPool + 256)`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_00 != g_SmokeParticlePool + 2048)`

### `core_fire.cpp_CFireEffect_load_FUN_004c9300`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + 20)`

### `core_fire.cpp_CFireEffect_process_FUN_004c6ec0`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameClassInfo)`
  - After:  `while (this_ptr_16 != g_RainDropPool + 256)`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (this_ptr_15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (this_ptr_15 != g_PopcornPool + 256)`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (this_ptr_14 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (this_ptr_14 != g_ShellPool + 50)`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_13 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_13 != g_TrailPool + 100)`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_12 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_12 != g_LightningBoltPool + 10)`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_11 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_11 != g_GunFlamePool + 500)`
- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_10 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_10 != g_CraterPool + 20)`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_09 != g_TossPool + 20)`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_08 != g_ExplosionPool + 10)`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (this_ptr_07 != g_RockPool + 64)`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (this_ptr_06 != g_FireballPool + 64)`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (this_ptr_05 != g_BulletTrailPool + 10)`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (this_ptr_04 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (this_ptr_04 != g_GlassParticlePool + 256)`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (this_ptr_02 != g_MuzzleFlashPool + 20)`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (this_ptr_01 != g_SparkPool + 256)`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_00 != g_SmokeParticlePool + 2048)`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + 20)`

### `core_fire.cpp_CFireEffect_render_FUN_004c7180`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameClassInfo)`
  - After:  `while (this_ptr_14 != g_RainDropPool + 256)`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (this_ptr_13 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (this_ptr_13 != g_PopcornPool + 256)`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_12 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_12 != g_TrailPool + 100)`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_11 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_11 != g_LightningBoltPool + 10)`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_10 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_10 != g_GunFlamePool + 500)`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_09 != g_TossPool + 20)`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_08 != g_ExplosionPool + 10)`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (this_ptr_07 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (this_ptr_07 != g_BulletTrailPool + 10)`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (this_ptr_06 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (this_ptr_06 != g_GlassParticlePool + 256)`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (this_ptr_05 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (this_ptr_05 != g_SparkPool + 256)`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (this_ptr_04 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (this_ptr_04 != g_MuzzleFlashPool + 20)`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_03 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_03 != g_SmokeParticlePool + 2048)`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (this_ptr_02 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (this_ptr_02 != g_ShellPool + 50)`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (this_ptr_01 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (this_ptr_01 != g_FireballPool + 64)`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (this_ptr_00 != g_RockPool + 64)`

### `core_fire.cpp_CFireEffect_save_FUN_004c9380`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + 20)`

### `core_fire.cpp_loadLightningBoltAssets_FUN_004c5600`

- Pool `g_FireEffectLightningBoltTextures` sentinel `g_FireEffectPopcornTexture` (count 6)
  - Before: `while (texture != &g_FireEffectPopcornTexture)`
  - After:  `while (texture != g_FireEffectLightningBoltTextures + 6)`

### `core_gore.cpp_CGore_loadAssets_FUN_004ede60`

- Pool `g_BloodSplatTextures` sentinel `g_BloodSplatAnimTextures` (count 4)
  - Before: `while (pSVar1 != g_BloodSplatAnimTextures)`
  - After:  `while (pSVar1 != g_BloodSplatTextures + 4)`

### `core_gore.cpp_CGore_process_FUN_004ed9e0`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (this_ptr_00 != g_BloodParticles + 256)`

### `core_gore.cpp_CGore_renderParticles_FUN_004ed7b0`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (this_ptr_00 != g_BloodParticles + 256)`

### `core_gore.cpp_CGore_reset_FUN_004ed760`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (pCVar2 != g_BloodParticles + 256)`

### `core_moon.cpp_CMoon_free_FUN_00529ce0`

- Pool `g_MoonBatCourses` sentinel `g_MoonBats` (count 3)
  - Before: `while ((SBat *)this_ptr_00 != g_MoonBats)`
  - After:  `while (this_ptr_00 != g_MoonBatCourses + 3)`
- Pool `g_MoonAnimTextures` sentinel `g_MoonCloudScrollX` (count 30)
  - Before: `while (this_ptr_01 != (CAlphaBitmap *)&g_MoonCloudScrollX)`
  - After:  `while (this_ptr_01 != g_MoonAnimTextures + 30)`

### `core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0`

- Pool `g_BoundingBoxQuadTemplates` sentinel `g_BoundingBoxQuadTemplateEnd` (count 6)
  - Before: `while (pSVar5 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd)`
  - After:  `while (pSVar5 != g_BoundingBoxQuadTemplates + 6)`

### `core_skeleton.cpp_freeAllModels_FUN_005a1dc0`

- Pool `g_DeformableModelPool` sentinel `g_SkeletonPoolCount` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)&g_SkeletonPoolCount)`
  - After:  `while (this_ptr != g_DeformableModelPool + 64)`

### `core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0`

- Pool `g_SkeletonPool` sentinel `g_CSlewInstance` (count 40)
  - Before: `while (this_ptr != (CSkeleton *)&g_CSlewInstance)`
  - After:  `while (this_ptr != g_SkeletonPool + 40)`

### `core_water.cpp_CWater_captureTextures_FUN_005e9e40`

- Pool `g_WaterTextures` sentinel `g_WaterRenderQuad` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_WaterRenderQuad)`
  - After:  `while (texture != g_WaterTextures + 16)`

### `sound_sndmain.cpp_closeSoundDevice_FUN_005ab660`

- Pool `g_SfxSamples` sentinel `g_SfxSamplesEnd` (count 64)
  - Before: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - After:  `while (this_ptr != g_SfxSamples + 64)`

### `sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0`

- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar1 != g_SfxSlots + 64)`

### `sound_sndmain.cpp_freeAllSamples_FUN_005aa660`

- Pool `g_SfxSamples` sentinel `g_SfxSamplesEnd` (count 64)
  - Before: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - After:  `while (this_ptr != g_SfxSamples + 64)`

### `sound_sndmain.cpp_killAllSfx_FUN_005a9cc0`

- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (slot != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (slot != g_SfxSlots + 64)`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0`

- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar3 != g_SfxSlots + 64)`
- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar3 != g_SfxSlots + 64)`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0`

- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (this_ptr != g_SfxSlots + 64)`

### `sound_sndmain.cpp_pollAllStreams_FUN_005ace90`

- Pool `g_SfxSamples` sentinel `g_SfxSamplesEnd` (count 64)
  - Before: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - After:  `while (this_ptr != g_SfxSamples + 64)`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0`

- Pool `g_SfxSlots` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (slot != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (slot != g_SfxSlots + 64)`

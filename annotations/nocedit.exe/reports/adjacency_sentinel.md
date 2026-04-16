# Adjacency-Sentinel Loop Report

Loops in the decompiled pseudocode that exit when a pointer reaches the address of the *next named global* in the original binary. These rely on the original-binary memory layout; our linker places globals arbitrarily, so the sentinel never matches and the loop walks past the pool.

See `prompts/fix_compilation.md` §16 for the fix pattern.

## Summary

- **Confirmed**: 70 loops across 25 files — sentinel is exactly the next named global after the pool
- **Files with an existing `.keep.cpp`**: 6 files (22 loops) — verify each keep matches the proposed rewrite
- **Rejected** (candidate matched the text pattern but is not adjacency — leave alone): 0
- **Unknown** (could not resolve iterator origin or addresses): 0

Confirmed entries are safe to auto-rewrite. Rejected entries must not be rewritten. Unknown entries need manual review.

## Confirmed adjacency-sentinel loops

### `annotations/nocedit.exe/pseudocode/src/core/dlight.cpp/captureLightTextures_FUN_00474a90.cpp`

- **L20** — `texture` iterates `g_LightTextures[20]`, sentinel `g_LightTexturesEnd`
  - Current: `while (texture != (SMRGLTextureBasic *)&g_LightTexturesEnd)`
  - Rewrite: `while (texture != g_LightTextures + 20)`

### `annotations/nocedit.exe/pseudocode/src/core/dmodel.cpp/freeAllModels_FUN_00478cb0.cpp`

- **L18** — `this_ptr` iterates `g_CKeyFramedModelPool[256]`, sentinel `g_KeyFrameModelPoolEnd`
  - Current: `while (this_ptr != (CKeyFramedModel *)&g_KeyFrameModelPoolEnd)`
  - Rewrite: `while (this_ptr != g_CKeyFramedModelPool + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_init_FUN_004c6c80.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L42** — `this_ptr_00` iterates `g_SmokeParticlePool[2048]`, sentinel `g_BulletHoleActiveCount`
  - Current: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - Rewrite: `while (this_ptr_00 != g_SmokeParticlePool + 2048)`
- **L51** — `pCVar2` iterates `g_SparkPool[256]`, sentinel `g_MuzzleFlashAllocIndex`
  - Current: `while (pCVar2 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - Rewrite: `while (pCVar2 != g_SparkPool + 256)`
- **L56** — `pCVar3` iterates `g_MuzzleFlashPool[20]`, sentinel `g_GlassParticleAllocIndex`
  - Current: `while (pCVar3 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - Rewrite: `while (pCVar3 != g_MuzzleFlashPool + 20)`
- **L65** — `pCVar5` iterates `g_GlassParticlePool[256]`, sentinel `g_BulletTrailAllocIndex`
  - Current: `while (pCVar5 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - Rewrite: `while (pCVar5 != g_GlassParticlePool + 256)`
- **L71** — `pCVar7` iterates `g_BulletTrailPool[10]`, sentinel `g_FireballAllocIndex`
  - Current: `while (pCVar7 != (CBulletTrail *)&g_FireballAllocIndex)`
  - Rewrite: `while (pCVar7 != g_BulletTrailPool + 10)`
- **L78** — `pCVar9` iterates `g_FireballPool[64]`, sentinel `g_RockAllocIndex`
  - Current: `while (pCVar9 != (CFireball *)&g_RockAllocIndex)`
  - Rewrite: `while (pCVar9 != g_FireballPool + 64)`
- **L85** — `pCVar11` iterates `g_RockPool[64]`, sentinel `g_LaserBeamActiveCount`
  - Current: `while (pCVar11 != (CRock *)&g_LaserBeamActiveCount)`
  - Rewrite: `while (pCVar11 != g_RockPool + 64)`
- **L91** — `this_ptr_01` iterates `g_ExplosionPool[10]`, sentinel `g_TossAllocIndex`
  - Current: `while (this_ptr_01 != (CExplosion *)&g_TossAllocIndex)`
  - Rewrite: `while (this_ptr_01 != g_ExplosionPool + 10)`
- **L97** — `this_ptr_02` iterates `g_TossPool[20]`, sentinel `g_CraterAllocIndex`
  - Current: `while (this_ptr_02 != (CToss *)&g_CraterAllocIndex)`
  - Rewrite: `while (this_ptr_02 != g_TossPool + 20)`
- **L103** — `this_ptr_03` iterates `g_CraterPool[20]`, sentinel `g_GunFlameAllocIndex`
  - Current: `while (this_ptr_03 != (CCrater *)&g_GunFlameAllocIndex)`
  - Rewrite: `while (this_ptr_03 != g_CraterPool + 20)`
- **L109** — `this_ptr_04` iterates `g_GunFlamePool[500]`, sentinel `g_LightningBoltAllocIndex`
  - Current: `while (this_ptr_04 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - Rewrite: `while (this_ptr_04 != g_GunFlamePool + 500)`
- **L115** — `this_ptr_05` iterates `g_LightningBoltPool[10]`, sentinel `g_TrailAllocIndex`
  - Current: `while (this_ptr_05 != (CLightningBolt *)&g_TrailAllocIndex)`
  - Rewrite: `while (this_ptr_05 != g_LightningBoltPool + 10)`
- **L121** — `this_ptr_06` iterates `g_TrailPool[100]`, sentinel `g_ShellAllocIndex`
  - Current: `while (this_ptr_06 != (CTrail *)&g_ShellAllocIndex)`
  - Rewrite: `while (this_ptr_06 != g_TrailPool + 100)`
- **L128** — `pCVar13` iterates `g_ShellPool[50]`, sentinel `g_PopcornAllocIndex`
  - Current: `while (pCVar13 != (CShell *)&g_PopcornAllocIndex)`
  - Rewrite: `while (pCVar13 != g_ShellPool + 50)`
- **L135** — `pCVar15` iterates `g_PopcornPool[256]`, sentinel `g_RainDropAllocIndex`
  - Current: `while (pCVar15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - Rewrite: `while (pCVar15 != g_PopcornPool + 256)`
- **L142** — `pCVar17` iterates `g_RainDropPool[256]`, sentinel `g_CFlameClassInfo`
  - Current: `while ((CDemonActorType *)pCVar17 != &g_CFlameClassInfo)`
  - Rewrite: `while (pCVar17 != g_RainDropPool + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_load_FUN_004c9300.cpp`

- **L24** — `this_ptr_00` iterates `g_CraterPool[20]`, sentinel `g_GunFlameAllocIndex`
  - Current: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - Rewrite: `while (this_ptr_00 != g_CraterPool + 20)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_process_FUN_004c6ec0.cpp`

- **L41** — `this_ptr_00` iterates `g_SmokeParticlePool[2048]`, sentinel `g_BulletHoleActiveCount`
  - Current: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - Rewrite: `while (this_ptr_00 != g_SmokeParticlePool + 2048)`
- **L48** — `this_ptr_01` iterates `g_SparkPool[256]`, sentinel `g_MuzzleFlashAllocIndex`
  - Current: `while (this_ptr_01 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - Rewrite: `while (this_ptr_01 != g_SparkPool + 256)`
- **L55** — `this_ptr_02` iterates `g_MuzzleFlashPool[20]`, sentinel `g_GlassParticleAllocIndex`
  - Current: `while (this_ptr_02 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - Rewrite: `while (this_ptr_02 != g_MuzzleFlashPool + 20)`
- **L73** — `this_ptr_04` iterates `g_GlassParticlePool[256]`, sentinel `g_BulletTrailAllocIndex`
  - Current: `while (this_ptr_04 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - Rewrite: `while (this_ptr_04 != g_GlassParticlePool + 256)`
- **L80** — `this_ptr_05` iterates `g_BulletTrailPool[10]`, sentinel `g_FireballAllocIndex`
  - Current: `while (this_ptr_05 != (CBulletTrail *)&g_FireballAllocIndex)`
  - Rewrite: `while (this_ptr_05 != g_BulletTrailPool + 10)`
- **L87** — `this_ptr_06` iterates `g_FireballPool[64]`, sentinel `g_RockAllocIndex`
  - Current: `while (this_ptr_06 != (CFireball *)&g_RockAllocIndex)`
  - Rewrite: `while (this_ptr_06 != g_FireballPool + 64)`
- **L94** — `this_ptr_07` iterates `g_RockPool[64]`, sentinel `g_LaserBeamActiveCount`
  - Current: `while (this_ptr_07 != (CRock *)&g_LaserBeamActiveCount)`
  - Rewrite: `while (this_ptr_07 != g_RockPool + 64)`
- **L108** — `this_ptr_08` iterates `g_ExplosionPool[10]`, sentinel `g_TossAllocIndex`
  - Current: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - Rewrite: `while (this_ptr_08 != g_ExplosionPool + 10)`
- **L113** — `this_ptr_09` iterates `g_TossPool[20]`, sentinel `g_CraterAllocIndex`
  - Current: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - Rewrite: `while (this_ptr_09 != g_TossPool + 20)`
- **L118** — `this_ptr_10` iterates `g_CraterPool[20]`, sentinel `g_GunFlameAllocIndex`
  - Current: `while (this_ptr_10 != (CCrater *)&g_GunFlameAllocIndex)`
  - Rewrite: `while (this_ptr_10 != g_CraterPool + 20)`
- **L130** — `this_ptr_11` iterates `g_GunFlamePool[500]`, sentinel `g_LightningBoltAllocIndex`
  - Current: `while (this_ptr_11 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - Rewrite: `while (this_ptr_11 != g_GunFlamePool + 500)`
- **L135** — `this_ptr_12` iterates `g_LightningBoltPool[10]`, sentinel `g_TrailAllocIndex`
  - Current: `while (this_ptr_12 != (CLightningBolt *)&g_TrailAllocIndex)`
  - Rewrite: `while (this_ptr_12 != g_LightningBoltPool + 10)`
- **L140** — `this_ptr_13` iterates `g_TrailPool[100]`, sentinel `g_ShellAllocIndex`
  - Current: `while (this_ptr_13 != (CTrail *)&g_ShellAllocIndex)`
  - Rewrite: `while (this_ptr_13 != g_TrailPool + 100)`
- **L145** — `this_ptr_14` iterates `g_ShellPool[50]`, sentinel `g_PopcornAllocIndex`
  - Current: `while (this_ptr_14 != (CShell *)&g_PopcornAllocIndex)`
  - Rewrite: `while (this_ptr_14 != g_ShellPool + 50)`
- **L152** — `this_ptr_15` iterates `g_PopcornPool[256]`, sentinel `g_RainDropAllocIndex`
  - Current: `while (this_ptr_15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - Rewrite: `while (this_ptr_15 != g_PopcornPool + 256)`
- **L159** — `this_ptr_16` iterates `g_RainDropPool[256]`, sentinel `g_CFlameClassInfo`
  - Current: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameClassInfo)`
  - Rewrite: `while (this_ptr_16 != g_RainDropPool + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_renderDecals_FUN_004c74a0.cpp`

- **L83** — `this_ptr_00` iterates `g_CraterPool[20]`, sentinel `g_GunFlameAllocIndex`
  - Current: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - Rewrite: `while (this_ptr_00 != g_CraterPool + 20)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_render_FUN_004c7180.cpp`

- **L49** — `this_ptr_00` iterates `g_RockPool[64]`, sentinel `g_LaserBeamActiveCount`
  - Current: `while (this_ptr_00 != (CRock *)&g_LaserBeamActiveCount)`
  - Rewrite: `while (this_ptr_00 != g_RockPool + 64)`
- **L57** — `this_ptr_01` iterates `g_FireballPool[64]`, sentinel `g_RockAllocIndex`
  - Current: `while (this_ptr_01 != (CFireball *)&g_RockAllocIndex)`
  - Rewrite: `while (this_ptr_01 != g_FireballPool + 64)`
- **L62** — `this_ptr_02` iterates `g_ShellPool[50]`, sentinel `g_PopcornAllocIndex`
  - Current: `while (this_ptr_02 != (CShell *)&g_PopcornAllocIndex)`
  - Rewrite: `while (this_ptr_02 != g_ShellPool + 50)`
- **L88** — `this_ptr_03` iterates `g_SmokeParticlePool[2048]`, sentinel `g_BulletHoleActiveCount`
  - Current: `while (this_ptr_03 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - Rewrite: `while (this_ptr_03 != g_SmokeParticlePool + 2048)`
- **L95** — `this_ptr_04` iterates `g_MuzzleFlashPool[20]`, sentinel `g_GlassParticleAllocIndex`
  - Current: `while (this_ptr_04 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - Rewrite: `while (this_ptr_04 != g_MuzzleFlashPool + 20)`
- **L112** — `this_ptr_05` iterates `g_SparkPool[256]`, sentinel `g_MuzzleFlashAllocIndex`
  - Current: `while (this_ptr_05 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - Rewrite: `while (this_ptr_05 != g_SparkPool + 256)`
- **L119** — `this_ptr_06` iterates `g_GlassParticlePool[256]`, sentinel `g_BulletTrailAllocIndex`
  - Current: `while (this_ptr_06 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - Rewrite: `while (this_ptr_06 != g_GlassParticlePool + 256)`
- **L126** — `this_ptr_07` iterates `g_BulletTrailPool[10]`, sentinel `g_FireballAllocIndex`
  - Current: `while (this_ptr_07 != (CBulletTrail *)&g_FireballAllocIndex)`
  - Rewrite: `while (this_ptr_07 != g_BulletTrailPool + 10)`
- **L131** — `this_ptr_08` iterates `g_ExplosionPool[10]`, sentinel `g_TossAllocIndex`
  - Current: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - Rewrite: `while (this_ptr_08 != g_ExplosionPool + 10)`
- **L136** — `this_ptr_09` iterates `g_TossPool[20]`, sentinel `g_CraterAllocIndex`
  - Current: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - Rewrite: `while (this_ptr_09 != g_TossPool + 20)`
- **L141** — `this_ptr_10` iterates `g_GunFlamePool[500]`, sentinel `g_LightningBoltAllocIndex`
  - Current: `while (this_ptr_10 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - Rewrite: `while (this_ptr_10 != g_GunFlamePool + 500)`
- **L146** — `this_ptr_11` iterates `g_LightningBoltPool[10]`, sentinel `g_TrailAllocIndex`
  - Current: `while (this_ptr_11 != (CLightningBolt *)&g_TrailAllocIndex)`
  - Rewrite: `while (this_ptr_11 != g_LightningBoltPool + 10)`
- **L151** — `this_ptr_12` iterates `g_TrailPool[100]`, sentinel `g_ShellAllocIndex`
  - Current: `while (this_ptr_12 != (CTrail *)&g_ShellAllocIndex)`
  - Rewrite: `while (this_ptr_12 != g_TrailPool + 100)`
- **L158** — `this_ptr_13` iterates `g_PopcornPool[256]`, sentinel `g_RainDropAllocIndex`
  - Current: `while (this_ptr_13 != (CPopcorn *)&g_RainDropAllocIndex)`
  - Rewrite: `while (this_ptr_13 != g_PopcornPool + 256)`
- **L165** — `this_ptr_14` iterates `g_RainDropPool[256]`, sentinel `g_CFlameClassInfo`
  - Current: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameClassInfo)`
  - Rewrite: `while (this_ptr_14 != g_RainDropPool + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/CFireEffect_save_FUN_004c9380.cpp`

- **L20** — `this_ptr_00` iterates `g_CraterPool[20]`, sentinel `g_GunFlameAllocIndex`
  - Current: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - Rewrite: `while (this_ptr_00 != g_CraterPool + 20)`

### `annotations/nocedit.exe/pseudocode/src/core/fire.cpp/loadLightningBoltAssets_FUN_004c5600.cpp`

- **L18** — `texture` iterates `g_FireEffectLightningBoltTextures[6]`, sentinel `g_FireEffectPopcornTexture`
  - Current: `while (texture != &g_FireEffectPopcornTexture)`
  - Rewrite: `while (texture != g_FireEffectLightningBoltTextures + 6)`

### `annotations/nocedit.exe/pseudocode/src/core/gore.cpp/CGore_process_FUN_004ed9e0.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L23** — `this_ptr_00` iterates `g_BloodParticles[256]`, sentinel `g_BloodSplatIndex`
  - Current: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - Rewrite: `while (this_ptr_00 != g_BloodParticles + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/gore.cpp/CGore_renderParticles_FUN_004ed7b0.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L28** — `this_ptr_00` iterates `g_BloodParticles[256]`, sentinel `g_BloodSplatIndex`
  - Current: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - Rewrite: `while (this_ptr_00 != g_BloodParticles + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/gore.cpp/CGore_reset_FUN_004ed760.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L25** — `pCVar2` iterates `g_BloodParticles[256]`, sentinel `g_BloodSplatIndex`
  - Current: `while (pCVar2 != (CBloodParticle *)&g_BloodSplatIndex)`
  - Rewrite: `while (pCVar2 != g_BloodParticles + 256)`

### `annotations/nocedit.exe/pseudocode/src/core/moon.cpp/CMoon_free_FUN_00529ce0.cpp`

- **L21** — `this_ptr_01` iterates `g_MoonAnimTextures[30]`, sentinel `g_MoonCloudScrollX`
  - Current: `while (this_ptr_01 != (CAlphaBitmap *)&g_MoonCloudScrollX)`
  - Rewrite: `while (this_ptr_01 != g_MoonAnimTextures + 30)`

### `annotations/nocedit.exe/pseudocode/src/core/setdir.cpp/CDemonSet_evaluateVirtualDirector_FUN_005751d0.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L123** — `pSVar5` iterates `g_BoundingBoxQuadTemplates[6]`, sentinel `g_BoundingBoxQuadTemplateEnd`
  - Current: `while (pSVar5 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd)`
  - Rewrite: `while (pSVar5 != g_BoundingBoxQuadTemplates + 6)`

### `annotations/nocedit.exe/pseudocode/src/core/skeleton.cpp/freeAllModels_FUN_005a1dc0.cpp`

- **L18** — `this_ptr` iterates `g_DeformableModelPool[64]`, sentinel `g_SkeletonPoolCount`
  - Current: `while (this_ptr != (CDeformableModel *)&g_SkeletonPoolCount)`
  - Rewrite: `while (this_ptr != g_DeformableModelPool + 64)`

### `annotations/nocedit.exe/pseudocode/src/core/skeleton.cpp/freeAllSkeletons_FUN_005a1ea0.cpp`

- **L19** — `this_ptr` iterates `g_SkeletonPool[40]`, sentinel `g_CSlewInstance`
  - Current: `while (this_ptr != (CSkeleton *)&g_CSlewInstance)`
  - Rewrite: `while (this_ptr != g_SkeletonPool + 40)`

### `annotations/nocedit.exe/pseudocode/src/core/water.cpp/CWater_captureTextures_FUN_005e9e40.cpp`

- **L18** — `texture` iterates `g_WaterTextures[16]`, sentinel `g_WaterTexturesEnd`
  - Current: `while (texture != (SMRGLTextureBasic *)&g_WaterTexturesEnd)`
  - Rewrite: `while (texture != g_WaterTextures + 16)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/closeSoundDevice_FUN_005ab660.cpp`

- **L23** — `this_ptr` iterates `g_SfxSamples[64]`, sentinel `g_SfxSamplesEnd`
  - Current: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - Rewrite: `while (this_ptr != g_SfxSamples + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/countActiveSfx_FUN_005a9ff0.cpp`

- **L22** — `pCVar1` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (pCVar1 != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (pCVar1 != g_SfxSlots + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/freeAllSamples_FUN_005aa660.cpp`

- **L20** — `this_ptr` iterates `g_SfxSamples[64]`, sentinel `g_SfxSamplesEnd`
  - Current: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - Rewrite: `while (this_ptr != g_SfxSamples + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/killAllSfx_FUN_005a9cc0.cpp`

- **L19** — `slot` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (slot != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (slot != g_SfxSlots + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/nextMixingBuffer_FUN_005a59c0.cpp` *(has `.keep.cpp` — verify it matches the proposed rewrite)*

- **L81** — `pCVar3` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (pCVar3 != g_SfxSlots + 64)`
- **L104** — `pCVar3` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (pCVar3 != g_SfxSlots + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/pollAllSfxSlots_FUN_005acdb0.cpp`

- **L44** — `this_ptr` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (this_ptr != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (this_ptr != g_SfxSlots + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/pollAllStreams_FUN_005ace90.cpp`

- **L29** — `this_ptr` iterates `g_SfxSamples[64]`, sentinel `g_SfxSamplesEnd`
  - Current: `while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd)`
  - Rewrite: `while (this_ptr != g_SfxSamples + 64)`

### `annotations/nocedit.exe/pseudocode/src/sound/sndmain.cpp/setSfxChannelVol_FUN_005a9cf0.cpp`

- **L34** — `slot` iterates `g_SfxSlots[64]`, sentinel `g_SfxLastSlot`
  - Current: `while (slot != (CSfxSlot *)&g_SfxLastSlot)`
  - Rewrite: `while (slot != g_SfxSlots + 64)`

## Rejected candidates (not adjacency — do not rewrite)

*(none)*

## Unknown (manual review needed)

*(none)*

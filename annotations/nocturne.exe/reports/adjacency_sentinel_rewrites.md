# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **67**
- Functions touched: **21**
- Pools indexed: **418**
- Adjacency pairs in lookup: **418**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_00454460`

- Pool `g_CKeyFramedModelPool` sentinel `g_CZombieDogClassInfo` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CZombieDogClassInfo)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_0048a150`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar17 != &g_CFlameClassInfo)`
  - After:  `while (pCVar17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (pCVar15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (pCVar15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (pCVar13 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (pCVar13 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_06 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_06 != g_TrailPool + sizeof(g_TrailPool) / sizeof(g_TrailPool[0]))`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_05 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_05 != g_LightningBoltPool + sizeof(g_LightningBoltPool) / sizeof(g_LightningBoltPool[0]))`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_04 != g_GunFlamePool + sizeof(g_GunFlamePool) / sizeof(g_GunFlamePool[0]))`
- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_03 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_01 != g_ExplosionPool + sizeof(g_ExplosionPool) / sizeof(g_ExplosionPool[0]))`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (pCVar11 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (pCVar11 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (pCVar9 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (pCVar9 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (pCVar7 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (pCVar7 != g_BulletTrailPool + sizeof(g_BulletTrailPool) / sizeof(g_BulletTrailPool[0]))`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (pCVar5 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (pCVar5 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (pCVar3 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (pCVar3 != g_MuzzleFlashPool + sizeof(g_MuzzleFlashPool) / sizeof(g_MuzzleFlashPool[0]))`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (pCVar2 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (pCVar2 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_00 != g_SmokeParticlePool + sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0]))`

### `core_fire.cpp_CFireEffect_load_FUN_0048c7d0`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0048a390`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameClassInfo)`
  - After:  `while (this_ptr_16 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (this_ptr_15 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (this_ptr_15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (this_ptr_14 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (this_ptr_14 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_13 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_13 != g_TrailPool + sizeof(g_TrailPool) / sizeof(g_TrailPool[0]))`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_12 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_12 != g_LightningBoltPool + sizeof(g_LightningBoltPool) / sizeof(g_LightningBoltPool[0]))`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_11 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_11 != g_GunFlamePool + sizeof(g_GunFlamePool) / sizeof(g_GunFlamePool[0]))`
- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_10 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_10 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_09 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_08 != g_ExplosionPool + sizeof(g_ExplosionPool) / sizeof(g_ExplosionPool[0]))`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (this_ptr_05 != g_BulletTrailPool + sizeof(g_BulletTrailPool) / sizeof(g_BulletTrailPool[0]))`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (this_ptr_04 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (this_ptr_04 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (this_ptr_02 != g_MuzzleFlashPool + sizeof(g_MuzzleFlashPool) / sizeof(g_MuzzleFlashPool[0]))`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_00 != g_SmokeParticlePool + sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0]))`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0048a650`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameClassInfo)`
  - After:  `while (this_ptr_14 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_RainDropAllocIndex` (count 256)
  - Before: `while (this_ptr_13 != (CPopcorn *)&g_RainDropAllocIndex)`
  - After:  `while (this_ptr_13 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_TrailPool` sentinel `g_ShellAllocIndex` (count 100)
  - Before: `while (this_ptr_12 != (CTrail *)&g_ShellAllocIndex)`
  - After:  `while (this_ptr_12 != g_TrailPool + sizeof(g_TrailPool) / sizeof(g_TrailPool[0]))`
- Pool `g_LightningBoltPool` sentinel `g_TrailAllocIndex` (count 10)
  - Before: `while (this_ptr_11 != (CLightningBolt *)&g_TrailAllocIndex)`
  - After:  `while (this_ptr_11 != g_LightningBoltPool + sizeof(g_LightningBoltPool) / sizeof(g_LightningBoltPool[0]))`
- Pool `g_GunFlamePool` sentinel `g_LightningBoltAllocIndex` (count 500)
  - Before: `while (this_ptr_10 != (CGunFlame *)&g_LightningBoltAllocIndex)`
  - After:  `while (this_ptr_10 != g_GunFlamePool + sizeof(g_GunFlamePool) / sizeof(g_GunFlamePool[0]))`
- Pool `g_TossPool` sentinel `g_CraterAllocIndex` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_CraterAllocIndex)`
  - After:  `while (this_ptr_09 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_ExplosionPool` sentinel `g_TossAllocIndex` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_TossAllocIndex)`
  - After:  `while (this_ptr_08 != g_ExplosionPool + sizeof(g_ExplosionPool) / sizeof(g_ExplosionPool[0]))`
- Pool `g_BulletTrailPool` sentinel `g_FireballAllocIndex` (count 10)
  - Before: `while (this_ptr_07 != (CBulletTrail *)&g_FireballAllocIndex)`
  - After:  `while (this_ptr_07 != g_BulletTrailPool + sizeof(g_BulletTrailPool) / sizeof(g_BulletTrailPool[0]))`
- Pool `g_GlassParticlePool` sentinel `g_BulletTrailAllocIndex` (count 256)
  - Before: `while (this_ptr_06 != (CGlassParticle *)&g_BulletTrailAllocIndex)`
  - After:  `while (this_ptr_06 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_SparkPool` sentinel `g_MuzzleFlashAllocIndex` (count 256)
  - Before: `while (this_ptr_05 != (CSpark *)&g_MuzzleFlashAllocIndex)`
  - After:  `while (this_ptr_05 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_MuzzleFlashPool` sentinel `g_GlassParticleAllocIndex` (count 20)
  - Before: `while (this_ptr_04 != (CMuzzleFlash *)&g_GlassParticleAllocIndex)`
  - After:  `while (this_ptr_04 != g_MuzzleFlashPool + sizeof(g_MuzzleFlashPool) / sizeof(g_MuzzleFlashPool[0]))`
- Pool `g_SmokeParticlePool` sentinel `g_BulletHoleActiveCount` (count 2048)
  - Before: `while (this_ptr_03 != (CSmokeParticle *)&g_BulletHoleActiveCount)`
  - After:  `while (this_ptr_03 != g_SmokeParticlePool + sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0]))`
- Pool `g_ShellPool` sentinel `g_PopcornAllocIndex` (count 50)
  - Before: `while (this_ptr_02 != (CShell *)&g_PopcornAllocIndex)`
  - After:  `while (this_ptr_02 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_FireballPool` sentinel `g_RockAllocIndex` (count 64)
  - Before: `while (this_ptr_01 != (CFireball *)&g_RockAllocIndex)`
  - After:  `while (this_ptr_01 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_RockPool` sentinel `g_LaserBeamActiveCount` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_LaserBeamActiveCount)`
  - After:  `while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`

### `core_fire.cpp_CFireEffect_save_FUN_0048c850`

- Pool `g_CraterPool` sentinel `g_GunFlameAllocIndex` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_GunFlameAllocIndex)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0`

- Pool `g_FireEffectLightningBoltTextures` sentinel `g_FireEffectPopcornTexture` (count 6)
  - Before: `while (texture != &g_FireEffectPopcornTexture)`
  - After:  `while (texture != g_FireEffectLightningBoltTextures + sizeof(g_FireEffectLightningBoltTextures) / sizeof(g_FireEffectLightningBoltTextures[0]))`

### `core_gore.cpp_CGore_loadAssets_FUN_004b04b0`

- Pool `g_BloodSplatTextures` sentinel `g_BloodSplatAnimTextures` (count 4)
  - Before: `while (pSVar1 != g_BloodSplatAnimTextures)`
  - After:  `while (pSVar1 != g_BloodSplatTextures + sizeof(g_BloodSplatTextures) / sizeof(g_BloodSplatTextures[0]))`

### `core_gore.cpp_CGore_process_FUN_004b0030`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_renderParticles_FUN_004afe00`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_reset_FUN_004afdb0`

- Pool `g_BloodParticles` sentinel `g_BloodSplatIndex` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_BloodSplatIndex)`
  - After:  `while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_moon.cpp_CMoon_free_FUN_004dea60`

- Pool `g_MoonBatCourses` sentinel `g_MoonBats` (count 3)
  - Before: `while ((SBat *)this_ptr_00 != g_MoonBats)`
  - After:  `while (this_ptr_00 != g_MoonBatCourses + sizeof(g_MoonBatCourses) / sizeof(g_MoonBatCourses[0]))`
- Pool `g_MoonAnimTextures` sentinel `g_MoonCloudScrollX` (count 30)
  - Before: `while (this_ptr_01 != (CAlphaBitmap *)&g_MoonCloudScrollX)`
  - After:  `while (this_ptr_01 != g_MoonAnimTextures + sizeof(g_MoonAnimTextures) / sizeof(g_MoonAnimTextures[0]))`

### `core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005125a0`

- Pool `g_BoundingBoxQuadTemplates` sentinel `g_VolumetricSphereTexture` (count 6)
  - Before: `while (pSVar6 != (SMRGLPrimitiveQuad *)&g_VolumetricSphereTexture)`
  - After:  `while (pSVar6 != g_BoundingBoxQuadTemplates + sizeof(g_BoundingBoxQuadTemplates) / sizeof(g_BoundingBoxQuadTemplates[0]))`

### `core_skeleton.cpp_freeAllModels_FUN_0051f650`

- Pool `g_DeformableModelPool` sentinel `g_INT_02737ef4` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)&g_INT_02737ef4)`
  - After:  `while (this_ptr != g_DeformableModelPool + sizeof(g_DeformableModelPool) / sizeof(g_DeformableModelPool[0]))`

### `core_water.cpp_CWater_captureTextures_FUN_005507d0`

- Pool `g_WaterTextures` sentinel `g_WaterRenderQuad` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_WaterRenderQuad)`
  - After:  `while (texture != g_WaterTextures + sizeof(g_WaterTextures) / sizeof(g_WaterTextures[0]))`

### `sound_sndmain.cpp_countActiveSfx_FUN_005275e0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar1 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_killAllSfx_FUN_005272b0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_00523170`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`
- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_SfxLastSlot` (count 64)
  - Before: `while (slot != (CSfxSlot *)&g_SfxLastSlot)`
  - After:  `while (slot != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

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

- Pool `g_CKeyFramedModelPool` sentinel `g_CZombieDogActorType_01af4e5c` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CZombieDogActorType_01af4e5c)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_0048a150`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)pCVar17 != &g_CFlameActorType_01c70618)`
  - After:  `while (pCVar17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01c6ce14` (count 256)
  - Before: `while (pCVar15 != (CPopcorn *)&g_INT_01c6ce14)`
  - After:  `while (pCVar15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01c69610` (count 50)
  - Before: `while (pCVar13 != (CShell *)&g_INT_01c69610)`
  - After:  `while (pCVar13 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01c676cc` sentinel `g_INT_01c684dc` (count 100)
  - Before: `while (this_ptr_06 != (CTrail *)&g_INT_01c684dc)`
  - After:  `while (this_ptr_06 != g_CTrail_ARRAY_01c676cc + sizeof(g_CTrail_ARRAY_01c676cc) / sizeof(g_CTrail_ARRAY_01c676cc[0]))`
- Pool `g_CLightningBolt_ARRAY_01c67510` sentinel `g_INT_01c676c8` (count 10)
  - Before: `while (this_ptr_05 != (CLightningBolt *)&g_INT_01c676c8)`
  - After:  `while (this_ptr_05 != g_CLightningBolt_ARRAY_01c67510 + sizeof(g_CLightningBolt_ARRAY_01c67510) / sizeof(g_CLightningBolt_ARRAY_01c67510[0]))`
- Pool `g_CGunFlame_ARRAY_01c62ebc` sentinel `g_INT_01c6750c` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_INT_01c6750c)`
  - After:  `while (this_ptr_04 != g_CGunFlame_ARRAY_01c62ebc + sizeof(g_CGunFlame_ARRAY_01c62ebc) / sizeof(g_CGunFlame_ARRAY_01c62ebc[0]))`
- Pool `g_CraterPool` sentinel `g_INT_01c62eb8` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_INT_01c62eb8)`
  - After:  `while (this_ptr_03 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c625f4` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_INT_01c625f4)`
  - After:  `while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c5d708` sentinel `g_INT_01c5d820` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_INT_01c5d820)`
  - After:  `while (this_ptr_01 != g_CExplosion_ARRAY_01c5d708 + sizeof(g_CExplosion_ARRAY_01c5d708) / sizeof(g_CExplosion_ARRAY_01c5d708[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c5c700` (count 64)
  - Before: `while (pCVar11 != (CRock *)&g_INT_01c5c700)`
  - After:  `while (pCVar11 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c5b4fc` (count 64)
  - Before: `while (pCVar9 != (CFireball *)&g_INT_01c5b4fc)`
  - After:  `while (pCVar9 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01c58c90` sentinel `g_INT_01c58df8` (count 10)
  - Before: `while (pCVar7 != (CBulletTrail *)&g_INT_01c58df8)`
  - After:  `while (pCVar7 != g_CBulletTrail_ARRAY_01c58c90 + sizeof(g_CBulletTrail_ARRAY_01c58c90) / sizeof(g_CBulletTrail_ARRAY_01c58c90[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c58c8c` (count 256)
  - Before: `while (pCVar5 != (CGlassParticle *)&g_INT_01c58c8c)`
  - After:  `while (pCVar5 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c4e958` sentinel `g_INT_01c4f088` (count 20)
  - Before: `while (pCVar3 != (CMuzzleFlash *)&g_INT_01c4f088)`
  - After:  `while (pCVar3 != g_CMuzzleFlash_ARRAY_01c4e958 + sizeof(g_CMuzzleFlash_ARRAY_01c4e958) / sizeof(g_CMuzzleFlash_ARRAY_01c4e958[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c4e954` (count 256)
  - Before: `while (pCVar2 != (CSpark *)&g_INT_01c4e954)`
  - After:  `while (pCVar2 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c0a140` sentinel `g_INT_01c20140` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c20140)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c0a140 + sizeof(g_CSmokeParticle_ARRAY_01c0a140) / sizeof(g_CSmokeParticle_ARRAY_01c0a140[0]))`

### `core_fire.cpp_CFireEffect_load_FUN_0048c7d0`

- Pool `g_CraterPool` sentinel `g_INT_01c62eb8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c62eb8)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0048a390`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_16 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_16 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01c6ce14` (count 256)
  - Before: `while (this_ptr_15 != (CPopcorn *)&g_INT_01c6ce14)`
  - After:  `while (this_ptr_15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01c69610` (count 50)
  - Before: `while (this_ptr_14 != (CShell *)&g_INT_01c69610)`
  - After:  `while (this_ptr_14 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01c676cc` sentinel `g_INT_01c684dc` (count 100)
  - Before: `while (this_ptr_13 != (CTrail *)&g_INT_01c684dc)`
  - After:  `while (this_ptr_13 != g_CTrail_ARRAY_01c676cc + sizeof(g_CTrail_ARRAY_01c676cc) / sizeof(g_CTrail_ARRAY_01c676cc[0]))`
- Pool `g_CLightningBolt_ARRAY_01c67510` sentinel `g_INT_01c676c8` (count 10)
  - Before: `while (this_ptr_12 != (CLightningBolt *)&g_INT_01c676c8)`
  - After:  `while (this_ptr_12 != g_CLightningBolt_ARRAY_01c67510 + sizeof(g_CLightningBolt_ARRAY_01c67510) / sizeof(g_CLightningBolt_ARRAY_01c67510[0]))`
- Pool `g_CGunFlame_ARRAY_01c62ebc` sentinel `g_INT_01c6750c` (count 500)
  - Before: `while (this_ptr_11 != (CGunFlame *)&g_INT_01c6750c)`
  - After:  `while (this_ptr_11 != g_CGunFlame_ARRAY_01c62ebc + sizeof(g_CGunFlame_ARRAY_01c62ebc) / sizeof(g_CGunFlame_ARRAY_01c62ebc[0]))`
- Pool `g_CraterPool` sentinel `g_INT_01c62eb8` (count 20)
  - Before: `while (this_ptr_10 != (CCrater *)&g_INT_01c62eb8)`
  - After:  `while (this_ptr_10 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c625f4` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_INT_01c625f4)`
  - After:  `while (this_ptr_09 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c5d708` sentinel `g_INT_01c5d820` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_INT_01c5d820)`
  - After:  `while (this_ptr_08 != g_CExplosion_ARRAY_01c5d708 + sizeof(g_CExplosion_ARRAY_01c5d708) / sizeof(g_CExplosion_ARRAY_01c5d708[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c5c700` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_INT_01c5c700)`
  - After:  `while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c5b4fc` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_INT_01c5b4fc)`
  - After:  `while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01c58c90` sentinel `g_INT_01c58df8` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_INT_01c58df8)`
  - After:  `while (this_ptr_05 != g_CBulletTrail_ARRAY_01c58c90 + sizeof(g_CBulletTrail_ARRAY_01c58c90) / sizeof(g_CBulletTrail_ARRAY_01c58c90[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c58c8c` (count 256)
  - Before: `while (this_ptr_04 != (CGlassParticle *)&g_INT_01c58c8c)`
  - After:  `while (this_ptr_04 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c4e958` sentinel `g_INT_01c4f088` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_INT_01c4f088)`
  - After:  `while (this_ptr_02 != g_CMuzzleFlash_ARRAY_01c4e958 + sizeof(g_CMuzzleFlash_ARRAY_01c4e958) / sizeof(g_CMuzzleFlash_ARRAY_01c4e958[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c4e954` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_INT_01c4e954)`
  - After:  `while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c0a140` sentinel `g_INT_01c20140` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c20140)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c0a140 + sizeof(g_CSmokeParticle_ARRAY_01c0a140) / sizeof(g_CSmokeParticle_ARRAY_01c0a140[0]))`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970`

- Pool `g_CraterPool` sentinel `g_INT_01c62eb8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c62eb8)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0048a650`

- Pool `g_RainDropPool` sentinel `g_CFlameActorType_01c70618` (count 256)
  - Before: `while ((CDemonActorType *)this_ptr_14 != &g_CFlameActorType_01c70618)`
  - After:  `while (this_ptr_14 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01c6ce14` (count 256)
  - Before: `while (this_ptr_13 != (CPopcorn *)&g_INT_01c6ce14)`
  - After:  `while (this_ptr_13 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_CTrail_ARRAY_01c676cc` sentinel `g_INT_01c684dc` (count 100)
  - Before: `while (this_ptr_12 != (CTrail *)&g_INT_01c684dc)`
  - After:  `while (this_ptr_12 != g_CTrail_ARRAY_01c676cc + sizeof(g_CTrail_ARRAY_01c676cc) / sizeof(g_CTrail_ARRAY_01c676cc[0]))`
- Pool `g_CLightningBolt_ARRAY_01c67510` sentinel `g_INT_01c676c8` (count 10)
  - Before: `while (this_ptr_11 != (CLightningBolt *)&g_INT_01c676c8)`
  - After:  `while (this_ptr_11 != g_CLightningBolt_ARRAY_01c67510 + sizeof(g_CLightningBolt_ARRAY_01c67510) / sizeof(g_CLightningBolt_ARRAY_01c67510[0]))`
- Pool `g_CGunFlame_ARRAY_01c62ebc` sentinel `g_INT_01c6750c` (count 500)
  - Before: `while (this_ptr_10 != (CGunFlame *)&g_INT_01c6750c)`
  - After:  `while (this_ptr_10 != g_CGunFlame_ARRAY_01c62ebc + sizeof(g_CGunFlame_ARRAY_01c62ebc) / sizeof(g_CGunFlame_ARRAY_01c62ebc[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c625f4` (count 20)
  - Before: `while (this_ptr_09 != (CToss *)&g_INT_01c625f4)`
  - After:  `while (this_ptr_09 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c5d708` sentinel `g_INT_01c5d820` (count 10)
  - Before: `while (this_ptr_08 != (CExplosion *)&g_INT_01c5d820)`
  - After:  `while (this_ptr_08 != g_CExplosion_ARRAY_01c5d708 + sizeof(g_CExplosion_ARRAY_01c5d708) / sizeof(g_CExplosion_ARRAY_01c5d708[0]))`
- Pool `g_CBulletTrail_ARRAY_01c58c90` sentinel `g_INT_01c58df8` (count 10)
  - Before: `while (this_ptr_07 != (CBulletTrail *)&g_INT_01c58df8)`
  - After:  `while (this_ptr_07 != g_CBulletTrail_ARRAY_01c58c90 + sizeof(g_CBulletTrail_ARRAY_01c58c90) / sizeof(g_CBulletTrail_ARRAY_01c58c90[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c58c8c` (count 256)
  - Before: `while (this_ptr_06 != (CGlassParticle *)&g_INT_01c58c8c)`
  - After:  `while (this_ptr_06 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c4e954` (count 256)
  - Before: `while (this_ptr_05 != (CSpark *)&g_INT_01c4e954)`
  - After:  `while (this_ptr_05 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c4e958` sentinel `g_INT_01c4f088` (count 20)
  - Before: `while (this_ptr_04 != (CMuzzleFlash *)&g_INT_01c4f088)`
  - After:  `while (this_ptr_04 != g_CMuzzleFlash_ARRAY_01c4e958 + sizeof(g_CMuzzleFlash_ARRAY_01c4e958) / sizeof(g_CMuzzleFlash_ARRAY_01c4e958[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c0a140` sentinel `g_INT_01c20140` (count 2048)
  - Before: `while (this_ptr_03 != (CSmokeParticle *)&g_INT_01c20140)`
  - After:  `while (this_ptr_03 != g_CSmokeParticle_ARRAY_01c0a140 + sizeof(g_CSmokeParticle_ARRAY_01c0a140) / sizeof(g_CSmokeParticle_ARRAY_01c0a140[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01c69610` (count 50)
  - Before: `while (this_ptr_02 != (CShell *)&g_INT_01c69610)`
  - After:  `while (this_ptr_02 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c5b4fc` (count 64)
  - Before: `while (this_ptr_01 != (CFireball *)&g_INT_01c5b4fc)`
  - After:  `while (this_ptr_01 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c5c700` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_INT_01c5c700)`
  - After:  `while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`

### `core_fire.cpp_CFireEffect_save_FUN_0048c850`

- Pool `g_CraterPool` sentinel `g_INT_01c62eb8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c62eb8)`
  - After:  `while (this_ptr_00 != g_CraterPool + sizeof(g_CraterPool) / sizeof(g_CraterPool[0]))`

### `core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0`

- Pool `g_SMRGLTextureBasic_ARRAY_005b8b14` sentinel `g_SMRGLTextureBasic_005b8ba4` (count 6)
  - Before: `while (texture != &g_SMRGLTextureBasic_005b8ba4)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_005b8b14 + sizeof(g_SMRGLTextureBasic_ARRAY_005b8b14) / sizeof(g_SMRGLTextureBasic_ARRAY_005b8b14[0]))`

### `core_gore.cpp_CGore_loadAssets_FUN_004b04b0`

- Pool `g_SMRGLTextureBasic_ARRAY_005b96ec` sentinel `g_SMRGLTextureBasic_ARRAY_005b974c` (count 4)
  - Before: `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_005b974c)`
  - After:  `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_005b96ec + sizeof(g_SMRGLTextureBasic_ARRAY_005b96ec) / sizeof(g_SMRGLTextureBasic_ARRAY_005b96ec[0]))`

### `core_gore.cpp_CGore_process_FUN_004b0030`

- Pool `g_BloodParticles` sentinel `g_INT_01c7ccec` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01c7ccec)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_renderParticles_FUN_004afe00`

- Pool `g_BloodParticles` sentinel `g_INT_01c7ccec` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01c7ccec)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_reset_FUN_004afdb0`

- Pool `g_BloodParticles` sentinel `g_INT_01c7ccec` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_INT_01c7ccec)`
  - After:  `while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_moon.cpp_CMoon_free_FUN_004dea60`

- Pool `g_MoonBatCourses` sentinel `g_SBat_ARRAY_01ccdeec` (count 3)
  - Before: `while ((SBat *)this_ptr_00 != g_SBat_ARRAY_01ccdeec)`
  - After:  `while (this_ptr_00 != g_MoonBatCourses + sizeof(g_MoonBatCourses) / sizeof(g_MoonBatCourses[0]))`
- Pool `g_MoonAnimTextures` sentinel `g_INT_01ccdebc` (count 30)
  - Before: `while (this_ptr_01 != (CAlphaBitmap *)&g_INT_01ccdebc)`
  - After:  `while (this_ptr_01 != g_MoonAnimTextures + sizeof(g_MoonAnimTextures) / sizeof(g_MoonAnimTextures[0]))`

### `core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005125a0`

- Pool `g_SMRGLPrimitiveQuad_ARRAY_005be774` sentinel `g_SMRGLTextureBasic_005be924` (count 6)
  - Before: `while (pSVar6 != (SMRGLPrimitiveQuad *)&g_SMRGLTextureBasic_005be924)`
  - After:  `while (pSVar6 != g_SMRGLPrimitiveQuad_ARRAY_005be774 + sizeof(g_SMRGLPrimitiveQuad_ARRAY_005be774) / sizeof(g_SMRGLPrimitiveQuad_ARRAY_005be774[0]))`

### `core_skeleton.cpp_freeAllModels_FUN_0051f650`

- Pool `g_DeformableModelPool` sentinel `g_INT_02737ef4` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)&g_INT_02737ef4)`
  - After:  `while (this_ptr != g_DeformableModelPool + sizeof(g_DeformableModelPool) / sizeof(g_DeformableModelPool[0]))`

### `core_water.cpp_CWater_captureTextures_FUN_005507d0`

- Pool `g_SMRGLTextureBasic_ARRAY_005c11f4` sentinel `g_SMRGLPrimitiveQuad_005c1374` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_SMRGLPrimitiveQuad_005c1374)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_005c11f4 + sizeof(g_SMRGLTextureBasic_ARRAY_005c11f4) / sizeof(g_SMRGLTextureBasic_ARRAY_005c11f4[0]))`

### `sound_sndmain.cpp_countActiveSfx_FUN_005275e0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (pCVar1 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_killAllSfx_FUN_005272b0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_00523170`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`
- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0`

- Pool `g_CSfxSlot_ARRAY_02dbd374` sentinel `g_INT_02dc1b74` (count 64)
  - Before: `while (slot != (CSfxSlot *)&g_INT_02dc1b74)`
  - After:  `while (slot != g_CSfxSlot_ARRAY_02dbd374 + sizeof(g_CSfxSlot_ARRAY_02dbd374) / sizeof(g_CSfxSlot_ARRAY_02dbd374[0]))`

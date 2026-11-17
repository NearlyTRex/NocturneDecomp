# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **64**
- Functions touched: **21**
- Pools indexed: **373**
- Adjacency pairs in lookup: **373**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_0044fc50`

- Pool `g_CKeyFramedModelPool` sentinel `g_CVector3f_01b4d220` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CVector3f_01b4d220)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_0049c190`

- Pool `g_PopcornPool` sentinel `g_INT_01ca7680` (count 256)
  - Before: `while (pCVar20 != (CPopcorn *)&g_INT_01ca7680)`
  - After:  `while (pCVar20 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01ca367c` (count 50)
  - Before: `while (pCVar18 != (CShell *)&g_INT_01ca367c)`
  - After:  `while (pCVar18 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01ca15a8` sentinel `g_INT_01ca23b8` (count 100)
  - Before: `while (this_ptr_06 != (CTrail *)&g_INT_01ca23b8)`
  - After:  `while (this_ptr_06 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]))`
- Pool `g_CLightningBolt_ARRAY_01ca13ec` sentinel `g_INT_01ca15a4` (count 10)
  - Before: `while (this_ptr_05 != (CLightningBolt *)&g_INT_01ca15a4)`
  - After:  `while (this_ptr_05 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]))`
- Pool `g_CGunFlame_ARRAY_01c9cd98` sentinel `g_INT_01ca13e8` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_INT_01ca13e8)`
  - After:  `while (this_ptr_04 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]))`
- Pool `g_CCrater_ARRAY_01c9c4d4` sentinel `g_INT_01c9cd94` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_INT_01c9cd94)`
  - After:  `while (this_ptr_03 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c9c4d0` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_INT_01c9c4d0)`
  - After:  `while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c975e4` sentinel `g_INT_01c976fc` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_INT_01c976fc)`
  - After:  `while (this_ptr_01 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c950d8` (count 64)
  - Before: `while (pCVar13 != (CRock *)&g_INT_01c950d8)`
  - After:  `while (pCVar13 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c93cd4` (count 64)
  - Before: `while (pCVar11 != (CFireball *)&g_INT_01c93cd4)`
  - After:  `while (pCVar11 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01c91268` sentinel `g_INT_01c913d0` (count 10)
  - Before: `while (pCVar9 != (CBulletTrail *)&g_INT_01c913d0)`
  - After:  `while (pCVar9 != g_CBulletTrail_ARRAY_01c91268 + sizeof(g_CBulletTrail_ARRAY_01c91268) / sizeof(g_CBulletTrail_ARRAY_01c91268[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c91264` (count 256)
  - Before: `while (pCVar7 != (CGlassParticle *)&g_INT_01c91264)`
  - After:  `while (pCVar7 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c848f4` (count 256)
  - Before: `while (pCVar3 != (CSpark *)&g_INT_01c848f4)`
  - After:  `while (pCVar3 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c3f8e0` sentinel `g_INT_01c558e0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c558e0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c3f8e0 + sizeof(g_CSmokeParticle_ARRAY_01c3f8e0) / sizeof(g_CSmokeParticle_ARRAY_01c3f8e0[0]))`

### `core_fire.cpp_CFireEffect_load_FUN_0049ea80`

- Pool `g_CCrater_ARRAY_01c9c4d4` sentinel `g_INT_01c9cd94` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c9cd94)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_0049c430`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar3 != &g_CFlameClassInfo)`
  - After:  `while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01ca7680` (count 256)
  - Before: `while (this_ptr_16 != (CPopcorn *)&g_INT_01ca7680)`
  - After:  `while (this_ptr_16 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01ca367c` (count 50)
  - Before: `while (this_ptr_15 != (CShell *)&g_INT_01ca367c)`
  - After:  `while (this_ptr_15 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01ca15a8` sentinel `g_INT_01ca23b8` (count 100)
  - Before: `while (this_ptr_14 != (CTrail *)&g_INT_01ca23b8)`
  - After:  `while (this_ptr_14 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]))`
- Pool `g_CLightningBolt_ARRAY_01ca13ec` sentinel `g_INT_01ca15a4` (count 10)
  - Before: `while (this_ptr_13 != (CLightningBolt *)&g_INT_01ca15a4)`
  - After:  `while (this_ptr_13 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]))`
- Pool `g_CGunFlame_ARRAY_01c9cd98` sentinel `g_INT_01ca13e8` (count 500)
  - Before: `while (this_ptr_12 != (CGunFlame *)&g_INT_01ca13e8)`
  - After:  `while (this_ptr_12 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]))`
- Pool `g_CCrater_ARRAY_01c9c4d4` sentinel `g_INT_01c9cd94` (count 20)
  - Before: `while (this_ptr_11 != (CCrater *)&g_INT_01c9cd94)`
  - After:  `while (this_ptr_11 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c9c4d0` (count 20)
  - Before: `while (this_ptr_10 != (CToss *)&g_INT_01c9c4d0)`
  - After:  `while (this_ptr_10 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c975e4` sentinel `g_INT_01c976fc` (count 10)
  - Before: `while (this_ptr_09 != (CExplosion *)&g_INT_01c976fc)`
  - After:  `while (this_ptr_09 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c950d8` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_INT_01c950d8)`
  - After:  `while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c93cd4` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_INT_01c93cd4)`
  - After:  `while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01c91268` sentinel `g_INT_01c913d0` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_INT_01c913d0)`
  - After:  `while (this_ptr_05 != g_CBulletTrail_ARRAY_01c91268 + sizeof(g_CBulletTrail_ARRAY_01c91268) / sizeof(g_CBulletTrail_ARRAY_01c91268[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c91264` (count 256)
  - Before: `while (this_ptr_04 != (CGlassParticle *)&g_INT_01c91264)`
  - After:  `while (this_ptr_04 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c86730` sentinel `g_INT_01c86e60` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_INT_01c86e60)`
  - After:  `while (this_ptr_02 != g_CMuzzleFlash_ARRAY_01c86730 + sizeof(g_CMuzzleFlash_ARRAY_01c86730) / sizeof(g_CMuzzleFlash_ARRAY_01c86730[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c848f4` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_INT_01c848f4)`
  - After:  `while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c3f8e0` sentinel `g_INT_01c558e0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c558e0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c3f8e0 + sizeof(g_CSmokeParticle_ARRAY_01c3f8e0) / sizeof(g_CSmokeParticle_ARRAY_01c3f8e0[0]))`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50`

- Pool `g_CCrater_ARRAY_01c9c4d4` sentinel `g_INT_01c9cd94` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c9cd94)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_0049c780`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar3 != &g_CFlameClassInfo)`
  - After:  `while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01ca7680` (count 256)
  - Before: `while (this_ptr_15 != (CPopcorn *)&g_INT_01ca7680)`
  - After:  `while (this_ptr_15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_CTrail_ARRAY_01ca15a8` sentinel `g_INT_01ca23b8` (count 100)
  - Before: `while (this_ptr_14 != (CTrail *)&g_INT_01ca23b8)`
  - After:  `while (this_ptr_14 != g_CTrail_ARRAY_01ca15a8 + sizeof(g_CTrail_ARRAY_01ca15a8) / sizeof(g_CTrail_ARRAY_01ca15a8[0]))`
- Pool `g_CLightningBolt_ARRAY_01ca13ec` sentinel `g_INT_01ca15a4` (count 10)
  - Before: `while (this_ptr_13 != (CLightningBolt *)&g_INT_01ca15a4)`
  - After:  `while (this_ptr_13 != g_CLightningBolt_ARRAY_01ca13ec + sizeof(g_CLightningBolt_ARRAY_01ca13ec) / sizeof(g_CLightningBolt_ARRAY_01ca13ec[0]))`
- Pool `g_CGunFlame_ARRAY_01c9cd98` sentinel `g_INT_01ca13e8` (count 500)
  - Before: `while (this_ptr_12 != (CGunFlame *)&g_INT_01ca13e8)`
  - After:  `while (this_ptr_12 != g_CGunFlame_ARRAY_01c9cd98 + sizeof(g_CGunFlame_ARRAY_01c9cd98) / sizeof(g_CGunFlame_ARRAY_01c9cd98[0]))`
- Pool `g_TossPool` sentinel `g_INT_01c9c4d0` (count 20)
  - Before: `while (this_ptr_11 != (CToss *)&g_INT_01c9c4d0)`
  - After:  `while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01c975e4` sentinel `g_INT_01c976fc` (count 10)
  - Before: `while (this_ptr_10 != (CExplosion *)&g_INT_01c976fc)`
  - After:  `while (this_ptr_10 != g_CExplosion_ARRAY_01c975e4 + sizeof(g_CExplosion_ARRAY_01c975e4) / sizeof(g_CExplosion_ARRAY_01c975e4[0]))`
- Pool `g_CBulletTrail_ARRAY_01c91268` sentinel `g_INT_01c913d0` (count 10)
  - Before: `while (this_ptr_09 != (CBulletTrail *)&g_INT_01c913d0)`
  - After:  `while (this_ptr_09 != g_CBulletTrail_ARRAY_01c91268 + sizeof(g_CBulletTrail_ARRAY_01c91268) / sizeof(g_CBulletTrail_ARRAY_01c91268[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01c91264` (count 256)
  - Before: `while (this_ptr_08 != (CGlassParticle *)&g_INT_01c91264)`
  - After:  `while (this_ptr_08 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c848f4` (count 256)
  - Before: `while (this_ptr_07 != (CSpark *)&g_INT_01c848f4)`
  - After:  `while (this_ptr_07 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c86730` sentinel `g_INT_01c86e60` (count 20)
  - Before: `while (this_ptr_05 != (CMuzzleFlash *)&g_INT_01c86e60)`
  - After:  `while (this_ptr_05 != g_CMuzzleFlash_ARRAY_01c86730 + sizeof(g_CMuzzleFlash_ARRAY_01c86730) / sizeof(g_CMuzzleFlash_ARRAY_01c86730[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c3f8e0` sentinel `g_INT_01c558e0` (count 2048)
  - Before: `while (this_ptr_04 != (CSmokeParticle *)&g_INT_01c558e0)`
  - After:  `while (this_ptr_04 != g_CSmokeParticle_ARRAY_01c3f8e0 + sizeof(g_CSmokeParticle_ARRAY_01c3f8e0) / sizeof(g_CSmokeParticle_ARRAY_01c3f8e0[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01ca367c` (count 50)
  - Before: `while (this_ptr_03 != (CShell *)&g_INT_01ca367c)`
  - After:  `while (this_ptr_03 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01c93cd4` (count 64)
  - Before: `while (this_ptr_02 != (CFireball *)&g_INT_01c93cd4)`
  - After:  `while (this_ptr_02 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_RockPool` sentinel `g_INT_01c950d8` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_INT_01c950d8)`
  - After:  `while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`

### `core_fire.cpp_CFireEffect_save_FUN_0049eb00`

- Pool `g_CCrater_ARRAY_01c9c4d4` sentinel `g_INT_01c9cd94` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01c9cd94)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01c9c4d4 + sizeof(g_CCrater_ARRAY_01c9c4d4) / sizeof(g_CCrater_ARRAY_01c9c4d4[0]))`

### `core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0`

- Pool `g_SMRGLTextureBasic_ARRAY_006157cc` sentinel `g_SMRGLTextureBasic_0061585c` (count 6)
  - Before: `while (texture != &g_SMRGLTextureBasic_0061585c)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_006157cc + sizeof(g_SMRGLTextureBasic_ARRAY_006157cc) / sizeof(g_SMRGLTextureBasic_ARRAY_006157cc[0]))`

### `core_gore.cpp_CGore_loadAssets_FUN_004c9b00`

- Pool `g_SMRGLTextureBasic_ARRAY_00616808` sentinel `g_SMRGLTextureBasic_ARRAY_00616868` (count 4)
  - Before: `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_00616868)`
  - After:  `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_00616808 + sizeof(g_SMRGLTextureBasic_ARRAY_00616808) / sizeof(g_SMRGLTextureBasic_ARRAY_00616808[0]))`

### `core_gore.cpp_CGore_process_FUN_004c9670`

- Pool `g_BloodParticles` sentinel `g_INT_01cbcaf4` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01cbcaf4)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_renderParticles_FUN_004c9440`

- Pool `g_BloodParticles` sentinel `g_INT_01cbcaf4` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01cbcaf4)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_reset_FUN_004c93f0`

- Pool `g_BloodParticles` sentinel `g_INT_01cbcaf4` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_INT_01cbcaf4)`
  - After:  `while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_skeleton.cpp_freeAllModels_FUN_00548f80`

- Pool `g_DeformableModelPool` sentinel `g_CHAR_ARRAY_02177ff4` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)g_CHAR_ARRAY_02177ff4)`
  - After:  `while (this_ptr != g_DeformableModelPool + sizeof(g_DeformableModelPool) / sizeof(g_DeformableModelPool[0]))`

### `core_skeleton.cpp_freeAllSkeletons_FUN_00549090`

- Pool `g_SkeletonPool` sentinel `g_CHAR_ARRAY_02628554` (count 40)
  - Before: `while (this_ptr != (CSkeleton *)g_CHAR_ARRAY_02628554)`
  - After:  `while (this_ptr != g_SkeletonPool + sizeof(g_SkeletonPool) / sizeof(g_SkeletonPool[0]))`

### `core_water.cpp_CWater_captureTextures_FUN_00585de0`

- Pool `g_SMRGLTextureBasic_ARRAY_0061e52c` sentinel `g_SMRGLPrimitiveQuad_0061e6ac` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_SMRGLPrimitiveQuad_0061e6ac)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_0061e52c + sizeof(g_SMRGLTextureBasic_ARRAY_0061e52c) / sizeof(g_SMRGLTextureBasic_ARRAY_0061e52c[0]))`

### `crt_unknown.c_FUN_005c3388`

- Pool `g_InitHandlers` sentinel `g_RuntimeHandlerEntry_0061fe4c` (count 203)
  - Before: `while (pRVar1 < &g_RuntimeHandlerEntry_0061fe4c)`
  - After:  `while (pRVar1 != g_InitHandlers + sizeof(g_InitHandlers) / sizeof(g_InitHandlers[0]))`

### `sound_sndmain.cpp_countActiveSfx_FUN_005513f0`

- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (pCVar1 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`

### `sound_sndmain.cpp_killAllSfx_FUN_005510d0`

- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_0054d060`

- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`
- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510`

- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_00551100`

- Pool `g_CSfxSlot_ARRAY_0263cf1c` sentinel `g_INT_0264161c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_0264161c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]))`

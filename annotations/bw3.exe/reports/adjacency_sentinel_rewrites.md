# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **63**
- Functions touched: **21**
- Pools indexed: **326**
- Adjacency pairs in lookup: **326**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_004624d0`

- Pool `g_CKeyFramedModelPool` sentinel `g_CZombieDogClassInfo` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CZombieDogClassInfo)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_004a1480`

- Pool `g_RainDropPool` sentinel `g_INT_01d0bb90` (count 256)
  - Before: `while (pCVar22 != (CRainDrop *)&g_INT_01d0bb90)`
  - After:  `while (pCVar22 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01d07b8c` (count 256)
  - Before: `while (pCVar20 != (CPopcorn *)&g_INT_01d07b8c)`
  - After:  `while (pCVar20 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01d03b88` (count 50)
  - Before: `while (pCVar18 != (CShell *)&g_INT_01d03b88)`
  - After:  `while (pCVar18 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01d01ab4` sentinel `g_INT_01d028c4` (count 100)
  - Before: `while (this_ptr_05 != (CTrail *)&g_INT_01d028c4)`
  - After:  `while (this_ptr_05 != g_CTrail_ARRAY_01d01ab4 + sizeof(g_CTrail_ARRAY_01d01ab4) / sizeof(g_CTrail_ARRAY_01d01ab4[0]))`
- Pool `g_CLightningBolt_ARRAY_01d00eb0` sentinel `g_INT_01d01ab0` (count 10)
  - Before: `while (pCVar16 != (CLightningBolt *)&g_INT_01d01ab0)`
  - After:  `while (pCVar16 != g_CLightningBolt_ARRAY_01d00eb0 + sizeof(g_CLightningBolt_ARRAY_01d00eb0) / sizeof(g_CLightningBolt_ARRAY_01d00eb0[0]))`
- Pool `g_CGunFlame_ARRAY_01cfb8bc` sentinel `g_INT_01d00eac` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_INT_01d00eac)`
  - After:  `while (this_ptr_04 != g_CGunFlame_ARRAY_01cfb8bc + sizeof(g_CGunFlame_ARRAY_01cfb8bc) / sizeof(g_CGunFlame_ARRAY_01cfb8bc[0]))`
- Pool `g_CCrater_ARRAY_01cfaff8` sentinel `g_INT_01cfb8b8` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_INT_01cfb8b8)`
  - After:  `while (this_ptr_03 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cfaff4` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_INT_01cfaff4)`
  - After:  `while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cf6090` sentinel `g_INT_01cf61d0` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_INT_01cf61d0)`
  - After:  `while (this_ptr_01 != g_CExplosion_ARRAY_01cf6090 + sizeof(g_CExplosion_ARRAY_01cf6090) / sizeof(g_CExplosion_ARRAY_01cf6090[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cf3b84` (count 64)
  - Before: `while (pCVar12 != (CRock *)&g_INT_01cf3b84)`
  - After:  `while (pCVar12 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cf2780` (count 64)
  - Before: `while (pCVar10 != (CFireball *)&g_INT_01cf2780)`
  - After:  `while (pCVar10 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01cefd14` sentinel `g_INT_01cefe7c` (count 10)
  - Before: `while (pCVar8 != (CBulletTrail *)&g_INT_01cefe7c)`
  - After:  `while (pCVar8 != g_CBulletTrail_ARRAY_01cefd14 + sizeof(g_CBulletTrail_ARRAY_01cefd14) / sizeof(g_CBulletTrail_ARRAY_01cefd14[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01cbb9bc` sentinel `g_INT_01cbc0ec` (count 20)
  - Before: `while (pCVar4 != (CMuzzleFlash *)&g_INT_01cbc0ec)`
  - After:  `while (pCVar4 != g_CMuzzleFlash_ARRAY_01cbb9bc + sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc) / sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01cba2b4` (count 256)
  - Before: `while (pCVar2 != (CSpark *)&g_INT_01cba2b4)`
  - After:  `while (pCVar2 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c74ea0` sentinel `g_INT_01c8aea0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c8aea0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c74ea0 + sizeof(g_CSmokeParticle_ARRAY_01c74ea0) / sizeof(g_CSmokeParticle_ARRAY_01c74ea0[0]))`

### `core_fire.cpp_CFireEffect_loadAssets_FUN_004a24a0`

- Pool `g_SMRGLTextureBasic_ARRAY_005fc5a4` sentinel `g_SMRGLTextureBasic_005fc964` (count 40)
  - Before: `while (texture != &g_SMRGLTextureBasic_005fc964)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_005fc5a4 + sizeof(g_SMRGLTextureBasic_ARRAY_005fc5a4) / sizeof(g_SMRGLTextureBasic_ARRAY_005fc5a4[0]))`

### `core_fire.cpp_CFireEffect_load_FUN_004a4030`

- Pool `g_CCrater_ARRAY_01cfaff8` sentinel `g_INT_01cfb8b8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cfb8b8)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_004a1760`

- Pool `g_RainDropPool` sentinel `g_INT_01d0bb90` (count 256)
  - Before: `while (this_ptr_17 != (CRainDrop *)&g_INT_01d0bb90)`
  - After:  `while (this_ptr_17 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01d07b8c` (count 256)
  - Before: `while (this_ptr_16 != (CPopcorn *)&g_INT_01d07b8c)`
  - After:  `while (this_ptr_16 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01d03b88` (count 50)
  - Before: `while (this_ptr_15 != (CShell *)&g_INT_01d03b88)`
  - After:  `while (this_ptr_15 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01d01ab4` sentinel `g_INT_01d028c4` (count 100)
  - Before: `while (this_ptr_14 != (CTrail *)&g_INT_01d028c4)`
  - After:  `while (this_ptr_14 != g_CTrail_ARRAY_01d01ab4 + sizeof(g_CTrail_ARRAY_01d01ab4) / sizeof(g_CTrail_ARRAY_01d01ab4[0]))`
- Pool `g_CLightningBolt_ARRAY_01d00eb0` sentinel `g_INT_01d01ab0` (count 10)
  - Before: `while (pCVar3 != (CLightningBolt *)&g_INT_01d01ab0)`
  - After:  `while (pCVar3 != g_CLightningBolt_ARRAY_01d00eb0 + sizeof(g_CLightningBolt_ARRAY_01d00eb0) / sizeof(g_CLightningBolt_ARRAY_01d00eb0[0]))`
- Pool `g_CGunFlame_ARRAY_01cfb8bc` sentinel `g_INT_01d00eac` (count 500)
  - Before: `while (this_ptr_13 != (CGunFlame *)&g_INT_01d00eac)`
  - After:  `while (this_ptr_13 != g_CGunFlame_ARRAY_01cfb8bc + sizeof(g_CGunFlame_ARRAY_01cfb8bc) / sizeof(g_CGunFlame_ARRAY_01cfb8bc[0]))`
- Pool `g_CCrater_ARRAY_01cfaff8` sentinel `g_INT_01cfb8b8` (count 20)
  - Before: `while (this_ptr_12 != (CCrater *)&g_INT_01cfb8b8)`
  - After:  `while (this_ptr_12 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cfaff4` (count 20)
  - Before: `while (this_ptr_11 != (CToss *)&g_INT_01cfaff4)`
  - After:  `while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cf6090` sentinel `g_INT_01cf61d0` (count 10)
  - Before: `while (this_ptr_10 != (CExplosion *)&g_INT_01cf61d0)`
  - After:  `while (this_ptr_10 != g_CExplosion_ARRAY_01cf6090 + sizeof(g_CExplosion_ARRAY_01cf6090) / sizeof(g_CExplosion_ARRAY_01cf6090[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cf3b84` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_INT_01cf3b84)`
  - After:  `while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cf2780` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_INT_01cf2780)`
  - After:  `while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01cefd14` sentinel `g_INT_01cefe7c` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_INT_01cefe7c)`
  - After:  `while (this_ptr_05 != g_CBulletTrail_ARRAY_01cefd14 + sizeof(g_CBulletTrail_ARRAY_01cefd14) / sizeof(g_CBulletTrail_ARRAY_01cefd14[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01cbb9bc` sentinel `g_INT_01cbc0ec` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_INT_01cbc0ec)`
  - After:  `while (this_ptr_02 != g_CMuzzleFlash_ARRAY_01cbb9bc + sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc) / sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01cba2b4` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_INT_01cba2b4)`
  - After:  `while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c74ea0` sentinel `g_INT_01c8aea0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c8aea0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c74ea0 + sizeof(g_CSmokeParticle_ARRAY_01c74ea0) / sizeof(g_CSmokeParticle_ARRAY_01c74ea0[0]))`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90`

- Pool `g_CCrater_ARRAY_01cfaff8` sentinel `g_INT_01cfb8b8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cfb8b8)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_004a1ad0`

- Pool `g_RainDropPool` sentinel `g_INT_01d0bb90` (count 256)
  - Before: `while (this_ptr_15 != (CRainDrop *)&g_INT_01d0bb90)`
  - After:  `while (this_ptr_15 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01d07b8c` (count 256)
  - Before: `while (this_ptr_14 != (CPopcorn *)&g_INT_01d07b8c)`
  - After:  `while (this_ptr_14 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_CTrail_ARRAY_01d01ab4` sentinel `g_INT_01d028c4` (count 100)
  - Before: `while (this_ptr_13 != (CTrail *)&g_INT_01d028c4)`
  - After:  `while (this_ptr_13 != g_CTrail_ARRAY_01d01ab4 + sizeof(g_CTrail_ARRAY_01d01ab4) / sizeof(g_CTrail_ARRAY_01d01ab4[0]))`
- Pool `g_CLightningBolt_ARRAY_01d00eb0` sentinel `g_INT_01d01ab0` (count 10)
  - Before: `while (pCVar3 != (CLightningBolt *)&g_INT_01d01ab0)`
  - After:  `while (pCVar3 != g_CLightningBolt_ARRAY_01d00eb0 + sizeof(g_CLightningBolt_ARRAY_01d00eb0) / sizeof(g_CLightningBolt_ARRAY_01d00eb0[0]))`
- Pool `g_CGunFlame_ARRAY_01cfb8bc` sentinel `g_INT_01d00eac` (count 500)
  - Before: `while (this_ptr_12 != (CGunFlame *)&g_INT_01d00eac)`
  - After:  `while (this_ptr_12 != g_CGunFlame_ARRAY_01cfb8bc + sizeof(g_CGunFlame_ARRAY_01cfb8bc) / sizeof(g_CGunFlame_ARRAY_01cfb8bc[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cfaff4` (count 20)
  - Before: `while (this_ptr_11 != (CToss *)&g_INT_01cfaff4)`
  - After:  `while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cf6090` sentinel `g_INT_01cf61d0` (count 10)
  - Before: `while (this_ptr_10 != (CExplosion *)&g_INT_01cf61d0)`
  - After:  `while (this_ptr_10 != g_CExplosion_ARRAY_01cf6090 + sizeof(g_CExplosion_ARRAY_01cf6090) / sizeof(g_CExplosion_ARRAY_01cf6090[0]))`
- Pool `g_CBulletTrail_ARRAY_01cefd14` sentinel `g_INT_01cefe7c` (count 10)
  - Before: `while (this_ptr_09 != (CBulletTrail *)&g_INT_01cefe7c)`
  - After:  `while (this_ptr_09 != g_CBulletTrail_ARRAY_01cefd14 + sizeof(g_CBulletTrail_ARRAY_01cefd14) / sizeof(g_CBulletTrail_ARRAY_01cefd14[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01cba2b4` (count 256)
  - Before: `while (this_ptr_07 != (CSpark *)&g_INT_01cba2b4)`
  - After:  `while (this_ptr_07 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01cbb9bc` sentinel `g_INT_01cbc0ec` (count 20)
  - Before: `while (this_ptr_05 != (CMuzzleFlash *)&g_INT_01cbc0ec)`
  - After:  `while (this_ptr_05 != g_CMuzzleFlash_ARRAY_01cbb9bc + sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc) / sizeof(g_CMuzzleFlash_ARRAY_01cbb9bc[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c74ea0` sentinel `g_INT_01c8aea0` (count 2048)
  - Before: `while (this_ptr_04 != (CSmokeParticle *)&g_INT_01c8aea0)`
  - After:  `while (this_ptr_04 != g_CSmokeParticle_ARRAY_01c74ea0 + sizeof(g_CSmokeParticle_ARRAY_01c74ea0) / sizeof(g_CSmokeParticle_ARRAY_01c74ea0[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01d03b88` (count 50)
  - Before: `while (this_ptr_03 != (CShell *)&g_INT_01d03b88)`
  - After:  `while (this_ptr_03 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cf2780` (count 64)
  - Before: `while (this_ptr_02 != (CFireball *)&g_INT_01cf2780)`
  - After:  `while (this_ptr_02 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cf3b84` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_INT_01cf3b84)`
  - After:  `while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`

### `core_fire.cpp_CFireEffect_save_FUN_004a40b0`

- Pool `g_CCrater_ARRAY_01cfaff8` sentinel `g_INT_01cfb8b8` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cfb8b8)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cfaff8 + sizeof(g_CCrater_ARRAY_01cfaff8) / sizeof(g_CCrater_ARRAY_01cfaff8[0]))`

### `core_gore.cpp_CGore_loadAssets_FUN_004cec70`

- Pool `g_SMRGLTextureBasic_ARRAY_005fed4c` sentinel `g_SMRGLTextureBasic_ARRAY_005fedac` (count 4)
  - Before: `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_005fedac)`
  - After:  `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_005fed4c + sizeof(g_SMRGLTextureBasic_ARRAY_005fed4c) / sizeof(g_SMRGLTextureBasic_ARRAY_005fed4c[0]))`

### `core_gore.cpp_CGore_process_FUN_004ce7e0`

- Pool `g_BloodParticles` sentinel `g_INT_01d276b4` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01d276b4)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_renderParticles_FUN_004ce5b0`

- Pool `g_BloodParticles` sentinel `g_INT_01d276b4` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01d276b4)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_reset_FUN_004ce560`

- Pool `g_BloodParticles` sentinel `g_INT_01d276b4` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_INT_01d276b4)`
  - After:  `while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_skeleton.cpp_freeAllModels_FUN_005501a0`

- Pool `g_DeformableModelPool` sentinel `g_CHAR_ARRAY_02802f5c` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)g_CHAR_ARRAY_02802f5c)`
  - After:  `while (this_ptr != g_DeformableModelPool + sizeof(g_DeformableModelPool) / sizeof(g_DeformableModelPool[0]))`

### `core_skeleton.cpp_freeAllSkeletons_FUN_005502d0`

- Pool `g_SkeletonPool` sentinel `g_CHAR_ARRAY_02cd28bc` (count 40)
  - Before: `while (this_ptr != (CSkeleton *)g_CHAR_ARRAY_02cd28bc)`
  - After:  `while (this_ptr != g_SkeletonPool + sizeof(g_SkeletonPool) / sizeof(g_SkeletonPool[0]))`

### `core_water.cpp_CWater_captureTextures_FUN_00577260`

- Pool `g_SMRGLTextureBasic_ARRAY_00606cac` sentinel `g_SMRGLPrimitiveQuad_00606e2c` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_SMRGLPrimitiveQuad_00606e2c)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_00606cac + sizeof(g_SMRGLTextureBasic_ARRAY_00606cac) / sizeof(g_SMRGLTextureBasic_ARRAY_00606cac[0]))`

### `crt_unknown.c_FUN_005ae4f8`

- Pool `g_InitHandlers` sentinel `g_RuntimeHandlerEntry_006084b6` (count 172)
  - Before: `while (pRVar1 < &g_RuntimeHandlerEntry_006084b6)`
  - After:  `while (pRVar1 != g_InitHandlers + sizeof(g_InitHandlers) / sizeof(g_InitHandlers[0]))`

### `sound_sndmain.cpp_countActiveSfx_FUN_00556f80`

- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (pCVar1 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`

### `sound_sndmain.cpp_killAllSfx_FUN_00556c60`

- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_00552bd0`

- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`
- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0`

- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90`

- Pool `g_CSfxSlot_ARRAY_02ce721c` sentinel `g_INT_02ceb91c` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02ceb91c)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]))`

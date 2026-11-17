# Adjacency-Sentinel Rewrites

Loops auto-rewritten by the exporter. Watcom's end-of-array sentinel
was the next named global in the original binary; our linker reorders
globals so the sentinel never matches. See `docs/decompiler-artifacts.md` §16.

## Summary

- Rewrites applied: **65**
- Functions touched: **21**
- Pools indexed: **355**
- Adjacency pairs in lookup: **355**

## Rewrites by function

### `core_dmodel.cpp_freeAllModels_FUN_00468830`

- Pool `g_CKeyFramedModelPool` sentinel `g_CDoor_PTR_01b687e0` (count 256)
  - Before: `while (this_ptr != (CKeyFramedModel *)&g_CDoor_PTR_01b687e0)`
  - After:  `while (this_ptr != g_CKeyFramedModelPool + sizeof(g_CKeyFramedModelPool) / sizeof(g_CKeyFramedModelPool[0]))`

### `core_fire.cpp_CFireEffect_init_FUN_004b4b30`

- Pool `g_PopcornPool` sentinel `g_INT_01cc010c` (count 256)
  - Before: `while (pCVar20 != (CPopcorn *)&g_INT_01cc010c)`
  - After:  `while (pCVar20 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01cbc108` (count 50)
  - Before: `while (pCVar18 != (CShell *)&g_INT_01cbc108)`
  - After:  `while (pCVar18 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01cba034` sentinel `g_INT_01cbae44` (count 100)
  - Before: `while (this_ptr_06 != (CTrail *)&g_INT_01cbae44)`
  - After:  `while (this_ptr_06 != g_CTrail_ARRAY_01cba034 + sizeof(g_CTrail_ARRAY_01cba034) / sizeof(g_CTrail_ARRAY_01cba034[0]))`
- Pool `g_CLightningBolt_ARRAY_01cb9e78` sentinel `g_INT_01cba030` (count 10)
  - Before: `while (this_ptr_05 != (CLightningBolt *)&g_INT_01cba030)`
  - After:  `while (this_ptr_05 != g_CLightningBolt_ARRAY_01cb9e78 + sizeof(g_CLightningBolt_ARRAY_01cb9e78) / sizeof(g_CLightningBolt_ARRAY_01cb9e78[0]))`
- Pool `g_CGunFlame_ARRAY_01cb5824` sentinel `g_INT_01cb9e74` (count 500)
  - Before: `while (this_ptr_04 != (CGunFlame *)&g_INT_01cb9e74)`
  - After:  `while (this_ptr_04 != g_CGunFlame_ARRAY_01cb5824 + sizeof(g_CGunFlame_ARRAY_01cb5824) / sizeof(g_CGunFlame_ARRAY_01cb5824[0]))`
- Pool `g_CCrater_ARRAY_01cb4f60` sentinel `g_INT_01cb5820` (count 20)
  - Before: `while (this_ptr_03 != (CCrater *)&g_INT_01cb5820)`
  - After:  `while (this_ptr_03 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cb4f5c` (count 20)
  - Before: `while (this_ptr_02 != (CToss *)&g_INT_01cb4f5c)`
  - After:  `while (this_ptr_02 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cb0070` sentinel `g_INT_01cb0188` (count 10)
  - Before: `while (this_ptr_01 != (CExplosion *)&g_INT_01cb0188)`
  - After:  `while (this_ptr_01 != g_CExplosion_ARRAY_01cb0070 + sizeof(g_CExplosion_ARRAY_01cb0070) / sizeof(g_CExplosion_ARRAY_01cb0070[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cadb64` (count 64)
  - Before: `while (pCVar13 != (CRock *)&g_INT_01cadb64)`
  - After:  `while (pCVar13 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cac760` (count 64)
  - Before: `while (pCVar11 != (CFireball *)&g_INT_01cac760)`
  - After:  `while (pCVar11 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01ca9cf4` sentinel `g_INT_01ca9e5c` (count 10)
  - Before: `while (pCVar9 != (CBulletTrail *)&g_INT_01ca9e5c)`
  - After:  `while (pCVar9 != g_CBulletTrail_ARRAY_01ca9cf4 + sizeof(g_CBulletTrail_ARRAY_01ca9cf4) / sizeof(g_CBulletTrail_ARRAY_01ca9cf4[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01ca9cf0` (count 256)
  - Before: `while (pCVar7 != (CGlassParticle *)&g_INT_01ca9cf0)`
  - After:  `while (pCVar7 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c9f1bc` sentinel `g_INT_01c9f8ec` (count 20)
  - Before: `while (pCVar5 != (CMuzzleFlash *)&g_INT_01c9f8ec)`
  - After:  `while (pCVar5 != g_CMuzzleFlash_ARRAY_01c9f1bc + sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc) / sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c9dab4` (count 256)
  - Before: `while (pCVar3 != (CSpark *)&g_INT_01c9dab4)`
  - After:  `while (pCVar3 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c58aa0` sentinel `g_INT_01c6eaa0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c6eaa0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c58aa0 + sizeof(g_CSmokeParticle_ARRAY_01c58aa0) / sizeof(g_CSmokeParticle_ARRAY_01c58aa0[0]))`

### `core_fire.cpp_CFireEffect_load_FUN_004b7370`

- Pool `g_CCrater_ARRAY_01cb4f60` sentinel `g_INT_01cb5820` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cb5820)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]))`

### `core_fire.cpp_CFireEffect_process_FUN_004b4dd0`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar3 != &g_CFlameClassInfo)`
  - After:  `while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01cc010c` (count 256)
  - Before: `while (this_ptr_16 != (CPopcorn *)&g_INT_01cc010c)`
  - After:  `while (this_ptr_16 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01cbc108` (count 50)
  - Before: `while (this_ptr_15 != (CShell *)&g_INT_01cbc108)`
  - After:  `while (this_ptr_15 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_CTrail_ARRAY_01cba034` sentinel `g_INT_01cbae44` (count 100)
  - Before: `while (this_ptr_14 != (CTrail *)&g_INT_01cbae44)`
  - After:  `while (this_ptr_14 != g_CTrail_ARRAY_01cba034 + sizeof(g_CTrail_ARRAY_01cba034) / sizeof(g_CTrail_ARRAY_01cba034[0]))`
- Pool `g_CLightningBolt_ARRAY_01cb9e78` sentinel `g_INT_01cba030` (count 10)
  - Before: `while (this_ptr_13 != (CLightningBolt *)&g_INT_01cba030)`
  - After:  `while (this_ptr_13 != g_CLightningBolt_ARRAY_01cb9e78 + sizeof(g_CLightningBolt_ARRAY_01cb9e78) / sizeof(g_CLightningBolt_ARRAY_01cb9e78[0]))`
- Pool `g_CGunFlame_ARRAY_01cb5824` sentinel `g_INT_01cb9e74` (count 500)
  - Before: `while (this_ptr_12 != (CGunFlame *)&g_INT_01cb9e74)`
  - After:  `while (this_ptr_12 != g_CGunFlame_ARRAY_01cb5824 + sizeof(g_CGunFlame_ARRAY_01cb5824) / sizeof(g_CGunFlame_ARRAY_01cb5824[0]))`
- Pool `g_CCrater_ARRAY_01cb4f60` sentinel `g_INT_01cb5820` (count 20)
  - Before: `while (this_ptr_11 != (CCrater *)&g_INT_01cb5820)`
  - After:  `while (this_ptr_11 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cb4f5c` (count 20)
  - Before: `while (this_ptr_10 != (CToss *)&g_INT_01cb4f5c)`
  - After:  `while (this_ptr_10 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cb0070` sentinel `g_INT_01cb0188` (count 10)
  - Before: `while (this_ptr_09 != (CExplosion *)&g_INT_01cb0188)`
  - After:  `while (this_ptr_09 != g_CExplosion_ARRAY_01cb0070 + sizeof(g_CExplosion_ARRAY_01cb0070) / sizeof(g_CExplosion_ARRAY_01cb0070[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cadb64` (count 64)
  - Before: `while (this_ptr_07 != (CRock *)&g_INT_01cadb64)`
  - After:  `while (this_ptr_07 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cac760` (count 64)
  - Before: `while (this_ptr_06 != (CFireball *)&g_INT_01cac760)`
  - After:  `while (this_ptr_06 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_CBulletTrail_ARRAY_01ca9cf4` sentinel `g_INT_01ca9e5c` (count 10)
  - Before: `while (this_ptr_05 != (CBulletTrail *)&g_INT_01ca9e5c)`
  - After:  `while (this_ptr_05 != g_CBulletTrail_ARRAY_01ca9cf4 + sizeof(g_CBulletTrail_ARRAY_01ca9cf4) / sizeof(g_CBulletTrail_ARRAY_01ca9cf4[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01ca9cf0` (count 256)
  - Before: `while (this_ptr_04 != (CGlassParticle *)&g_INT_01ca9cf0)`
  - After:  `while (this_ptr_04 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c9f1bc` sentinel `g_INT_01c9f8ec` (count 20)
  - Before: `while (this_ptr_02 != (CMuzzleFlash *)&g_INT_01c9f8ec)`
  - After:  `while (this_ptr_02 != g_CMuzzleFlash_ARRAY_01c9f1bc + sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc) / sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c9dab4` (count 256)
  - Before: `while (this_ptr_01 != (CSpark *)&g_INT_01c9dab4)`
  - After:  `while (this_ptr_01 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c58aa0` sentinel `g_INT_01c6eaa0` (count 2048)
  - Before: `while (this_ptr_00 != (CSmokeParticle *)&g_INT_01c6eaa0)`
  - After:  `while (this_ptr_00 != g_CSmokeParticle_ARRAY_01c58aa0 + sizeof(g_CSmokeParticle_ARRAY_01c58aa0) / sizeof(g_CSmokeParticle_ARRAY_01c58aa0[0]))`

### `core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0`

- Pool `g_CCrater_ARRAY_01cb4f60` sentinel `g_INT_01cb5820` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cb5820)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]))`

### `core_fire.cpp_CFireEffect_render_FUN_004b5100`

- Pool `g_RainDropPool` sentinel `g_CFlameClassInfo` (count 256)
  - Before: `while ((CDemonActorType *)pCVar3 != &g_CFlameClassInfo)`
  - After:  `while (pCVar3 != g_RainDropPool + sizeof(g_RainDropPool) / sizeof(g_RainDropPool[0]))`
- Pool `g_PopcornPool` sentinel `g_INT_01cc010c` (count 256)
  - Before: `while (this_ptr_15 != (CPopcorn *)&g_INT_01cc010c)`
  - After:  `while (this_ptr_15 != g_PopcornPool + sizeof(g_PopcornPool) / sizeof(g_PopcornPool[0]))`
- Pool `g_CTrail_ARRAY_01cba034` sentinel `g_INT_01cbae44` (count 100)
  - Before: `while (this_ptr_14 != (CTrail *)&g_INT_01cbae44)`
  - After:  `while (this_ptr_14 != g_CTrail_ARRAY_01cba034 + sizeof(g_CTrail_ARRAY_01cba034) / sizeof(g_CTrail_ARRAY_01cba034[0]))`
- Pool `g_CLightningBolt_ARRAY_01cb9e78` sentinel `g_INT_01cba030` (count 10)
  - Before: `while (this_ptr_13 != (CLightningBolt *)&g_INT_01cba030)`
  - After:  `while (this_ptr_13 != g_CLightningBolt_ARRAY_01cb9e78 + sizeof(g_CLightningBolt_ARRAY_01cb9e78) / sizeof(g_CLightningBolt_ARRAY_01cb9e78[0]))`
- Pool `g_CGunFlame_ARRAY_01cb5824` sentinel `g_INT_01cb9e74` (count 500)
  - Before: `while (this_ptr_12 != (CGunFlame *)&g_INT_01cb9e74)`
  - After:  `while (this_ptr_12 != g_CGunFlame_ARRAY_01cb5824 + sizeof(g_CGunFlame_ARRAY_01cb5824) / sizeof(g_CGunFlame_ARRAY_01cb5824[0]))`
- Pool `g_TossPool` sentinel `g_INT_01cb4f5c` (count 20)
  - Before: `while (this_ptr_11 != (CToss *)&g_INT_01cb4f5c)`
  - After:  `while (this_ptr_11 != g_TossPool + sizeof(g_TossPool) / sizeof(g_TossPool[0]))`
- Pool `g_CExplosion_ARRAY_01cb0070` sentinel `g_INT_01cb0188` (count 10)
  - Before: `while (this_ptr_10 != (CExplosion *)&g_INT_01cb0188)`
  - After:  `while (this_ptr_10 != g_CExplosion_ARRAY_01cb0070 + sizeof(g_CExplosion_ARRAY_01cb0070) / sizeof(g_CExplosion_ARRAY_01cb0070[0]))`
- Pool `g_CBulletTrail_ARRAY_01ca9cf4` sentinel `g_INT_01ca9e5c` (count 10)
  - Before: `while (this_ptr_09 != (CBulletTrail *)&g_INT_01ca9e5c)`
  - After:  `while (this_ptr_09 != g_CBulletTrail_ARRAY_01ca9cf4 + sizeof(g_CBulletTrail_ARRAY_01ca9cf4) / sizeof(g_CBulletTrail_ARRAY_01ca9cf4[0]))`
- Pool `g_GlassParticlePool` sentinel `g_INT_01ca9cf0` (count 256)
  - Before: `while (this_ptr_08 != (CGlassParticle *)&g_INT_01ca9cf0)`
  - After:  `while (this_ptr_08 != g_GlassParticlePool + sizeof(g_GlassParticlePool) / sizeof(g_GlassParticlePool[0]))`
- Pool `g_SparkPool` sentinel `g_INT_01c9dab4` (count 256)
  - Before: `while (this_ptr_07 != (CSpark *)&g_INT_01c9dab4)`
  - After:  `while (this_ptr_07 != g_SparkPool + sizeof(g_SparkPool) / sizeof(g_SparkPool[0]))`
- Pool `g_CMuzzleFlash_ARRAY_01c9f1bc` sentinel `g_INT_01c9f8ec` (count 20)
  - Before: `while (this_ptr_05 != (CMuzzleFlash *)&g_INT_01c9f8ec)`
  - After:  `while (this_ptr_05 != g_CMuzzleFlash_ARRAY_01c9f1bc + sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc) / sizeof(g_CMuzzleFlash_ARRAY_01c9f1bc[0]))`
- Pool `g_CSmokeParticle_ARRAY_01c58aa0` sentinel `g_INT_01c6eaa0` (count 2048)
  - Before: `while (this_ptr_04 != (CSmokeParticle *)&g_INT_01c6eaa0)`
  - After:  `while (this_ptr_04 != g_CSmokeParticle_ARRAY_01c58aa0 + sizeof(g_CSmokeParticle_ARRAY_01c58aa0) / sizeof(g_CSmokeParticle_ARRAY_01c58aa0[0]))`
- Pool `g_ShellPool` sentinel `g_INT_01cbc108` (count 50)
  - Before: `while (this_ptr_03 != (CShell *)&g_INT_01cbc108)`
  - After:  `while (this_ptr_03 != g_ShellPool + sizeof(g_ShellPool) / sizeof(g_ShellPool[0]))`
- Pool `g_FireballPool` sentinel `g_INT_01cac760` (count 64)
  - Before: `while (this_ptr_02 != (CFireball *)&g_INT_01cac760)`
  - After:  `while (this_ptr_02 != g_FireballPool + sizeof(g_FireballPool) / sizeof(g_FireballPool[0]))`
- Pool `g_RockPool` sentinel `g_INT_01cadb64` (count 64)
  - Before: `while (this_ptr_00 != (CRock *)&g_INT_01cadb64)`
  - After:  `while (this_ptr_00 != g_RockPool + sizeof(g_RockPool) / sizeof(g_RockPool[0]))`

### `core_fire.cpp_CFireEffect_save_FUN_004b73f0`

- Pool `g_CCrater_ARRAY_01cb4f60` sentinel `g_INT_01cb5820` (count 20)
  - Before: `while (this_ptr_00 != (CCrater *)&g_INT_01cb5820)`
  - After:  `while (this_ptr_00 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]))`

### `core_fire.cpp_loadLightningBoltAssets_FUN_004b3450`

- Pool `g_SMRGLTextureBasic_ARRAY_0061caac` sentinel `g_SMRGLTextureBasic_0061cb3c` (count 6)
  - Before: `while (texture != &g_SMRGLTextureBasic_0061cb3c)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_0061caac + sizeof(g_SMRGLTextureBasic_ARRAY_0061caac) / sizeof(g_SMRGLTextureBasic_ARRAY_0061caac[0]))`

### `core_gore.cpp_CGore_loadAssets_FUN_004e6310`

- Pool `g_SMRGLTextureBasic_ARRAY_0061dccc` sentinel `g_SMRGLTextureBasic_ARRAY_0061dd2c` (count 4)
  - Before: `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_0061dd2c)`
  - After:  `while (pSVar1 != g_SMRGLTextureBasic_ARRAY_0061dccc + sizeof(g_SMRGLTextureBasic_ARRAY_0061dccc) / sizeof(g_SMRGLTextureBasic_ARRAY_0061dccc[0]))`

### `core_gore.cpp_CGore_process_FUN_004e5e80`

- Pool `g_BloodParticles` sentinel `g_INT_01cd56ac` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01cd56ac)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_renderParticles_FUN_004e5c50`

- Pool `g_BloodParticles` sentinel `g_INT_01cd56ac` (count 256)
  - Before: `while (this_ptr_00 != (CBloodParticle *)&g_INT_01cd56ac)`
  - After:  `while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_gore.cpp_CGore_reset_FUN_004e5c00`

- Pool `g_BloodParticles` sentinel `g_INT_01cd56ac` (count 256)
  - Before: `while (pCVar2 != (CBloodParticle *)&g_INT_01cd56ac)`
  - After:  `while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]))`

### `core_skeleton.cpp_freeAllModels_FUN_0056b610`

- Pool `g_DeformableModelPool` sentinel `g_CHAR_ARRAY_027902bc` (count 64)
  - Before: `while (this_ptr != (CDeformableModel *)g_CHAR_ARRAY_027902bc)`
  - After:  `while (this_ptr != g_DeformableModelPool + sizeof(g_DeformableModelPool) / sizeof(g_DeformableModelPool[0]))`

### `core_skeleton.cpp_freeAllSkeletons_FUN_0056b740`

- Pool `g_SkeletonPool` sentinel `g_CHAR_ARRAY_02c5fc1c` (count 40)
  - Before: `while (this_ptr != (CSkeleton *)g_CHAR_ARRAY_02c5fc1c)`
  - After:  `while (this_ptr != g_SkeletonPool + sizeof(g_SkeletonPool) / sizeof(g_SkeletonPool[0]))`

### `core_water.cpp_CWater_captureTextures_FUN_005a9a10`

- Pool `g_SMRGLTextureBasic_ARRAY_00625c9c` sentinel `g_SMRGLPrimitiveQuad_00625e1c` (count 16)
  - Before: `while ((SMRGLPrimitiveQuad *)texture != &g_SMRGLPrimitiveQuad_00625e1c)`
  - After:  `while (texture != g_SMRGLTextureBasic_ARRAY_00625c9c + sizeof(g_SMRGLTextureBasic_ARRAY_00625c9c) / sizeof(g_SMRGLTextureBasic_ARRAY_00625c9c[0]))`

### `crt_unknown.c_FUN_005cb688`

- Pool `g_InitHandlers` sentinel `g_RuntimeHandlerEntry_0062716c` (count 187)
  - Before: `while (pRVar1 < &g_RuntimeHandlerEntry_0062716c)`
  - After:  `while (pRVar1 != g_InitHandlers + sizeof(g_InitHandlers) / sizeof(g_InitHandlers[0]))`

### `sound_sndmain.cpp_countActiveSfx_FUN_00573e20`

- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (pCVar1 != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (pCVar1 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`

### `sound_sndmain.cpp_killAllSfx_FUN_00573b00`

- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`

### `sound_sndmain.cpp_nextMixingBuffer_FUN_0056f6d0`

- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`
- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`

### `sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40`

- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (this_ptr != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (this_ptr != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`

### `sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30`

- Pool `g_CSfxSlot_ARRAY_02c745ec` sentinel `g_INT_02c78cec` (count 64)
  - Before: `while (pCVar3 != (CSfxSlot *)&g_INT_02c78cec)`
  - After:  `while (pCVar3 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]))`

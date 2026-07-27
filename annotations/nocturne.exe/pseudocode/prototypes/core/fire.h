#pragma once

// Function prototypes for core/fire.cpp
// Generated from Ghidra function signatures

// Original: core_fire.cpp_staticInit_FUN_004823b0
// Address: 004823b0
void __cdecl staticInit(void);

// Original: core_fire.cpp_safeAcos_FUN_00482630
// Address: 00482630
float safeAcos(float param_1);

// Original: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680
// Address: 00482680
void __cdecl CSmokeParticle::setupRenderState(void);

// Original: core_fire.cpp_CSmokeParticle_reset_FUN_00482770
// Address: 00482770
void __cdecl CSmokeParticle::reset(undefined4 *param_1);

// Original: core_fire.cpp_CSmokeParticle_init_FUN_00482780
// Address: 00482780
void __cdecl CSmokeParticle::init(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);

// Original: core_fire.cpp_CSmokeParticle_process_FUN_00482820
// Address: 00482820
void __cdecl CSmokeParticle::process(undefined4 *param_1);

// Original: core_fire.cpp_CSmokeParticle_render_FUN_00482950
// Address: 00482950
void __cdecl CSmokeParticle::render(int param_1);

// Original: core_fire.cpp_CBulletHole_init_FUN_00482c80
// Address: 00482c80
void __cdecl CBulletHole::init(float *param_1,float *param_2,float *param_3);

// Original: core_fire.cpp_CBulletHole_process_FUN_00482e90
// Address: 00482e90
void __cdecl CBulletHole::process(undefined4 *param_1);

// Original: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
// Address: 00482ed0
void CBulletHole::setupRenderState(void);

// Original: core_fire.cpp_CBulletHole_render_FUN_00482f50
// Address: 00482f50
void __cdecl CBulletHole::render(float *param_1);

// Original: core_fire.cpp_loadStakeAssets_FUN_00483290
// Address: 00483290
void __cdecl loadStakeAssets(void);

// Original: core_fire.cpp_CStake_init_FUN_004832b0
// Address: 004832b0
void __cdecl CStake::init(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: core_fire.cpp_CStake_spawn_FUN_00483320
// Address: 00483320
void __cdecl CStake::spawn(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4);

// Original: core_fire.cpp_CStake_render_FUN_004835d0
// Address: 004835d0
void __cdecl CStake::render(int param_1);

// Original: core_fire.cpp_CStake_process_FUN_004836b0
// Address: 004836b0
void __cdecl CStake::process(int param_1);

// Original: core_fire.cpp_CSpark_process_FUN_004836e0
// Address: 004836e0
void CSpark::process(int param_1);

// Original: core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
// Address: 004837a0
void __cdecl CSpark::setupRenderState(void);

// Original: core_fire.cpp_CSpark_render_FUN_004838c0
// Address: 004838c0
void CSpark::render(float *param_1);

// Original: core_fire.cpp_CSpark_onCollision_FUN_00483fe0
// Address: 00483fe0
undefined4 CSpark::onCollision(void);

// Original: core_fire.cpp_loadFireBallAssets_FUN_00483ff0
// Address: 00483ff0
void __cdecl loadFireBallAssets(void);

// Original: core_fire.cpp_CFireball_process_FUN_00484050
// Address: 00484050
void CFireball::process(int param_1);

// Original: core_fire.cpp_CFireball_setupRenderState_FUN_004842a0
// Address: 004842a0
void __cdecl CFireball::setupRenderState(void);

// Original: core_fire.cpp_CFireball_render_FUN_00484390
// Address: 00484390
void CFireball::render(float *param_1);

// Original: core_fire.cpp_CFireball_onCollision_FUN_00484b60
// Address: 00484b60
undefined4 CFireball::onCollision(float *param_1);

// Original: core_fire.cpp_CRock_setup_FUN_00484c90
// Address: 00484c90
undefined4 __cdecl CRock::setup(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_fire.cpp_loadRockAssets_FUN_00484cb0
// Address: 00484cb0
void __cdecl loadRockAssets(void);

// Original: core_fire.cpp_CRock_process_FUN_00484cc0
// Address: 00484cc0
void CRock::process(int param_1);

// Original: core_fire.cpp_CRock_render_FUN_00484d40
// Address: 00484d40
void CRock::render(int param_1);

// Original: core_fire.cpp_CMuzzleFlash_init_FUN_00484e10
// Address: 00484e10
void __cdecl CMuzzleFlash::init(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);

// Original: core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0
// Address: 00484ed0
void __cdecl CMuzzleFlash::process(int *param_1);

// Original: core_fire.cpp_CMuzzleFlash_render_FUN_00484f00
// Address: 00484f00
void __cdecl CMuzzleFlash::render(int *param_1);

// Original: core_fire.cpp_loadGunFlashAssets_FUN_004850b0
// Address: 004850b0
void __cdecl loadGunFlashAssets(void);

// Original: core_fire.cpp_CGlassParticle_init_FUN_004850d0
// Address: 004850d0
void __cdecl CGlassParticle::init(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6);

// Original: core_fire.cpp_CGlassParticle_render_FUN_004853c0
// Address: 004853c0
void CGlassParticle::render(float *param_1);

// Original: core_fire.cpp_CGlassParticle_process_FUN_004855c0
// Address: 004855c0
void CGlassParticle::process(int param_1);

// Original: core_fire.cpp_CGlassParticle_onCollision_FUN_00485630
// Address: 00485630
undefined4 CGlassParticle::onCollision(void);

// Original: core_fire.cpp_CBulletTrail_init_FUN_00485640
// Address: 00485640
void CBulletTrail::init(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CBulletTrail_process_FUN_004856a0
// Address: 004856a0
void __cdecl CBulletTrail::process(int param_1);

// Original: core_fire.cpp_CBulletTrail_render_FUN_004856c0
// Address: 004856c0
void __cdecl CBulletTrail::render(float *param_1);

// Original: core_fire.cpp_CLaserBeam_init_FUN_004858f0
// Address: 004858f0
void CLaserBeam::init(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6,int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11);

// Original: core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
// Address: 004859a0
float computeScreenSpaceSize(float param_1,float param_2);

// Original: core_fire.cpp_CLaserBeam_render_FUN_00485a90
// Address: 00485a90
void __cdecl CLaserBeam::render(float *param_1);

// Original: core_fire.cpp_updateTextureAnimCounts_FUN_00486d40
// Address: 00486d40
void __cdecl updateTextureAnimCounts(void);

// Original: core_fire.cpp_CExplosion_ctor_FUN_00486d90
// Address: 00486d90
void __cdecl CExplosion::ctor(int param_1);

// Original: core_fire.cpp_loadDebrisAssets_FUN_00486da0
// Address: 00486da0
void __cdecl loadDebrisAssets(void);

// Original: core_fire.cpp_CExplosion_activate_FUN_00486e40
// Address: 00486e40
void CExplosion::activate(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);

// Original: core_fire.cpp_CExplosion_process_FUN_00486f90
// Address: 00486f90
void __cdecl CExplosion::process(int param_1);

// Original: core_fire.cpp_CExplosion_render_FUN_00486fe0
// Address: 00486fe0
void __cdecl CExplosion::render(int param_1);

// Original: core_fire.cpp_CToss_ctor_FUN_00487370
// Address: 00487370
int CToss::ctor(int param_1);

// Original: core_fire.cpp_CToss_reset_FUN_004873a0
// Address: 004873a0
void __cdecl CToss::reset(int param_1);

// Original: core_fire.cpp_CToss_create_FUN_004873b0
// Address: 004873b0
void CToss::create(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6);

// Original: core_fire.cpp_CToss_process_FUN_004874d0
// Address: 004874d0
void __cdecl CToss::process(int *param_1);

// Original: core_fire.cpp_CToss_render_FUN_00487630
// Address: 00487630
void __cdecl CToss::render(int param_1);

// Original: core_fire.cpp_loadDynamiteAssets_FUN_004876a0
// Address: 004876a0
void __cdecl loadDynamiteAssets(void);

// Original: core_fire.cpp_CCrater_reset_FUN_004876b0
// Address: 004876b0
void __cdecl CCrater::reset(undefined4 *param_1);

// Original: core_fire.cpp_CCrater_activate_FUN_004876d0
// Address: 004876d0
void CCrater::activate(undefined4 *param_1,undefined4 *param_2,float param_3);

// Original: core_fire.cpp_CCrater_process_FUN_00487a20
// Address: 00487a20
void __cdecl CCrater::process(int *param_1);

// Original: core_fire.cpp_CCrater_render_FUN_00487af0
// Address: 00487af0
void __cdecl CCrater::render(int *param_1);

// Original: core_fire.cpp_CCrater_load_FUN_00487d50
// Address: 00487d50
void __cdecl CCrater::load(int param_1,undefined4 param_2);

// Original: core_fire.cpp_CCrater_save_FUN_00487e90
// Address: 00487e90
void __cdecl CCrater::save(undefined4 *param_1,undefined4 param_2);

// Original: core_fire.cpp_initProcess_FUN_00487fd0
// Address: 00487fd0
void __cdecl initProcess(void);

// Original: core_fire.cpp_CGunFlame_init_FUN_004880d0
// Address: 004880d0
void __cdecl CGunFlame::init(int param_1);

// Original: core_fire.cpp_loadGunFlameAssets_FUN_00488220
// Address: 00488220
void __cdecl loadGunFlameAssets(void);

// Original: core_fire.cpp_CGunFlame_reset_FUN_00488270
// Address: 00488270
void __cdecl CGunFlame::reset(undefined4 *param_1);

// Original: core_fire.cpp_CGunFlame_activate_FUN_00488280
// Address: 00488280
void CGunFlame::activate(float *param_1,float *param_2,float *param_3,float param_4);

// Original: core_fire.cpp_CGunFlame_process_FUN_00488430
// Address: 00488430
void __cdecl CGunFlame::process(float *param_1);

// Original: core_fire.cpp_CGunFlame_render_FUN_00488580
// Address: 00488580
void __cdecl CGunFlame::render(float *param_1);

// Original: core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0
// Address: 00488ad0
void __cdecl loadLightningBoltAssets(void);

// Original: core_fire.cpp_CLightningBolt_reset_FUN_00488b00
// Address: 00488b00
void __cdecl CLightningBolt::reset(int param_1);

// Original: core_fire.cpp_CLightningBolt_activate_FUN_00488b10
// Address: 00488b10
void CLightningBolt::activate(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);

// Original: core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50
// Address: 00488b50
void CLightningBolt::activateDirectional(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CLightningBolt_process_FUN_00488bb0
// Address: 00488bb0
void __cdecl CLightningBolt::process(int param_1);

// Original: core_fire.cpp_CLightningBolt_render_FUN_00488bf0
// Address: 00488bf0
void __cdecl CLightningBolt::render(float *param_1);

// Original: core_fire.cpp_CTrail_reset_FUN_004892b0
// Address: 004892b0
void __cdecl CTrail::reset(int param_1);

// Original: core_fire.cpp_CTrail_activate_FUN_004892c0
// Address: 004892c0
void CTrail::activate(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_fire.cpp_CTrail_process_FUN_00489310
// Address: 00489310
void __cdecl CTrail::process(int param_1);

// Original: core_fire.cpp_CTrail_render_FUN_00489360
// Address: 00489360
void __cdecl CTrail::render(int param_1);

// Original: core_fire.cpp_CShell_setup_FUN_00489640
// Address: 00489640
void CShell::setup(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CShell_render_FUN_004896d0
// Address: 004896d0
void CShell::render(float *param_1);

// Original: core_fire.cpp_CShell_process_FUN_004897d0
// Address: 004897d0
void CShell::process(int param_1);

// Original: core_fire.cpp_CShell_onCollision_FUN_00489850
// Address: 00489850
undefined4 CShell::onCollision(int param_1);

// Original: core_fire.cpp_CRainDrop_onCollision_FUN_00489980
// Address: 00489980
undefined4 CRainDrop::onCollision(void);

// Original: core_fire.cpp_FUN_00489990
// Address: 00489990
void FUN_00489990(float *param_1);

// Original: core_fire.cpp_CRainDrop_render_FUN_00489d00
// Address: 00489d00
void CRainDrop::render(float *param_1);

// Original: core_fire.cpp_allocateBulletHole_FUN_0048a0e0
// Address: 0048a0e0
undefined * __cdecl allocateBulletHole(void);

// Original: core_fire.cpp_FUN_0048a130
// Address: 0048a130
undefined4 FUN_0048a130(undefined4 param_1);

// Original: core_fire.cpp_CFireEffect_init_FUN_0048a150
// Address: 0048a150
void __cdecl CFireEffect::init(void);

// Original: core_fire.cpp_CFireEffect_process_FUN_0048a390
// Address: 0048a390
void __cdecl CFireEffect::process(void);

// Original: core_fire.cpp_CFireEffect_render_FUN_0048a650
// Address: 0048a650
void __cdecl CFireEffect::render(void);

// Original: core_fire.cpp_FUN_0048a970
// Address: 0048a970
int FUN_0048a970(undefined4 param_1,int param_2);

// Original: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0
// Address: 0048aae0
void __cdecl CFireEffect::createDefaultSmoke(undefined4 param_1,undefined4 param_2);

// Original: core_fire.cpp_FUN_0048ab60
// Address: 0048ab60
void FUN_0048ab60(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5);

// Original: core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
// Address: 0048ae90
void __cdecl CFireEffect::createSpark(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7);

// Original: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
// Address: 0048af20
void __cdecl CFireEffect::createMuzzleFlash(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70
// Address: 0048af70
void __cdecl CFireEffect::loadAssets(void);

// Original: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
// Address: 0048afe0
void __cdecl CFireEffect::createSmokeParticle(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createStake_FUN_0048b070
// Address: 0048b070
void __cdecl CFireEffect::createStake(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
// Address: 0048b1c0
void __cdecl CFireEffect::createGlassParticle(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
// Address: 0048b270
void __cdecl CFireEffect::createFireball(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createRock_FUN_0048b320
// Address: 0048b320
void __cdecl CFireEffect::createRock(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370
// Address: 0048b370
void __cdecl CFireEffect::createLaserSegment(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);

// Original: core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
// Address: 0048b3e0
void __cdecl CFireEffect::createLaserCone(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);

// Original: core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
// Address: 0048b440
void __cdecl CFireEffect::createLaserPath(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);

// Original: core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
// Address: 0048b6b0
void SLaserInfo::ctor(undefined4 *param_1);

// Original: core_fire.cpp_FUN_0048b6f0
// Address: 0048b6f0
void FUN_0048b6f0(undefined4 param_1,float *param_2,float *param_3,float *param_4,int param_5);

// Original: core_fire.cpp_FUN_0048c0d0
// Address: 0048c0d0
void FUN_0048c0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
// Address: 0048c160
undefined4 __cdecl CFireEffect::getExplosionEffect(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5);

// Original: core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0
// Address: 0048c2a0
void CFireEffect::createToss(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6);

// Original: core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
// Address: 0048c310
int CFireEffect::allocateToss(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
// Address: 0048c370
void __cdecl CFireEffect::createCrater(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
// Address: 0048c3c0
void CFireEffect::createGunFlames(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
// Address: 0048c420
void __cdecl CFireEffect::createLightningBolt(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
// Address: 0048c4a0
void __cdecl CFireEffect::createLightningBoltDirectional(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6);

// Original: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
// Address: 0048c530
void __cdecl CFireEffect::createTrailSegment(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
// Address: 0048c590
int __cdecl CFireEffect::createTrailFromPoints(undefined4 param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
// Address: 0048c6b0
void __cdecl CFireEffect::createShell(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
void __cdecl CFireEffect::createPopcorn(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
// Address: 0048c760
void __cdecl CFireEffect::createRainDrop(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_fire.cpp_CFireEffect_load_FUN_0048c7d0
// Address: 0048c7d0
void __cdecl CFireEffect::load(undefined4 param_1,undefined4 param_2);

// Original: core_fire.cpp_CFireEffect_save_FUN_0048c850
// Address: 0048c850
void __cdecl CFireEffect::save(undefined4 param_1,undefined4 param_2);

// Original: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
// Address: 0048c8a0
undefined4 CFireEffect::hasActiveMuzzleFlash(void);

// Original: core_fire.cpp_FUN_0048c8d0
// Address: 0048c8d0
void FUN_0048c8d0(void);

// Original: core_fire.cpp_FUN_0048c920
// Address: 0048c920
int FUN_0048c920(void);

// Original: core_fire.cpp_FUN_0048c930
// Address: 0048c930
void FUN_0048c930(void);

// Original: core_fire.cpp_FUN_0048c93c
// Address: 0048c93c
void FUN_0048c93c(undefined4 *param_1);

// Original: core_fire.cpp_FUN_0048c960
// Address: 0048c960
void FUN_0048c960(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c980
// Address: 0048c980
void FUN_0048c980(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c990
// Address: 0048c990
void FUN_0048c990(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c9b0
// Address: 0048c9b0
void FUN_0048c9b0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c9c0
// Address: 0048c9c0
void FUN_0048c9c0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c9e0
// Address: 0048c9e0
void FUN_0048c9e0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048c9f0
// Address: 0048c9f0
undefined4 FUN_0048c9f0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ca00
// Address: 0048ca00
undefined4 FUN_0048ca00(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ca10
// Address: 0048ca10
undefined4 FUN_0048ca10(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ca20
// Address: 0048ca20
undefined4 FUN_0048ca20(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ca30
// Address: 0048ca30
undefined4 FUN_0048ca30(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ca40
// Address: 0048ca40
undefined4 FUN_0048ca40(undefined4 param_1);

// Original: core_fire.cpp_CCrater_ctor_FUN_0048ca50
// Address: 0048ca50
int CCrater::ctor(int param_1);

// Original: core_fire.cpp_CCrater_dtor_FUN_0048ca70
// Address: 0048ca70
int CCrater::dtor(int param_1);

// Original: core_fire.cpp_CToss_dtor_FUN_0048ca90
// Address: 0048ca90
int CToss::dtor(int param_1);

// Original: core_fire.cpp_CExplosion_dtor_FUN_0048cab0
// Address: 0048cab0
undefined4 CExplosion::dtor(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cac0
// Address: 0048cac0
undefined4 FUN_0048cac0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cad0
// Address: 0048cad0
undefined4 FUN_0048cad0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cae0
// Address: 0048cae0
undefined4 FUN_0048cae0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048caf0
// Address: 0048caf0
undefined4 FUN_0048caf0(undefined4 param_1);

// Original: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
// Address: 0048cb00
int CGlassParticle::ctor(undefined4 param_1);

// Original: core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30
// Address: 0048cb30
void CGlassParticle::dtor(int param_1);

// Original: core_fire.cpp_FUN_0048cb60
// Address: 0048cb60
undefined4 FUN_0048cb60(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cb70
// Address: 0048cb70
undefined4 FUN_0048cb70(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cb80
// Address: 0048cb80
void FUN_0048cb80(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cba0
// Address: 0048cba0
void FUN_0048cba0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cbb0
// Address: 0048cbb0
void FUN_0048cbb0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cbd0
// Address: 0048cbd0
void FUN_0048cbd0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cbe0
// Address: 0048cbe0
void FUN_0048cbe0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cc00
// Address: 0048cc00
void FUN_0048cc00(undefined4 param_1);

// Original: core_fire.cpp_CStake_ctor_FUN_0048cc10
// Address: 0048cc10
int CStake::ctor(int param_1);

// Original: core_fire.cpp_CStake_dtor_FUN_0048cc30
// Address: 0048cc30
int CStake::dtor(int param_1);

// Original: core_fire.cpp_FUN_0048cc50
// Address: 0048cc50
undefined4 FUN_0048cc50(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cc60
// Address: 0048cc60
undefined4 FUN_0048cc60(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cc70
// Address: 0048cc70
undefined4 FUN_0048cc70(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cc80
// Address: 0048cc80
undefined4 FUN_0048cc80(undefined4 param_1);

// Original: core_fire.cpp_CKeyFramedModelInstance_dtor_FUN_0048cc90
// Address: 0048cc90
undefined4 CKeyFramedModelInstance::dtor(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cca0
// Address: 0048cca0
void FUN_0048cca0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ccc0
// Address: 0048ccc0
void FUN_0048ccc0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cce0
// Address: 0048cce0
void FUN_0048cce0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cd00
// Address: 0048cd00
void FUN_0048cd00(void);

// Original: core_fire.cpp_FUN_0048cd20
// Address: 0048cd20
void FUN_0048cd20(void);

// Original: core_fire.cpp_FUN_0048cd40
// Address: 0048cd40
void FUN_0048cd40(void);

// Original: core_fire.cpp_FUN_0048cd60
// Address: 0048cd60
void FUN_0048cd60(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cd80
// Address: 0048cd80
void FUN_0048cd80(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cda0
// Address: 0048cda0
void FUN_0048cda0(void);

// Original: core_fire.cpp_FUN_0048cdc0
// Address: 0048cdc0
void FUN_0048cdc0(void);

// Original: core_fire.cpp_FUN_0048cde0
// Address: 0048cde0
void FUN_0048cde0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ce00
// Address: 0048ce00
void FUN_0048ce00(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ce20
// Address: 0048ce20
void FUN_0048ce20(void);

// Original: core_fire.cpp_FUN_0048ce40
// Address: 0048ce40
void FUN_0048ce40(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048ce60
// Address: 0048ce60
void FUN_0048ce60(void);

// Original: core_fire.cpp_FUN_0048ce80
// Address: 0048ce80
void FUN_0048ce80(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cea0
// Address: 0048cea0
void FUN_0048cea0(undefined4 param_1);

// Original: core_fire.cpp_FUN_0048cec0
// Address: 0048cec0
void FUN_0048cec0(void);

// Original: core_fire.cpp_FUN_0048cee0
// Address: 0048cee0
void FUN_0048cee0(void);

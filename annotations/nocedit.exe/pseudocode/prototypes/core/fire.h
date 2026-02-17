#pragma once

// Function prototypes for core/fire.cpp
// Generated from Ghidra function signatures

// Original: core_fire.cpp_staticInit_FUN_004bef20
// Address: 004bef20
void __cdecl staticInit(void);

// Original: core_fire.cpp_FUN_004bf1a0
// Address: 004bf1a0
float __cdecl FUN_004bf1a0(void);

// Original: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0
// Address: 004bf1f0
int __cdecl CSmokeParticle::setupRenderState(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_reset_FUN_004bf2e0
// Address: 004bf2e0
void __cdecl CSmokeParticle::reset(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
// Address: 004bf2f0
void __cdecl CSmokeParticle::init(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);

// Original: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
// Address: 004bf390
void __cdecl CSmokeParticle::process(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
// Address: 004bf4c0
void __cdecl CSmokeParticle::render(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CBulletHole_init_FUN_004bf7f0
// Address: 004bf7f0
void __cdecl CBulletHole::init(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor);

// Original: core_fire.cpp_CBulletHole_process_FUN_004bfa00
// Address: 004bfa00
void __cdecl CBulletHole::process(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_setupRenderState_FUN_004bfa40
// Address: 004bfa40
void __cdecl CBulletHole::setupRenderState(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_render_FUN_004bfac0
// Address: 004bfac0
void __cdecl CBulletHole::render(CBulletHole *this_ptr);

// Original: core_fire.cpp_loadStakeAssets_FUN_004bfe00
// Address: 004bfe00
void __cdecl loadStakeAssets(void);

// Original: core_fire.cpp_CStake_init_FUN_004bfe20
// Address: 004bfe20
void __cdecl CStake::init(CStake *this_ptr,CVector3f *position,CVector3f *orientation);

// Original: core_fire.cpp_CStake_spawn_FUN_004bfe90
// Address: 004bfe90
void __cdecl CStake::spawn(CStake *this_ptr,float spawn_scale,CVector3f *orientation_angles,CVector3f *launch_direction,CVector3f *spawn_position,CVector3f *spawn_velocity);

// Original: core_fire.cpp_CStake_render_FUN_004c0140
// Address: 004c0140
void __cdecl CStake::render(CStake *this_ptr);

// Original: core_fire.cpp_CStake_process_FUN_004c0210
// Address: 004c0210
void __cdecl CStake::process(CStake *this_ptr);

// Original: core_fire.cpp_CSpark_process_FUN_004c0240
// Address: 004c0240
void __cdecl CSpark::process(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_setupRenderState_FUN_004c0300
// Address: 004c0300
int __cdecl CSpark::setupRenderState(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_render_FUN_004c0420
// Address: 004c0420
void __cdecl CSpark::render(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_onCollision_FUN_004c0ac0
// Address: 004c0ac0
int __cdecl CSpark::onCollision(CSpark *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_loadFireBallAssets_FUN_004c0ad0
// Address: 004c0ad0
void __cdecl loadFireBallAssets(void);

// Original: core_fire.cpp_CFireball_process_FUN_004c0b30
// Address: 004c0b30
void __cdecl CFireball::process(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_setupRenderState_FUN_004c0d80
// Address: 004c0d80
int __cdecl CFireball::setupRenderState(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_render_FUN_004c0e70
// Address: 004c0e70
void __cdecl CFireball::render(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_onCollision_FUN_004c1690
// Address: 004c1690
int __cdecl CFireball::onCollision(CFireball *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_FUN_004c17c0
// Address: 004c17c0
void __cdecl FUN_004c17c0(void);

// Original: core_fire.cpp_loadRockAssets_FUN_004c17e0
// Address: 004c17e0
void __cdecl loadRockAssets(void);

// Original: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
void __cdecl CRock::process(CRock *this_ptr);

// Original: core_fire.cpp_CRock_render_FUN_004c1870
// Address: 004c1870
void __cdecl CRock::render(CRock *this_ptr);

// Original: core_fire.cpp_FUN_004c1940
// Address: 004c1940
void __cdecl FUN_004c1940(void);

// Original: core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
// Address: 004c1a00
void __cdecl CMuzzleFlash::process(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// Address: 004c1a30
void __cdecl CMuzzleFlash::render(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_loadGunFlashAssets_FUN_004c1be0
// Address: 004c1be0
void __cdecl loadGunFlashAssets(void);

// Original: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// Address: 004c1c00
void __cdecl CGlassParticle::init(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);

// Original: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
// Address: 004c1ef0
void __cdecl CGlassParticle::render(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_process_FUN_004c20f0
// Address: 004c20f0
void __cdecl CGlassParticle::process(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_onCollision_FUN_004c2160
// Address: 004c2160
int __cdecl CGlassParticle::onCollision(CGlassParticle *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_FUN_004c2170
// Address: 004c2170
void __cdecl FUN_004c2170(void);

// Original: core_fire.cpp_CBulletTrail_process_FUN_004c21d0
// Address: 004c21d0
void __cdecl CBulletTrail::process(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
// Address: 004c21f0
void __cdecl CBulletTrail::render(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CLaserBeam_FUN_004c2420
// Address: 004c2420
void __cdecl CLaserBeam(CLaserBeam *this_ptr);

// Original: core_fire.cpp_FUN_004c24d0
// Address: 004c24d0
float __cdecl FUN_004c24d0(void);

// Original: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
void __cdecl CLaserBeam::render(CLaserBeam *this_ptr);

// Original: core_fire.cpp_FUN_004c3870
// Address: 004c3870
void __cdecl FUN_004c3870(void);

// Original: core_fire.cpp_CExplosion_ctor_FUN_004c38c0
// Address: 004c38c0
CExplosion * __cdecl CExplosion::ctor(CExplosion *this_ptr);

// Original: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
// Address: 004c38d0
void __cdecl loadDebrisAssets(void);

// Original: core_fire.cpp_CExplosion_FUN_004c3970
// Address: 004c3970
void __cdecl CExplosion(CExplosion *this_ptr);

// Original: core_fire.cpp_CExplosion_process_FUN_004c3ac0
// Address: 004c3ac0
void __cdecl CExplosion::process(CExplosion *this_ptr);

// Original: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
void __cdecl CExplosion::render(CExplosion *this_ptr);

// Original: core_fire.cpp_CToss_ctor_FUN_004c3ea0
// Address: 004c3ea0
CToss * __cdecl CToss::ctor(CToss *this_ptr);

// Original: core_fire.cpp_CToss_reset_FUN_004c3ed0
// Address: 004c3ed0
void __cdecl CToss::reset(CToss *this_ptr);

// Original: core_fire.cpp_CToss_create_FUN_004c3ee0
// Address: 004c3ee0
void __cdecl CToss::create(CToss *this_ptr);

// Original: core_fire.cpp_CToss_process_FUN_004c4000
// Address: 004c4000
void __cdecl CToss::process(CToss *this_ptr);

// Original: core_fire.cpp_CToss_render_FUN_004c4160
// Address: 004c4160
void __cdecl CToss::render(CToss *this_ptr);

// Original: core_fire.cpp_loadDynamiteAssets_FUN_004c41d0
// Address: 004c41d0
void __cdecl loadDynamiteAssets(void);

// Original: core_fire.cpp_CCrater_reset_FUN_004c41e0
// Address: 004c41e0
void __cdecl CCrater::reset(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_FUN_004c4200
// Address: 004c4200
void __cdecl CCrater(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_process_FUN_004c4550
// Address: 004c4550
void __cdecl CCrater::process(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_render_FUN_004c4620
// Address: 004c4620
void __cdecl CCrater::render(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
void __cdecl CCrater::load(CCrater *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CCrater_save_FUN_004c49c0
// Address: 004c49c0
void __cdecl CCrater::save(CCrater *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
// Address: 004c4b00
void __cdecl CGunFlame::initProcess(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_FUN_004c4c00
// Address: 004c4c00
void __cdecl CGunFlame(CGunFlame *this_ptr);

// Original: core_fire.cpp_loadGunFlameAssets_FUN_004c4d50
// Address: 004c4d50
void __cdecl loadGunFlameAssets(void);

// Original: core_fire.cpp_CGunFlame_reset_FUN_004c4da0
// Address: 004c4da0
void __cdecl CGunFlame::reset(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_FUN_004c4db0
// Address: 004c4db0
void __cdecl CGunFlame(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_process_FUN_004c4f60
// Address: 004c4f60
void __cdecl CGunFlame::process(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_render_FUN_004c50b0
// Address: 004c50b0
void __cdecl CGunFlame::render(CGunFlame *this_ptr);

// Original: core_fire.cpp_loadLightningBoltAssets_FUN_004c5600
// Address: 004c5600
void __cdecl loadLightningBoltAssets(void);

// Original: core_fire.cpp_CLightningBolt_reset_FUN_004c5630
// Address: 004c5630
void __cdecl CLightningBolt::reset(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_FUN_004c5640
// Address: 004c5640
void __cdecl CLightningBolt(CLightningBolt *this_ptr);

// Original: core_fire.cpp_FUN_004c5680
// Address: 004c5680
void __cdecl FUN_004c5680(void);

// Original: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
// Address: 004c56e0
void __cdecl CLightningBolt::process(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_render_FUN_004c5720
// Address: 004c5720
void __cdecl CLightningBolt::render(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CTrail_reset_FUN_004c5de0
// Address: 004c5de0
void __cdecl CTrail::reset(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_FUN_004c5df0
// Address: 004c5df0
void __cdecl CTrail(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_process_FUN_004c5e40
// Address: 004c5e40
void __cdecl CTrail::process(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_render_FUN_004c5e90
// Address: 004c5e90
void __cdecl CTrail::render(CTrail *this_ptr);

// Original: core_fire.cpp_FUN_004c6170
// Address: 004c6170
void __cdecl FUN_004c6170(void);

// Original: core_fire.cpp_CShell_render_FUN_004c6200
// Address: 004c6200
void __cdecl CShell::render(CShell *this_ptr);

// Original: core_fire.cpp_CShell_process_FUN_004c6300
// Address: 004c6300
void __cdecl CShell::process(CShell *this_ptr);

// Original: core_fire.cpp_CShell_onCollision_FUN_004c6380
// Address: 004c6380
int __cdecl CShell::onCollision(CShell *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CRainDrop_onCollision_FUN_004c64b0
// Address: 004c64b0
int __cdecl CRainDrop::onCollision(CRainDrop *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CPopcorn_render_FUN_004c64c0
// Address: 004c64c0
void __cdecl CPopcorn::render(CPopcorn *this_ptr);

// Original: core_fire.cpp_CRainDrop_render_FUN_004c6830
// Address: 004c6830
void __cdecl CRainDrop::render(CRainDrop *this_ptr);

// Original: core_fire.cpp_allocateSmokeParticle_FUN_004c6be0
// Address: 004c6be0
CSmokeParticle * __cdecl allocateSmokeParticle(void);

// Original: core_fire.cpp_allocateBulletHole_FUN_004c6c10
// Address: 004c6c10
CBulletHole * __cdecl allocateBulletHole(void);

// Original: core_fire.cpp_CFireEffect_ctor_FUN_004c6c60
// Address: 004c6c60
CFireEffect * __cdecl CFireEffect::ctor(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_init_FUN_004c6c80
// Address: 004c6c80
void __cdecl CFireEffect::init(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_process_FUN_004c6ec0
// Address: 004c6ec0
void __cdecl CFireEffect::process(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_render_FUN_004c7180
// Address: 004c7180
void __cdecl CFireEffect::render(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
// Address: 004c74a0
void __cdecl CFireEffect::renderDecals(CFireEffect *this_ptr,int render_mode,int render_completeness);

// Original: core_fire.cpp_CFireEffect_FUN_004c7620
// Address: 004c7620
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c76a0
// Address: 004c76a0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c79d0
// Address: 004c79d0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7a60
// Address: 004c7a60
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
// Address: 004c7ab0
void __cdecl CFireEffect::loadAssets(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
// Address: 004c7b20
void __cdecl CFireEffect::createSmokeParticle(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);

// Original: core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0
// Address: 004c7bb0
void __cdecl CFireEffect::createStake(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int material_type);

// Original: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00
// Address: 004c7d00
void __cdecl CFireEffect::createGlassParticle(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);

// Original: core_fire.cpp_CFireEffect_FUN_004c7d60
// Address: 004c7d60
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7db0
// Address: 004c7db0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7e60
// Address: 004c7e60
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7eb0
// Address: 004c7eb0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7f20
// Address: 004c7f20
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c7f80
// Address: 004c7f80
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
// Address: 004c81f0
SLaserInfo * __cdecl SLaserInfo::ctor(SLaserInfo *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8230
// Address: 004c8230
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_createExplosion_FUN_004c8c10
// Address: 004c8c10
void __cdecl CFireEffect::createExplosion(CFireEffect *this_ptr,CVector3f *position);

// Original: core_fire.cpp_CFireEffect_FUN_004c8c90
// Address: 004c8c90
int __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8dd0
// Address: 004c8dd0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8e40
// Address: 004c8e40
int __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8ea0
// Address: 004c8ea0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8ef0
// Address: 004c8ef0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8f50
// Address: 004c8f50
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c8fd0
// Address: 004c8fd0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c9060
// Address: 004c9060
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c90c0
// Address: 004c90c0
int __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c91e0
// Address: 004c91e0
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c9240
// Address: 004c9240
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_004c9290
// Address: 004c9290
void __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_load_FUN_004c9300
// Address: 004c9300
void __cdecl CFireEffect::load(CFireEffect *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CFireEffect_save_FUN_004c9380
// Address: 004c9380
void __cdecl CFireEffect::save(CFireEffect *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CFireEffect_FUN_004c93d0
// Address: 004c93d0
int __cdecl CFireEffect(CFireEffect *this_ptr);

// Original: core_fire.cpp_FUN_004c9400
// Address: 004c9400
void __cdecl FUN_004c9400(void);

// Original: core_fire.cpp_FUN_004c9450
// Address: 004c9450
int __cdecl FUN_004c9450(void);

// Original: core_fire.cpp_FUN_004c9460
// Address: 004c9460
void __cdecl FUN_004c9460(void);

// Original: core_fire.cpp_FUN_004c9470
// Address: 004c9470
void __cdecl FUN_004c9470(void);

// Original: core_fire.cpp_FUN_004c9480
// Address: 004c9480
void __cdecl FUN_004c9480(void);

// Original: core_fire.cpp_CRainDrop_ctor_FUN_004c9490
// Address: 004c9490
CRainDrop * __cdecl CRainDrop::ctor(CRainDrop *this_ptr);

// Original: core_fire.cpp_CRainDrop_dtor_FUN_004c94b0
// Address: 004c94b0
CRainDrop * __cdecl CRainDrop::dtor(CRainDrop *this_ptr,uint flags);

// Original: core_fire.cpp_CPopcorn_ctor_FUN_004c94c0
// Address: 004c94c0
CPopcorn * __cdecl CPopcorn::ctor(CPopcorn *this_ptr);

// Original: core_fire.cpp_CPopcorn_dtor_FUN_004c94e0
// Address: 004c94e0
CPopcorn * __cdecl CPopcorn::dtor(CPopcorn *this_ptr,uint flags);

// Original: core_fire.cpp_CShell_ctor_FUN_004c94f0
// Address: 004c94f0
CShell * __cdecl CShell::ctor(CShell *this_ptr);

// Original: core_fire.cpp_CShell_dtor_FUN_004c9510
// Address: 004c9510
CShell * __cdecl CShell::dtor(CShell *this_ptr,uint flags);

// Original: core_fire.cpp_CTrail_ctor_FUN_004c9520
// Address: 004c9520
CTrail * __cdecl CTrail::ctor(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_dtor_FUN_004c9530
// Address: 004c9530
CTrail * __cdecl CTrail::dtor(CTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CLightningBolt_ctor_FUN_004c9540
// Address: 004c9540
CLightningBolt * __cdecl CLightningBolt::ctor(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_dtor_FUN_004c9550
// Address: 004c9550
CLightningBolt * __cdecl CLightningBolt::dtor(CLightningBolt *this_ptr,uint flags);

// Original: core_fire.cpp_CGunFlame_ctor_FUN_004c9560
// Address: 004c9560
CGunFlame * __cdecl CGunFlame::ctor(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_dtor_FUN_004c9570
// Address: 004c9570
CGunFlame * __cdecl CGunFlame::dtor(CGunFlame *this_ptr,uint flags);

// Original: core_fire.cpp_CCrater_ctor_FUN_004c9580
// Address: 004c9580
CCrater * __cdecl CCrater::ctor(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_dtor_FUN_004c95a0
// Address: 004c95a0
CCrater * __cdecl CCrater::dtor(CCrater *this_ptr,uint flags);

// Original: core_fire.cpp_CToss_dtor_FUN_004c95c0
// Address: 004c95c0
CToss * __cdecl CToss::dtor(CToss *this_ptr,uint flags);

// Original: core_fire.cpp_CExplosion_dtor_FUN_004c95e0
// Address: 004c95e0
CExplosion * __cdecl CExplosion::dtor(CExplosion *this_ptr,uint flags);

// Original: core_fire.cpp_CLaserBeam_ctor_FUN_004c95f0
// Address: 004c95f0
CLaserBeam * __cdecl CLaserBeam::ctor(CLaserBeam *this_ptr);

// Original: core_fire.cpp_CLaserBeam_dtor_FUN_004c9600
// Address: 004c9600
CLaserBeam * __cdecl CLaserBeam::dtor(CLaserBeam *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletTrail_ctor_FUN_004c9610
// Address: 004c9610
CBulletTrail * __cdecl CBulletTrail::ctor(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CBulletTrail_dtor_FUN_004c9620
// Address: 004c9620
CBulletTrail * __cdecl CBulletTrail::dtor(CBulletTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CGlassParticle_ctor_FUN_004c9630
// Address: 004c9630
CGlassParticle * __cdecl CGlassParticle::ctor(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_dtor_FUN_004c9660
// Address: 004c9660
CGlassParticle * __cdecl CGlassParticle::dtor(CGlassParticle *this_ptr,uint flags);

// Original: core_fire.cpp_CMuzzleFlash_ctor_FUN_004c9690
// Address: 004c9690
CMuzzleFlash * __cdecl CMuzzleFlash::ctor(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_CMuzzleFlash_dtor_FUN_004c96a0
// Address: 004c96a0
CMuzzleFlash * __cdecl CMuzzleFlash::dtor(CMuzzleFlash *this_ptr,uint flags);

// Original: core_fire.cpp_CRock_ctor_FUN_004c96b0
// Address: 004c96b0
CRock * __cdecl CRock::ctor(CRock *this_ptr);

// Original: core_fire.cpp_CRock_dtor_FUN_004c96d0
// Address: 004c96d0
CRock * __cdecl CRock::dtor(CRock *this_ptr,uint flags);

// Original: core_fire.cpp_CFireball_ctor_FUN_004c96e0
// Address: 004c96e0
CFireball * __cdecl CFireball::ctor(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_dtor_FUN_004c9700
// Address: 004c9700
CFireball * __cdecl CFireball::dtor(CFireball *this_ptr,uint flags);

// Original: core_fire.cpp_CSpark_ctor_FUN_004c9710
// Address: 004c9710
CSpark * __cdecl CSpark::ctor(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_dtor_FUN_004c9730
// Address: 004c9730
CSpark * __cdecl CSpark::dtor(CSpark *this_ptr,uint flags);

// Original: core_fire.cpp_CStake_ctor_FUN_004c9740
// Address: 004c9740
CStake * __cdecl CStake::ctor(CStake *this_ptr);

// Original: core_fire.cpp_CStake_dtor_FUN_004c9760
// Address: 004c9760
CStake * __cdecl CStake::dtor(CStake *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletHole_ctor_FUN_004c9780
// Address: 004c9780
CBulletHole * __cdecl CBulletHole::ctor(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_dtor_FUN_004c9790
// Address: 004c9790
CBulletHole * __cdecl CBulletHole::dtor(CBulletHole *this_ptr,uint flags);

// Original: core_fire.cpp_CSmokeParticle_ctor_FUN_004c97a0
// Address: 004c97a0
CSmokeParticle * __cdecl CSmokeParticle::ctor(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_dtor_FUN_004c97b0
// Address: 004c97b0
CSmokeParticle * __cdecl CSmokeParticle::dtor(CSmokeParticle *this_ptr,uint flags);

// Original: core_fire.cpp_CKeyFramedModelInstance_dtor_FUN_004c97c0
// Address: 004c97c0
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::dtor(CKeyFramedModelInstance *this_ptr,uint flags);

// Original: core_fire.cpp_CRainDrop_arrdtor_FUN_004c97d0
// Address: 004c97d0
CRainDrop * __cdecl CRainDrop::arrdtor(CRainDrop *objs,uint flags);

// Original: core_fire.cpp_CPopcorn_arrdtor_FUN_004c97f0
// Address: 004c97f0
CPopcorn * __cdecl CPopcorn::arrdtor(CPopcorn *objs,uint flags);

// Original: core_fire.cpp_CShell_arrdtor_FUN_004c9810
// Address: 004c9810
CShell * __cdecl CShell::arrdtor(CShell *objs,uint flags);

// Original: core_fire.cpp_CTrail_arrdtor_FUN_004c9830
// Address: 004c9830
CTrail * __cdecl CTrail::arrdtor(CTrail *objs,uint flags);

// Original: core_fire.cpp_CLightningBolt_arrdtor_FUN_004c9850
// Address: 004c9850
CLightningBolt * __cdecl CLightningBolt::arrdtor(CLightningBolt *objs,uint flags);

// Original: core_fire.cpp_CGunFlame_arrdtor_FUN_004c9870
// Address: 004c9870
CGunFlame * __cdecl CGunFlame::arrdtor(CGunFlame *objs,uint flags);

// Original: core_fire.cpp_CCrater_arrdtor_FUN_004c9890
// Address: 004c9890
CCrater * __cdecl CCrater::arrdtor(CCrater *objs,uint flags);

// Original: core_fire.cpp_CToss_arrdtor_FUN_004c98b0
// Address: 004c98b0
CToss * __cdecl CToss::arrdtor(CToss *objs,uint flags);

// Original: core_fire.cpp_CExplosion_arrdtor_FUN_004c98d0
// Address: 004c98d0
CExplosion * __cdecl CExplosion::arrdtor(CExplosion *objs,uint flags);

// Original: core_fire.cpp_CLaserBeam_arrdtor_FUN_004c98f0
// Address: 004c98f0
CLaserBeam * __cdecl CLaserBeam::arrdtor(CLaserBeam *objs,uint flags);

// Original: core_fire.cpp_CRock_arrdtor_FUN_004c9910
// Address: 004c9910
CRock * __cdecl CRock::arrdtor(CRock *objs,uint flags);

// Original: core_fire.cpp_CFireball_arrdtor_FUN_004c9930
// Address: 004c9930
CFireball * __cdecl CFireball::arrdtor(CFireball *objs,uint flags);

// Original: core_fire.cpp_CBulletTrail_arrdtor_FUN_004c9950
// Address: 004c9950
CBulletTrail * __cdecl CBulletTrail::arrdtor(CBulletTrail *objs,uint flags);

// Original: core_fire.cpp_CGlassParticle_arrdtor_FUN_004c9970
// Address: 004c9970
CGlassParticle * __cdecl CGlassParticle::arrdtor(CGlassParticle *objs,uint flags);

// Original: core_fire.cpp_CMuzzleFlash_arrdtor_FUN_004c9990
// Address: 004c9990
CMuzzleFlash * __cdecl CMuzzleFlash::arrdtor(CMuzzleFlash *objs,uint flags);

// Original: core_fire.cpp_CSpark_arrdtor_FUN_004c99b0
// Address: 004c99b0
CSpark * __cdecl CSpark::arrdtor(CSpark *objs,uint flags);

// Original: core_fire.cpp_CStake_arrdtor_FUN_004c99d0
// Address: 004c99d0
CStake * __cdecl CStake::arrdtor(CStake *objs,uint flags);

// Original: core_fire.cpp_CBulletHole_arrdtor_FUN_004c99f0
// Address: 004c99f0
CBulletHole * __cdecl CBulletHole::arrdtor(CBulletHole *objs,uint flags);

// Original: core_fire.cpp_CSmokeParticle_arrdtor_FUN_004c9a10
// Address: 004c9a10
CSmokeParticle * __cdecl CSmokeParticle::arrdtor(CSmokeParticle *objs,uint flags);

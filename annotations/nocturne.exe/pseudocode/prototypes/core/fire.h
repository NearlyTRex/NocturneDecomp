#pragma once

// Function prototypes for core/fire.cpp
// Generated from Ghidra function signatures

// Original: core_fire.cpp_staticInit_FUN_004823b0
// Address: 004823b0
void __cdecl staticInit(void);

// Original: core_fire.cpp_safeAcos_FUN_00482630
// Address: 00482630
float __cdecl safeAcos(float value);

// Original: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680
// Address: 00482680
void __cdecl CSmokeParticle::setupRenderState(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_reset_FUN_00482770
// Address: 00482770
void __cdecl CSmokeParticle::reset(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_init_FUN_00482780
// Address: 00482780
void __cdecl CSmokeParticle::init(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);

// Original: core_fire.cpp_CSmokeParticle_process_FUN_00482820
// Address: 00482820
void __cdecl CSmokeParticle::process(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_render_FUN_00482950
// Address: 00482950
void __cdecl CSmokeParticle::render(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CBulletHole_init_FUN_00482c80
// Address: 00482c80
void __cdecl CBulletHole::init(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor);

// Original: core_fire.cpp_CBulletHole_process_FUN_00482e90
// Address: 00482e90
void __cdecl CBulletHole::process(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
// Address: 00482ed0
void __cdecl CBulletHole::setupRenderState(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_render_FUN_00482f50
// Address: 00482f50
void __cdecl CBulletHole::render(CBulletHole *this_ptr);

// Original: core_fire.cpp_loadStakeAssets_FUN_00483290
// Address: 00483290
void __cdecl loadStakeAssets(void);

// Original: core_fire.cpp_CStake_init_FUN_004832b0
// Address: 004832b0
void __cdecl CStake::init(CStake *this_ptr,CVector3f *position,CVector3f *orientation);

// Original: core_fire.cpp_CStake_spawn_FUN_00483320
// Address: 00483320
void __cdecl CStake::spawn(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal);

// Original: core_fire.cpp_CStake_render_FUN_004835d0
// Address: 004835d0
void __cdecl CStake::render(CStake *this_ptr);

// Original: core_fire.cpp_CStake_process_FUN_004836b0
// Address: 004836b0
void __cdecl CStake::process(CStake *this_ptr);

// Original: core_fire.cpp_CSpark_process_FUN_004836e0
// Address: 004836e0
void __cdecl CSpark::process(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
// Address: 004837a0
void __cdecl CSpark::setupRenderState(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_render_FUN_004838c0
// Address: 004838c0
void __cdecl CSpark::render(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_onCollision_FUN_00483fe0
// Address: 00483fe0
int __cdecl CSpark::onCollision(CSpark *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_loadFireBallAssets_FUN_00483ff0
// Address: 00483ff0
void __cdecl loadFireBallAssets(void);

// Original: core_fire.cpp_CFireball_process_FUN_00484050
// Address: 00484050
void __cdecl CFireball::process(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_setupRenderState_FUN_004842a0
// Address: 004842a0
void __cdecl CFireball::setupRenderState(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_render_FUN_00484390
// Address: 00484390
void __cdecl CFireball::render(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_onCollision_FUN_00484b60
// Address: 00484b60
int __cdecl CFireball::onCollision(CFireball *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CRock_setup_FUN_00484c90
// Address: 00484c90
void __cdecl CRock::setup(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr);

// Original: core_fire.cpp_loadRockAssets_FUN_00484cb0
// Address: 00484cb0
void __cdecl loadRockAssets(void);

// Original: core_fire.cpp_CRock_process_FUN_00484cc0
// Address: 00484cc0
void __cdecl CRock::process(CRock *this_ptr);

// Original: core_fire.cpp_CRock_render_FUN_00484d40
// Address: 00484d40
void __cdecl CRock::render(CRock *this_ptr);

// Original: core_fire.cpp_CMuzzleFlash_init_FUN_00484e10
// Address: 00484e10
void __cdecl CMuzzleFlash::init(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix);

// Original: core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0
// Address: 00484ed0
void __cdecl CMuzzleFlash::process(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_CMuzzleFlash_render_FUN_00484f00
// Address: 00484f00
void __cdecl CMuzzleFlash::render(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_loadGunFlashAssets_FUN_004850b0
// Address: 004850b0
void __cdecl loadGunFlashAssets(void);

// Original: core_fire.cpp_CGlassParticle_init_FUN_004850d0
// Address: 004850d0
void __cdecl CGlassParticle::init(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);

// Original: core_fire.cpp_CGlassParticle_render_FUN_004853c0
// Address: 004853c0
void __cdecl CGlassParticle::render(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_process_FUN_004855c0
// Address: 004855c0
void __cdecl CGlassParticle::process(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_onCollision_FUN_00485630
// Address: 00485630
int __cdecl CGlassParticle::onCollision(CGlassParticle *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CBulletTrail_init_FUN_00485640
// Address: 00485640
void __cdecl CBulletTrail::init(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length);

// Original: core_fire.cpp_CBulletTrail_process_FUN_004856a0
// Address: 004856a0
void __cdecl CBulletTrail::process(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CBulletTrail_render_FUN_004856c0
// Address: 004856c0
void __cdecl CBulletTrail::render(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CLaserBeam_init_FUN_004858f0
// Address: 004858f0
void __cdecl CLaserBeam::init(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle);

// Original: core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
// Address: 004859a0
float __cdecl computeScreenSpaceSize(float depth,float min_size);

// Original: core_fire.cpp_CLaserBeam_render_FUN_00485a90
// Address: 00485a90
void __cdecl CLaserBeam::render(CLaserBeam *this_ptr);

// Original: core_fire.cpp_updateTextureAnimCounts_FUN_00486d40
// Address: 00486d40
void __cdecl updateTextureAnimCounts(void);

// Original: core_fire.cpp_CExplosion_ctor_FUN_00486d90
// Address: 00486d90
CExplosion * __cdecl CExplosion::ctor(CExplosion *this_ptr);

// Original: core_fire.cpp_loadDebrisAssets_FUN_00486da0
// Address: 00486da0
void __cdecl loadDebrisAssets(void);

// Original: core_fire.cpp_CExplosion_activate_FUN_00486e40
// Address: 00486e40
void __cdecl CExplosion::activate(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier);

// Original: core_fire.cpp_CExplosion_process_FUN_00486f90
// Address: 00486f90
void __cdecl CExplosion::process(CExplosion *this_ptr);

// Original: core_fire.cpp_CExplosion_render_FUN_00486fe0
// Address: 00486fe0
void __cdecl CExplosion::render(CExplosion *this_ptr);

// Original: core_fire.cpp_CToss_ctor_FUN_00487370
// Address: 00487370
CToss * __cdecl CToss::ctor(CToss *this_ptr);

// Original: core_fire.cpp_CToss_reset_FUN_004873a0
// Address: 004873a0
void __cdecl CToss::reset(CToss *this_ptr);

// Original: core_fire.cpp_CToss_create_FUN_004873b0
// Address: 004873b0
void __cdecl CToss::create(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time);

// Original: core_fire.cpp_CToss_process_FUN_004874d0
// Address: 004874d0
void __cdecl CToss::process(CToss *this_ptr);

// Original: core_fire.cpp_CToss_render_FUN_00487630
// Address: 00487630
void __cdecl CToss::render(CToss *this_ptr);

// Original: core_fire.cpp_loadDynamiteAssets_FUN_004876a0
// Address: 004876a0
void __cdecl loadDynamiteAssets(void);

// Original: core_fire.cpp_CCrater_reset_FUN_004876b0
// Address: 004876b0
void __cdecl CCrater::reset(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_activate_FUN_004876d0
// Address: 004876d0
void __cdecl CCrater::activate(CCrater *this_ptr,CVector3f *center_position,float radius);

// Original: core_fire.cpp_CCrater_process_FUN_00487a20
// Address: 00487a20
void __cdecl CCrater::process(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_render_FUN_00487af0
// Address: 00487af0
void __cdecl CCrater::render(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_load_FUN_00487d50
// Address: 00487d50
void __cdecl CCrater::load(CCrater *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CCrater_save_FUN_00487e90
// Address: 00487e90
void __cdecl CCrater::save(CCrater *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_initProcess_FUN_00487fd0
// Address: 00487fd0
void __cdecl initProcess(void);

// Original: core_fire.cpp_CGunFlame_init_FUN_004880d0
// Address: 004880d0
void __cdecl CGunFlame::init(CGunFlame *this_ptr);

// Original: core_fire.cpp_loadGunFlameAssets_FUN_00488220
// Address: 00488220
void __cdecl loadGunFlameAssets(void);

// Original: core_fire.cpp_CGunFlame_reset_FUN_00488270
// Address: 00488270
void __cdecl CGunFlame::reset(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_activate_FUN_00488280
// Address: 00488280
void __cdecl CGunFlame::activate(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type);

// Original: core_fire.cpp_CGunFlame_process_FUN_00488430
// Address: 00488430
void __cdecl CGunFlame::process(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_render_FUN_00488580
// Address: 00488580
void __cdecl CGunFlame::render(CGunFlame *this_ptr);

// Original: core_fire.cpp_loadLightningBoltAssets_FUN_00488ad0
// Address: 00488ad0
void __cdecl loadLightningBoltAssets(void);

// Original: core_fire.cpp_CLightningBolt_reset_FUN_00488b00
// Address: 00488b00
void __cdecl CLightningBolt::reset(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_activate_FUN_00488b10
// Address: 00488b10
void __cdecl CLightningBolt::activate(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width);

// Original: core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50
// Address: 00488b50
void __cdecl CLightningBolt::activateDirectional(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread);

// Original: core_fire.cpp_CLightningBolt_process_FUN_00488bb0
// Address: 00488bb0
void __cdecl CLightningBolt::process(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_render_FUN_00488bf0
// Address: 00488bf0
void __cdecl CLightningBolt::render(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CTrail_reset_FUN_004892b0
// Address: 004892b0
void __cdecl CTrail::reset(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_activate_FUN_004892c0
// Address: 004892c0
void __cdecl CTrail::activate(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);

// Original: core_fire.cpp_CTrail_process_FUN_00489310
// Address: 00489310
void __cdecl CTrail::process(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_render_FUN_00489360
// Address: 00489360
void __cdecl CTrail::render(CTrail *this_ptr);

// Original: core_fire.cpp_CShell_setup_FUN_00489640
// Address: 00489640
void __cdecl CShell::setup(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr);

// Original: core_fire.cpp_CShell_render_FUN_004896d0
// Address: 004896d0
void __cdecl CShell::render(CShell *this_ptr);

// Original: core_fire.cpp_CShell_process_FUN_004897d0
// Address: 004897d0
void __cdecl CShell::process(CShell *this_ptr);

// Original: core_fire.cpp_CShell_onCollision_FUN_00489850
// Address: 00489850
int __cdecl CShell::onCollision(CShell *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CRainDrop_onCollision_FUN_00489980
// Address: 00489980
int __cdecl CRainDrop::onCollision(CRainDrop *this_ptr,CVector3f *collision_normal);

// Original: core_fire.cpp_CPopcorn_render_FUN_00489990
// Address: 00489990
void __cdecl CPopcorn::render(CPopcorn *this_ptr);

// Original: core_fire.cpp_CRainDrop_render_FUN_00489d00
// Address: 00489d00
void __cdecl CRainDrop::render(CRainDrop *this_ptr);

// Original: core_fire.cpp_allocateBulletHole_FUN_0048a0e0
// Address: 0048a0e0
CBulletHole * __cdecl allocateBulletHole(void);

// Original: core_fire.cpp_CFireEffect_ctor_FUN_0048a130
// Address: 0048a130
CFireEffect * __cdecl CFireEffect::ctor(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_init_FUN_0048a150
// Address: 0048a150
void __cdecl CFireEffect::init(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_process_FUN_0048a390
// Address: 0048a390
void __cdecl CFireEffect::process(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_render_FUN_0048a650
// Address: 0048a650
void __cdecl CFireEffect::render(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970
// Address: 0048a970
void __cdecl CFireEffect::renderDecals(CFireEffect *this_ptr,int render_mode,int render_completeness);

// Original: core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0
// Address: 0048aae0
void __cdecl CFireEffect::createDefaultSmoke(CFireEffect *this_ptr,CVector3f *position);

// Original: core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60
// Address: 0048ab60
void __cdecl CFireEffect::createBulletImpact(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor);

// Original: core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
// Address: 0048ae90
void __cdecl CFireEffect::createSpark(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate);

// Original: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
// Address: 0048af20
void __cdecl CFireEffect::createMuzzleFlash(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix);

// Original: core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70
// Address: 0048af70
void __cdecl CFireEffect::loadAssets(CFireEffect *this_ptr);

// Original: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
// Address: 0048afe0
void __cdecl CFireEffect::createSmokeParticle(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);

// Original: core_fire.cpp_CFireEffect_createStake_FUN_0048b070
// Address: 0048b070
void __cdecl CFireEffect::createStake(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type);

// Original: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
// Address: 0048b1c0
void __cdecl CFireEffect::createGlassParticle(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);

// Original: core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
// Address: 0048b270
void __cdecl CFireEffect::createFireball(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle);

// Original: core_fire.cpp_CFireEffect_createRock_FUN_0048b320
// Address: 0048b320
void __cdecl CFireEffect::createRock(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr);

// Original: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370
// Address: 0048b370
void __cdecl CFireEffect::createLaserSegment(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread);

// Original: core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
// Address: 0048b3e0
void __cdecl CFireEffect::createLaserCone(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle);

// Original: core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
// Address: 0048b440
void __cdecl CFireEffect::createLaserPath(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue);

// Original: core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
// Address: 0048b6b0
SLaserInfo * __cdecl SLaserInfo::ctor(SLaserInfo *this_ptr);

// Original: core_fire.cpp_CFireEffect_FUN_0048b6f0
// Address: 0048b6f0
void __cdecl CFireEffect(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth);

// Original: core_fire.cpp_CFireEffect_createExplosion_FUN_0048c0d0
// Address: 0048c0d0
void __cdecl CFireEffect::createExplosion(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius);

// Original: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
// Address: 0048c160
int __cdecl CFireEffect::getExplosionEffect(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier);

// Original: core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0
// Address: 0048c2a0
void __cdecl CFireEffect::createToss(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle);

// Original: core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
// Address: 0048c310
int __cdecl CFireEffect::allocateToss(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time);

// Original: core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
// Address: 0048c370
void __cdecl CFireEffect::createCrater(CFireEffect *this_ptr,CVector3f *position,float radius);

// Original: core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0
// Address: 0048c3c0
void __cdecl CFireEffect::createGunFlames(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type);

// Original: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
// Address: 0048c420
void __cdecl CFireEffect::createLightningBolt(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width);

// Original: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
// Address: 0048c4a0
void __cdecl CFireEffect::createLightningBoltDirectional(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread);

// Original: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
// Address: 0048c530
void __cdecl CFireEffect::createTrailSegment(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);

// Original: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
// Address: 0048c590
void __cdecl CFireEffect::createTrailFromPoints(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);

// Original: core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
// Address: 0048c6b0
void __cdecl CFireEffect::createShell(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr);

// Original: core_fire.cpp_CFireEffect_createPopcorn_FUN_0048c710
// Address: 0048c710
void __cdecl CFireEffect::createPopcorn(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity);

// Original: core_fire.cpp_CFireEffect_createRainDrop_FUN_0048c760
// Address: 0048c760
void __cdecl CFireEffect::createRainDrop(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity);

// Original: core_fire.cpp_CFireEffect_load_FUN_0048c7d0
// Address: 0048c7d0
void __cdecl CFireEffect::load(CFireEffect *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CFireEffect_save_FUN_0048c850
// Address: 0048c850
void __cdecl CFireEffect::save(CFireEffect *this_ptr,_FILE *file_handle);

// Original: core_fire.cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0
// Address: 0048c8a0
int __cdecl CFireEffect::hasActiveMuzzleFlash(CFireEffect *this_ptr);

// Original: core_fire.cpp_transformWorldToScreen_FUN_0048c8d0
// Address: 0048c8d0
void __cdecl transformWorldToScreen(CVector3i *input,SProjectedVertex *output,CVector3f *world_position);

// Original: core_fire.cpp_CKeyFramedModel_getBoundsMin_FUN_0048c920
// Address: 0048c920
CVector3f * __cdecl CKeyFramedModel::getBoundsMin(CKeyFramedModel *this_ptr);

// Original: core_fire.cpp_CBulletTrail_reset_FUN_0048c930
// Address: 0048c930
void __cdecl CBulletTrail::reset(CBulletTrail *this_ptr);

// Original: core_fire.cpp_FUN_0048c940
// Address: 0048c940
void FUN_0048c940(undefined4 *param_1);

// Original: core_fire.cpp_CRainDrop_ctor_FUN_0048c960
// Address: 0048c960
CRainDrop * __cdecl CRainDrop::ctor(CRainDrop *this_ptr);

// Original: core_fire.cpp_CRainDrop_dtor_FUN_0048c980
// Address: 0048c980
CRainDrop * __cdecl CRainDrop::dtor(CRainDrop *this_ptr,uint flags);

// Original: core_fire.cpp_CPopcorn_ctor_FUN_0048c990
// Address: 0048c990
CPopcorn * __cdecl CPopcorn::ctor(CPopcorn *this_ptr);

// Original: core_fire.cpp_CPopcorn_dtor_FUN_0048c9b0
// Address: 0048c9b0
CPopcorn * __cdecl CPopcorn::dtor(CPopcorn *this_ptr,uint flags);

// Original: core_fire.cpp_CShell_ctor_FUN_0048c9c0
// Address: 0048c9c0
CShell * __cdecl CShell::ctor(CShell *this_ptr);

// Original: core_fire.cpp_CShell_dtor_FUN_0048c9e0
// Address: 0048c9e0
CShell * __cdecl CShell::dtor(CShell *this_ptr,uint flags);

// Original: core_fire.cpp_CTrail_ctor_FUN_0048c9f0
// Address: 0048c9f0
CTrail * __cdecl CTrail::ctor(CTrail *this_ptr);

// Original: core_fire.cpp_CTrail_dtor_FUN_0048ca00
// Address: 0048ca00
CTrail * __cdecl CTrail::dtor(CTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CLightningBolt_ctor_FUN_0048ca10
// Address: 0048ca10
CLightningBolt * __cdecl CLightningBolt::ctor(CLightningBolt *this_ptr);

// Original: core_fire.cpp_CLightningBolt_dtor_FUN_0048ca20
// Address: 0048ca20
CLightningBolt * __cdecl CLightningBolt::dtor(CLightningBolt *this_ptr,uint flags);

// Original: core_fire.cpp_CGunFlame_ctor_FUN_0048ca30
// Address: 0048ca30
CGunFlame * __cdecl CGunFlame::ctor(CGunFlame *this_ptr);

// Original: core_fire.cpp_CGunFlame_dtor_FUN_0048ca40
// Address: 0048ca40
CGunFlame * __cdecl CGunFlame::dtor(CGunFlame *this_ptr,uint flags);

// Original: core_fire.cpp_CCrater_ctor_FUN_0048ca50
// Address: 0048ca50
CCrater * __cdecl CCrater::ctor(CCrater *this_ptr);

// Original: core_fire.cpp_CCrater_dtor_FUN_0048ca70
// Address: 0048ca70
CCrater * __cdecl CCrater::dtor(CCrater *this_ptr,uint flags);

// Original: core_fire.cpp_CToss_dtor_FUN_0048ca90
// Address: 0048ca90
CToss * __cdecl CToss::dtor(CToss *this_ptr,uint flags);

// Original: core_fire.cpp_CExplosion_dtor_FUN_0048cab0
// Address: 0048cab0
CExplosion * __cdecl CExplosion::dtor(CExplosion *this_ptr,uint flags);

// Original: core_fire.cpp_CLaserBeam_ctor_FUN_0048cac0
// Address: 0048cac0
CLaserBeam * __cdecl CLaserBeam::ctor(CLaserBeam *this_ptr);

// Original: core_fire.cpp_CLaserBeam_dtor_FUN_0048cad0
// Address: 0048cad0
CLaserBeam * __cdecl CLaserBeam::dtor(CLaserBeam *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletTrail_ctor_FUN_0048cae0
// Address: 0048cae0
CBulletTrail * __cdecl CBulletTrail::ctor(CBulletTrail *this_ptr);

// Original: core_fire.cpp_CBulletTrail_dtor_FUN_0048caf0
// Address: 0048caf0
CBulletTrail * __cdecl CBulletTrail::dtor(CBulletTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
// Address: 0048cb00
CGlassParticle * __cdecl CGlassParticle::ctor(CGlassParticle *this_ptr);

// Original: core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30
// Address: 0048cb30
CGlassParticle * __cdecl CGlassParticle::dtor(CGlassParticle *this_ptr,uint flags);

// Original: core_fire.cpp_CMuzzleFlash_ctor_FUN_0048cb60
// Address: 0048cb60
CMuzzleFlash * __cdecl CMuzzleFlash::ctor(CMuzzleFlash *this_ptr);

// Original: core_fire.cpp_CMuzzleFlash_dtor_FUN_0048cb70
// Address: 0048cb70
CMuzzleFlash * __cdecl CMuzzleFlash::dtor(CMuzzleFlash *this_ptr,uint flags);

// Original: core_fire.cpp_CRock_ctor_FUN_0048cb80
// Address: 0048cb80
CRock * __cdecl CRock::ctor(CRock *this_ptr);

// Original: core_fire.cpp_CRock_dtor_FUN_0048cba0
// Address: 0048cba0
CRock * __cdecl CRock::dtor(CRock *this_ptr,uint flags);

// Original: core_fire.cpp_CFireball_ctor_FUN_0048cbb0
// Address: 0048cbb0
CFireball * __cdecl CFireball::ctor(CFireball *this_ptr);

// Original: core_fire.cpp_CFireball_dtor_FUN_0048cbd0
// Address: 0048cbd0
CFireball * __cdecl CFireball::dtor(CFireball *this_ptr,uint flags);

// Original: core_fire.cpp_CSpark_ctor_FUN_0048cbe0
// Address: 0048cbe0
CSpark * __cdecl CSpark::ctor(CSpark *this_ptr);

// Original: core_fire.cpp_CSpark_dtor_FUN_0048cc00
// Address: 0048cc00
CSpark * __cdecl CSpark::dtor(CSpark *this_ptr,uint flags);

// Original: core_fire.cpp_CStake_ctor_FUN_0048cc10
// Address: 0048cc10
CStake * __cdecl CStake::ctor(CStake *this_ptr);

// Original: core_fire.cpp_CStake_dtor_FUN_0048cc30
// Address: 0048cc30
CStake * __cdecl CStake::dtor(CStake *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletHole_ctor_FUN_0048cc50
// Address: 0048cc50
CBulletHole * __cdecl CBulletHole::ctor(CBulletHole *this_ptr);

// Original: core_fire.cpp_CBulletHole_dtor_FUN_0048cc60
// Address: 0048cc60
CBulletHole * __cdecl CBulletHole::dtor(CBulletHole *this_ptr,uint flags);

// Original: core_fire.cpp_CSmokeParticle_ctor_FUN_0048cc70
// Address: 0048cc70
CSmokeParticle * __cdecl CSmokeParticle::ctor(CSmokeParticle *this_ptr);

// Original: core_fire.cpp_CSmokeParticle_dtor_FUN_0048cc80
// Address: 0048cc80
CSmokeParticle * __cdecl CSmokeParticle::dtor(CSmokeParticle *this_ptr,uint flags);

// Original: core_fire.cpp_CKeyFramedModelInstance_dtor_FUN_0048cc90
// Address: 0048cc90
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::dtor(CKeyFramedModelInstance *this_ptr,uint flags);

// Original: core_fire.cpp_CRainDrop_arrdtor_FUN_0048cca0
// Address: 0048cca0
CRainDrop * __cdecl CRainDrop::arrdtor(CRainDrop *this_ptr,uint flags);

// Original: core_fire.cpp_CPopcorn_arrdtor_FUN_0048ccc0
// Address: 0048ccc0
CPopcorn * __cdecl CPopcorn::arrdtor(CPopcorn *this_ptr,uint flags);

// Original: core_fire.cpp_CShell_arrdtor_FUN_0048cce0
// Address: 0048cce0
CShell * __cdecl CShell::arrdtor(CShell *this_ptr,uint flags);

// Original: core_fire.cpp_CTrail_arrdtor_FUN_0048cd00
// Address: 0048cd00
CTrail * __cdecl CTrail::arrdtor(CTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CLightningBolt_arrdtor_FUN_0048cd20
// Address: 0048cd20
CLightningBolt * __cdecl CLightningBolt::arrdtor(CLightningBolt *this_ptr,uint flags);

// Original: core_fire.cpp_CGunFlame_arrdtor_FUN_0048cd40
// Address: 0048cd40
CGunFlame * __cdecl CGunFlame::arrdtor(CGunFlame *this_ptr,uint flags);

// Original: core_fire.cpp_CCrater_arrdtor_FUN_0048cd60
// Address: 0048cd60
CCrater * __cdecl CCrater::arrdtor(CCrater *this_ptr,uint flags);

// Original: core_fire.cpp_CToss_arrdtor_FUN_0048cd80
// Address: 0048cd80
CToss * __cdecl CToss::arrdtor(CToss *this_ptr,uint flags);

// Original: core_fire.cpp_CExplosion_arrdtor_FUN_0048cda0
// Address: 0048cda0
CExplosion * __cdecl CExplosion::arrdtor(CExplosion *this_ptr,uint flags);

// Original: core_fire.cpp_CLaserBeam_arrdtor_FUN_0048cdc0
// Address: 0048cdc0
CLaserBeam * __cdecl CLaserBeam::arrdtor(CLaserBeam *this_ptr,uint flags);

// Original: core_fire.cpp_CRock_arrdtor_FUN_0048cde0
// Address: 0048cde0
CRock * __cdecl CRock::arrdtor(CRock *this_ptr,uint flags);

// Original: core_fire.cpp_CFireball_arrdtor_FUN_0048ce00
// Address: 0048ce00
CFireball * __cdecl CFireball::arrdtor(CFireball *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletTrail_arrdtor_FUN_0048ce20
// Address: 0048ce20
CBulletTrail * __cdecl CBulletTrail::arrdtor(CBulletTrail *this_ptr,uint flags);

// Original: core_fire.cpp_CGlassParticle_arrdtor_FUN_0048ce40
// Address: 0048ce40
CGlassParticle * __cdecl CGlassParticle::arrdtor(CGlassParticle *this_ptr,uint flags);

// Original: core_fire.cpp_CMuzzleFlash_arrdtor_FUN_0048ce60
// Address: 0048ce60
CMuzzleFlash * __cdecl CMuzzleFlash::arrdtor(CMuzzleFlash *this_ptr,uint flags);

// Original: core_fire.cpp_CSpark_arrdtor_FUN_0048ce80
// Address: 0048ce80
CSpark * __cdecl CSpark::arrdtor(CSpark *this_ptr,uint flags);

// Original: core_fire.cpp_CStake_arrdtor_FUN_0048cea0
// Address: 0048cea0
CStake * __cdecl CStake::arrdtor(CStake *this_ptr,uint flags);

// Original: core_fire.cpp_CBulletHole_arrdtor_FUN_0048cec0
// Address: 0048cec0
CBulletHole * __cdecl CBulletHole::arrdtor(CBulletHole *this_ptr,uint flags);

// Original: core_fire.cpp_CSmokeParticle_arrdtor_FUN_0048cee0
// Address: 0048cee0
CSmokeParticle * __cdecl CSmokeParticle::arrdtor(CSmokeParticle *this_ptr,uint flags);

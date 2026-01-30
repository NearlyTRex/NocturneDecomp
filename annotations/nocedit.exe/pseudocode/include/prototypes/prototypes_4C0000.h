#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdarg.h"
#include "system/stdio.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CBulletHole.h"
#include "types/classes/CBulletTrail.h"
#include "types/classes/CCrater.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CExplosion.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CFireball.h"
#include "types/classes/CFlame.h"
#include "types/classes/CFlameCan.h"
#include "types/classes/CFlameThrower.h"
#include "types/classes/CFlashlight.h"
#include "types/classes/CFlies.h"
#include "types/classes/CGlassParticle.h"
#include "types/classes/CGunFlame.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLaserBeam.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CMuzzleFlash.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CRock.h"
#include "types/classes/CShell.h"
#include "types/classes/CSmokeParticle.h"
#include "types/classes/CSpark.h"
#include "types/classes/CStake.h"
#include "types/classes/CToss.h"
#include "types/classes/CTrail.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SFly.h"
#include "types/structs/SLaserInfo.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/STriangleVertices.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4C0000
// =============================================================================

void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr);
void __cdecl core_fire_cpp_CStake_process_FUN_004c0210(CStake *this_ptr);
void __cdecl core_fire_cpp_CSpark_process_FUN_004c0240(CSpark *this_ptr);
int __cdecl core_fire_cpp_CSpark_initRender_FUN_004c0300(CSpark *this_ptr);
void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr);
int __cdecl core_fire_cpp_CSpark_onCollision_FUN_004c0ac0(CSpark *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004c0ad0(void);
void __cdecl core_fire_cpp_CFireball_process_FUN_004c0b30(CFireball *this_ptr);
int __cdecl core_fire_cpp_CFireball_initRender_FUN_004c0d80(CFireball *this_ptr);
void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr);
int __cdecl core_fire_cpp_CFireball_onCollision_FUN_004c1690(CFireball *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_FUN_004c17c0(void);
void __cdecl core_fire_cpp_loadRockAssets_FUN_004c17e0(void);
void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr);
void __cdecl core_fire_cpp_CRock_render_FUN_004c1870(CRock *this_ptr);
void __cdecl core_fire_cpp_FUN_004c1940(void);
void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash *this_ptr);
void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr);
void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_004c1be0(void);
void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00 (CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex, CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);
void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr);
void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle *this_ptr);
int __cdecl core_fire_cpp_CGlassParticle_onCollision_FUN_004c2160 (CGlassParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_FUN_004c2170(void);
void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail *this_ptr);
void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail *this_ptr);
void __cdecl core_fire_cpp_CLaserBeam_FUN_004c2420(CLaserBeam *this_ptr);
float __cdecl core_fire_cpp_FUN_004c24d0(void);
void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr);
void __cdecl core_fire_cpp_FUN_004c3870(void);
CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_004c38c0(CExplosion *this_ptr);
void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004c38d0(void);
void __cdecl core_fire_cpp_CExplosion_FUN_004c3970(CExplosion *this_ptr);
void __cdecl core_fire_cpp_CExplosion_process_FUN_004c3ac0(CExplosion *this_ptr);
void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr);
CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_init_FUN_004c3ed0(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_create_FUN_004c3ee0(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_process_FUN_004c4000(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_render_FUN_004c4160(CToss *this_ptr);
void __cdecl core_fire_cpp_loadDynamiteAssets_FUN_004c41d0(void);
void __cdecl core_fire_cpp_CCrater_ctor_FUN_004c41e0(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_FUN_004c4200(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_process_FUN_004c4550(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_loadGunFlameTextures_FUN_004c4d50(void);
void __cdecl core_fire_cpp_CGunFlame_ctor_FUN_004c4da0(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_FUN_004c4db0(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_process_FUN_004c4f60(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_render_FUN_004c50b0(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_004c5600(void);
void __cdecl core_fire_cpp_CLightningBolt_ctor_FUN_004c5630(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CLightningBolt_FUN_004c5640(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_FUN_004c5680(void);
void __cdecl core_fire_cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CTrail_ctor_FUN_004c5de0(CTrail *this_ptr);
void __cdecl core_fire_cpp_CTrail_FUN_004c5df0(CTrail *this_ptr);
void __cdecl core_fire_cpp_CTrail_process_FUN_004c5e40(CTrail *this_ptr);
void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr);
void __cdecl core_fire_cpp_FUN_004c6170(void);
void __cdecl core_fire_cpp_CShell_render_FUN_004c6200(CShell *this_ptr);
void __cdecl core_fire_cpp_CShell_process_FUN_004c6300(CShell *this_ptr);
int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal);
int __cdecl core_fire_cpp_CRainDrop_onCollision_FUN_004c64b0(CRainDrop *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_CPopcorn_render_FUN_004c64c0(CPopcorn *this_ptr);
void __cdecl core_fire_cpp_CRainDrop_render_FUN_004c6830(CRainDrop *this_ptr);
CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004c6be0(void);
CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004c6c10(void);
CFireEffect * __cdecl core_fire_cpp_CFireEffect_ctor_FUN_004c6c60(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_init_FUN_004c6c80(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_render_FUN_004c7180(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0 (CFireEffect *this_ptr,int render_mode,int render_completeness);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7620(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c76a0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c79d0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7a60(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 (CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence, int alpha_value);
void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_004c7bb0 (CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles, CVector3f *surface_normal,int material_type);
void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00 (CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex, CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7d60(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7db0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7e60(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7eb0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f20(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f80(CFireEffect *this_ptr);
SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8230(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8c10(CFireEffect *this_ptr);
int __cdecl core_fire_cpp_CFireEffect_FUN_004c8c90(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr);
int __cdecl core_fire_cpp_CFireEffect_FUN_004c8e40(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ef0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8f50(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c8fd0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c9060(CFireEffect *this_ptr);
int __cdecl core_fire_cpp_CFireEffect_FUN_004c90c0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c91e0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c9240(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_FUN_004c9290(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_load_FUN_004c9300(CFireEffect *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_CFireEffect_save_FUN_004c9380(CFireEffect *this_ptr,_FILE *file_handle);
int __cdecl core_fire_cpp_CFireEffect_FUN_004c93d0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_FUN_004c9400(void);
int __cdecl core_fire_cpp_FUN_004c9450(void);
void __cdecl core_fire_cpp_FUN_004c9460(void);
void __cdecl core_fire_cpp_FUN_004c9470(void);
void __cdecl core_fire_cpp_FUN_004c9480(void);
CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004c9490(CRainDrop *this_ptr);
CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop *this_ptr);
CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn *this_ptr);
CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn *this_ptr);
CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004c94f0(CShell *this_ptr);
CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_004c9510(CShell *this_ptr);
CTrail * __cdecl core_fire_cpp_CTrail_ctor_FUN_004c9520(CTrail *this_ptr);
CTrail * __cdecl core_fire_cpp_CTrail_dtor_FUN_004c9530(CTrail *this_ptr);
CLightningBolt * __cdecl core_fire_cpp_CLightningBolt_ctor_FUN_004c9540(CLightningBolt *this_ptr);
CLightningBolt * __cdecl core_fire_cpp_CLightningBolt_dtor_FUN_004c9550(CLightningBolt *this_ptr);
CGunFlame * __cdecl core_fire_cpp_CGunFlame_ctor_FUN_004c9560(CGunFlame *this_ptr);
CGunFlame * __cdecl core_fire_cpp_CGunFlame_dtor_FUN_004c9570(CGunFlame *this_ptr);
CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_004c9580(CCrater *this_ptr);
CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr);
CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_004c95c0(CToss *this_ptr);
CExplosion * __cdecl core_fire_cpp_CExplosion_dtor_FUN_004c95e0(CExplosion *this_ptr);
CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_ctor_FUN_004c95f0(CLaserBeam *this_ptr);
CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_dtor_FUN_004c9600(CLaserBeam *this_ptr);
CBulletTrail * __cdecl core_fire_cpp_CBulletTrail_ctor_FUN_004c9610(CBulletTrail *this_ptr);
CBulletTrail * __cdecl core_fire_cpp_CBulletTrail_dtor_FUN_004c9620(CBulletTrail *this_ptr);
CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004c9630(CGlassParticle *this_ptr);
CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_004c9660(CGlassParticle *this_ptr);
CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_ctor_FUN_004c9690(CMuzzleFlash *this_ptr);
CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_dtor_FUN_004c96a0(CMuzzleFlash *this_ptr);
CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004c96b0(CRock *this_ptr);
CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_004c96d0(CRock *this_ptr);
CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004c96e0(CFireball *this_ptr);
CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004c9700(CFireball *this_ptr);
CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004c9710(CSpark *this_ptr);
CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_004c9730(CSpark *this_ptr);
CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004c9740(CStake *this_ptr);
CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr);
CBulletHole * __cdecl core_fire_cpp_CBulletHole_ctor_FUN_004c9780(CBulletHole *this_ptr);
CBulletHole * __cdecl core_fire_cpp_CBulletHole_dtor_FUN_004c9790(CBulletHole *this_ptr);
CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_ctor_FUN_004c97a0(CSmokeParticle *this_ptr);
CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_dtor_FUN_004c97b0(CSmokeParticle *this_ptr);
CKeyFramedModelInstance * __cdecl core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_004c97c0(CKeyFramedModelInstance *this_ptr);
void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array);
void __cdecl core_fire_cpp_freePopcorn_FUN_004c97f0(CPopcorn **array);
void __cdecl core_fire_cpp_freeShells_FUN_004c9810(CShell **array);
void __cdecl core_fire_cpp_freeTrails_FUN_004c9830(CTrail **array);
void __cdecl core_fire_cpp_freeLightningBolts_FUN_004c9850(CLightningBolt **array);
void __cdecl core_fire_cpp_freeGunFlames_FUN_004c9870(CGunFlame **array);
void __cdecl core_fire_cpp_freeCraters_FUN_004c9890(CCrater **array);
void __cdecl core_fire_cpp_freeTosses_FUN_004c98b0(CToss **array);
void __cdecl core_fire_cpp_freeExplosions_FUN_004c98d0(CExplosion **array);
void __cdecl core_fire_cpp_freeLaserBeams_FUN_004c98f0(CLaserBeam **array);
void __cdecl core_fire_cpp_freeRocks_FUN_004c9910(CRock **array);
void __cdecl core_fire_cpp_freeFireballs_FUN_004c9930(CFireball **array);
void __cdecl core_fire_cpp_freeBulletTrails_FUN_004c9950(CBulletTrail **array);
void __cdecl core_fire_cpp_freeGlassParticles_FUN_004c9970(CGlassParticle **array);
void __cdecl core_fire_cpp_freeMuzzleFlashes_FUN_004c9990(CMuzzleFlash **array);
void __cdecl core_fire_cpp_freeSparks_FUN_004c99b0(CSpark **array);
void __cdecl core_fire_cpp_freeStakes_FUN_004c99d0(CStake **array);
void __cdecl core_fire_cpp_freeBulletHoles_FUN_004c99f0(CBulletHole **array);
void __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle **array);
void __cdecl core_flame_cpp_staticInit_FUN_004c9a30(void);
CFlame * __cdecl core_flame_cpp_factoryFunc_FUN_004c9a60(void);
CDemonActorType * __cdecl core_flame_cpp_CFlame_getActorType_FUN_004c9a90(CFlame *this_ptr);
CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr);
void __cdecl core_flame_cpp_FUN_004c9b90(void);
void __cdecl core_flame_cpp_FUN_004c9c00(void);
float __cdecl core_flame_cpp_FUN_004ca110(void);
void __cdecl core_flame_cpp_FUN_004caa70(void);
void __cdecl core_flame_cpp_FUN_004caa80(void);
void __cdecl core_flame_cpp_FUN_004cac00(void);
void __cdecl core_flame_cpp_CFlame_load_FUN_004cac60(void);
int __cdecl core_flame_cpp_FUN_004cad80(void);
void __cdecl core_flamecan_cpp_FUN_004cad90(void);
void __cdecl core_flame_cpp_FUN_004cae70(void);
void __cdecl core_flame_cpp_FUN_004caf60(void);
void __cdecl core_flame_cpp_FUN_004cb0a0(void);
void __cdecl core_flame_cpp_FUN_004cb0e0(void);
void __cdecl core_flamecan_cpp_staticInit_FUN_004cb0f0(void);
CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_004cb120(void);
CDemonActorType * __cdecl core_flamecan_cpp_CFlameCan_getActorType_FUN_004cb150(CFlameCan *this_ptr);
CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan *this_ptr);
void __cdecl core_flamecan_cpp_FUN_004cb200(void);
void __cdecl core_flamecan_cpp_FUN_004cb340(void);
void __cdecl core_flamecan_cpp_FUN_004cb390(void);
int __cdecl core_flamecan_cpp_FUN_004cb4c0(void);
int __cdecl core_flamecan_cpp_FUN_004cb550(void);
int __cdecl core_flamecan_cpp_FUN_004cb580(void);
void __cdecl core_flamecan_cpp_CFlameCan_load_FUN_004cb620(void);
int __cdecl core_flamecan_cpp_FUN_004cb680(void);
float * __cdecl core_flamecan_cpp_FUN_004cb690(void);
void __cdecl core_flamecan_cpp_FUN_004cb6e0(void);
void __cdecl core_flamecan_cpp_FUN_004cb750(void);
CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_004cb7a0(CFlameCan *this_ptr,uint d1,uint d2,uint d3);
void __cdecl core_flamegun_cpp_staticInit_FUN_004cb810(void);
CFlameThrower * __cdecl core_flamegun_cpp_factoryFunc_FUN_004cb840(void);
CDemonActorType * __cdecl core_flamegun_cpp_CFlameThrower_getActorType_FUN_004cb870(CFlameThrower *this_ptr);
CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_004cb880(CFlameThrower *this_ptr);
int __cdecl core_flamegun_cpp_FUN_004cb920(void);
void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_004cb9b0(CFlameThrower *this_ptr,float delta_time);
float __cdecl core_flamegun_cpp_FUN_004cbab0(void);
void __cdecl core_flamegun_cpp_FUN_004cbad0(void);
float __cdecl core_flamegun_cpp_FUN_004cbad1(void);
CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004cbb00(CFlameThrower *this_ptr,uint d1,uint d2);
void __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void);
CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_004cbb80(void);
CDemonActorType * __cdecl core_flamegun_cpp_CFlashlight_getActorType_FUN_004cbbb0(CFlashlight *this_ptr);
CFlashlight * __cdecl core_flamegun_cpp_CFlashlight_ctor_FUN_004cbbc0(CFlashlight *this_ptr);
int __cdecl core_flamegun_cpp_FUN_004cbc40(void);
int __cdecl core_flamegun_cpp_FUN_004cbc50(void);
CFlashlight * __cdecl core_flamegun_cpp_CFlashlight_dtor_FUN_004cbc60(CFlashlight *this_ptr,uint d1,uint d2);
void __cdecl core_flamegun_cpp_staticInit_FUN_004cbcb0(void);
void __cdecl core_flamegun_cpp_initializeFlamegun_FUN_004cbce0(void);
void __cdecl core_flies_cpp_staticInit_FUN_004cbcf0(void);
CFlies * __cdecl core_flies_cpp_factoryFunc_FUN_004cbd20(void);
CDemonActorType * __cdecl core_flies_cpp_CFlies_getActorType_FUN_004cbd50(CFlies *this_ptr);
CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr);
void __cdecl core_flies_cpp_FUN_004cbe20(void);
void __cdecl core_flies_cpp_FUN_004cbe60(void);
void __cdecl core_flies_cpp_FUN_004cbf00(void);
void __cdecl core_flies_cpp_FUN_004cc230(void);
void __cdecl core_flies_cpp_FUN_004cc2c0(void);
int __cdecl core_flies_cpp_FUN_004cc300(void);
void __cdecl core_flies_cpp_FUN_004cc700(void);
int __cdecl core_flies_cpp_FUN_004cc750(void);
void __cdecl core_flies_cpp_FUN_004cc760(void);
float * __cdecl core_flies_cpp_FUN_004cc820(void);
CDemonActor * __cdecl core_flies_cpp_FUN_004cca50(void);
void __cdecl core_flies_cpp_FUN_004ccaa0(void);
void __cdecl core_flies_cpp_FUN_004ccaf0(void);
void __cdecl core_flies_cpp_FUN_004ccc70(void);
CFlies * __cdecl core_flies_cpp_FUN_004cccb0(CFlies *this_ptr,uint d1,uint d2,uint d3);
SFly * __cdecl core_flies_cpp_FUN_004ccd20(SFly *this_ptr);
SFly * __cdecl core_flies_cpp_FUN_004ccd40(SFly *this_ptr);
void __cdecl core_flies_cpp_FUN_004ccd60(void);
int __cdecl engine_font_cpp_isRectangleClipped_FUN_004ccd80 (int rect_width,int rect_height,int rect_x,int rect_y);
int __cdecl engine_font_cpp_CBitFont_clipCharacter_FUN_004ccdd0 (int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width);
CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_004cce90(CBitFont *this_ptr);
CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_004cceb0(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_reset_FUN_004cced0(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0 (CBitFont *this_ptr,char *filename,int width,int height,int load_flags);
void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0 (CBitFont *this_ptr,char *filename,int width,int height,int first_char);
void __cdecl engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280 (CBitFont *this_ptr,char *filename,int width,int height,int first_char,int last_char, int load_flags,int other);
void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path);
void __cdecl engine_font_cpp_CBitFont_free_FUN_004cd4e0(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 (CBitFont *this_ptr,int bitmapcount,int other2,int bitmap_index,int width,int height, int first_char);
int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_004cda20 (CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride);
int __cdecl engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80 (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value);
int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0 (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value);
int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,...);
int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,...);
int __cdecl engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0 (CBitFont *this_ptr,int right_edge_x,int y_pos,int color_mode,int color_value, char *text_string);
void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd20 (CBitFont *font_ptr,int x,int y,int color,char *format,...);
void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd70 (CBitFont *font_ptr,int x,int y,int color,char *format,...);
int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0 (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value, char *text_string);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004cde20 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,...);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70 (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value, char *format_string,va_list_t *args);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value, char *text_string);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30 (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value, char *format_string,...);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value, char *format_string,va_list_t *args);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *text_string);
void __cdecl engine_font_cpp_CBitFont_printfCenterInClip_FUN_004ce050 (CBitFont *this_ptr,int x,int y,int color,char *format,...);
int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090 (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *format_string, va_list_t *args);
void __cdecl engine_font_cpp_setShadowColor_FUN_004ce0f0(uint red,uint green,uint blue);
int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004ce220(void);
void __cdecl engine_font_cpp_setDefaultTextColor_FUN_004ce230(int text_color);
void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240 (uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color);
void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0 (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int z_pos,int width,int height, int color_mode);
int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0 (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int color_mode,int color_value);
int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *this_ptr,char *text);
int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont *this_ptr,char *text_string);


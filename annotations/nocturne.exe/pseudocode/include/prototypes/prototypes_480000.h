#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBulletHole.h"
#include "types/classes/CBulletTrail.h"
#include "types/classes/CCrater.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CEventList.h"
#include "types/classes/CExplosion.h"
#include "types/classes/CFilmProjector.h"
#include "types/classes/CFilmReel.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CFireball.h"
#include "types/classes/CFlame.h"
#include "types/classes/CFlameCan.h"
#include "types/classes/CFlameThrower.h"
#include "types/classes/CFlashlight.h"
#include "types/classes/CFlies.h"
#include "types/classes/CGlassParticle.h"
#include "types/classes/CGunFlame.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLaserBeam.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMuzzleFlash.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CRock.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CShell.h"
#include "types/classes/CSmokeParticle.h"
#include "types/classes/CSpark.h"
#include "types/classes/CStake.h"
#include "types/classes/CToss.h"
#include "types/classes/CTrail.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SFly.h"
#include "types/structs/SLaserInfo.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/STriangleVertices.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x480000
// =============================================================================

int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_00480220(CEventList *this_ptr,char *expression,int *parse_position);
void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0(CEventList *this_ptr,char *name,int add_flag);
void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00480410(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420(CEventList *this_ptr,char *name,int add_flag);
void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_00480550(CEventList *this_ptr,char *name,float duration);
void __cdecl core_event_cpp_CEventList_setCounter_FUN_004806d0(CEventList *this_ptr,char *name,int value);
int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004807e0(CEventList *this_ptr,char *str);
int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_00480860(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findTimer_FUN_004808b0(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findCounter_FUN_00480900(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(CEventList *this_ptr,char *var_name,CDemonActor *actor);
CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00480b30(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_00480ba0(CEventList *this_ptr,char *name);
uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00480c30(CEventList *this_ptr,char *name,uint sfx_handle);
int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_00480eb0(CEventList *this_ptr);
int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00480f40(int ch);
int __cdecl core_event_cpp_CEventList_loadState_FUN_00480f70(CEventList *this_ptr,_FILE *file_handle);
int __cdecl core_event_cpp_CEventList_saveState_FUN_00481330(CEventList *this_ptr,_FILE *file_handle);
void __cdecl core_event_cpp_CRuleList_clear_FUN_00481620(CRuleList *this_ptr);
void __cdecl core_event_cpp_CRuleList_insert_FUN_00481630(CRuleList *this_ptr,int index,char *condition,char *event);
void __cdecl core_event_cpp_CRuleList_remove_FUN_00481770(CRuleList *this_ptr,int index);
int __cdecl core_event_cpp_CRuleList_findFirst_FUN_00481840(CRuleList *this_ptr);
int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(CRuleList *this_ptr);
float __cdecl core_event_cpp_getVectorDistance_FUN_004818e0(CVector3f *a,CVector3f *b);
int __cdecl core_event_cpp_getSelectedCameraIndex_FUN_00481920(CDemonSet *set_ptr);
undefined4 core_event_cpp_FUN_00481930(void);
undefined4 * core_event_cpp_FUN_00481950(undefined4 *param_1,undefined4 *param_2);
undefined4 * core_event_cpp_FUN_00481960(void);
undefined4 * core_event_cpp_FUN_00481970(void);
void __fastcall crt_watcom_c__memset_FUN_00481980(void *dest,int fill_byte,uint size);
void __fastcall crt_watcom_c__memcpy_FUN_00481a28(void *dest,void *src,uint size);
void __cdecl core_filmreel_cpp_staticInit_FUN_00481bb0(void);
CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_00481c00(void);
CDemonActorType * __cdecl core_filmreel_cpp_CFilmReel_getActorType_FUN_00481c20(CFilmReel *this_ptr);
CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(CFilmReel *this_ptr);
int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_00481d30(CFilmReel *this_ptr,CDemonActor *picker);
void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_00481d50(CFilmReel *this_ptr,CDemonActor *carrier);
void __cdecl core_filmreel_cpp_CFilmReel_onDropped_FUN_00481d60(CFilmReel *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_filmreel_cpp_CFilmReel_getCarrier_FUN_00481d70(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_process_FUN_00481d80(CFilmReel *this_ptr,float delta_time);
int __cdecl core_filmreel_cpp_CFilmReel_renderOpaque_FUN_00481d90(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_renderBackground_FUN_00481e00(CFilmReel *this_ptr,int layer_flag);
void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00481e20(CFilmReel *this_ptr);
ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_00481e70(CFilmReel *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmReel_getBoundingBox_FUN_00481e90(CFilmReel *this_ptr,CBoundingBox3D *out_box);
CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00481ee0(void);
CDemonActorType * __cdecl core_filmreel_cpp_CFilmProjector_getActorType_FUN_00481f00(CFilmProjector *this_ptr);
CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00482010(CFilmProjector *this_ptr,float delta_time);
CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004821a0(CFilmProjector *this_ptr,CBoundingBox3D *out_box);
int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004821d0(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(CFilmProjector *this_ptr);
CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_00482310(CFilmReel *this_ptr,uint flags);
CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_00482360(CFilmProjector *this_ptr,uint flags);
void __cdecl core_fire_cpp_staticInit_FUN_004823b0(void);
float __cdecl core_fire_cpp_safeAcos_FUN_00482630(float value);
void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_reset_FUN_00482770(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00482780(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);
void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_init_FUN_00482c80(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor);
void __cdecl core_fire_cpp_CBulletHole_process_FUN_00482e90(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_render_FUN_00482f50(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_loadStakeAssets_FUN_00483290(void);
void __cdecl core_fire_cpp_CStake_init_FUN_004832b0(CStake *this_ptr,CVector3f *position,CVector3f *orientation);
void __cdecl core_fire_cpp_CStake_spawn_FUN_00483320(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal);
void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(CStake *this_ptr);
void __cdecl core_fire_cpp_CStake_process_FUN_004836b0(CStake *this_ptr);
void __cdecl core_fire_cpp_CSpark_process_FUN_004836e0(CSpark *this_ptr);
void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(CSpark *this_ptr);
void __cdecl core_fire_cpp_CSpark_render_FUN_004838c0(CSpark *this_ptr);
int __cdecl core_fire_cpp_CSpark_onCollision_FUN_00483fe0(CSpark *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00483ff0(void);
void __cdecl core_fire_cpp_CFireball_process_FUN_00484050(CFireball *this_ptr);
void __cdecl core_fire_cpp_CFireball_setupRenderState_FUN_004842a0(CFireball *this_ptr);
void __cdecl core_fire_cpp_CFireball_render_FUN_00484390(CFireball *this_ptr);
int __cdecl core_fire_cpp_CFireball_onCollision_FUN_00484b60(CFireball *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_CRock_setup_FUN_00484c90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr);
void __cdecl core_fire_cpp_loadRockAssets_FUN_00484cb0(void);
void __cdecl core_fire_cpp_CRock_process_FUN_00484cc0(CRock *this_ptr);
void __cdecl core_fire_cpp_CRock_render_FUN_00484d40(CRock *this_ptr);
void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix);
void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(CMuzzleFlash *this_ptr);
void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(CMuzzleFlash *this_ptr);
void __cdecl core_fire_cpp_loadGunFlashAssets_FUN_004850b0(void);
void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004850d0(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);
void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004853c0(CGlassParticle *this_ptr);
void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004855c0(CGlassParticle *this_ptr);
int __cdecl core_fire_cpp_CGlassParticle_onCollision_FUN_00485630(CGlassParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_CBulletTrail_init_FUN_00485640(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length);
void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004856a0(CBulletTrail *this_ptr);
void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(CBulletTrail *this_ptr);
void __cdecl core_fire_cpp_CLaserBeam_init_FUN_004858f0(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle);
float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float depth,float min_size);
void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(CLaserBeam *this_ptr);
void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_00486d40(void);
CExplosion * __cdecl core_fire_cpp_CExplosion_ctor_FUN_00486d90(CExplosion *this_ptr);
void __cdecl core_fire_cpp_loadDebrisAssets_FUN_00486da0(void);
void __cdecl core_fire_cpp_CExplosion_activate_FUN_00486e40(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier);
void __cdecl core_fire_cpp_CExplosion_process_FUN_00486f90(CExplosion *this_ptr);
void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(CExplosion *this_ptr);
CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_00487370(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_reset_FUN_004873a0(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_create_FUN_004873b0(CToss *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time);
void __cdecl core_fire_cpp_CToss_process_FUN_004874d0(CToss *this_ptr);
void __cdecl core_fire_cpp_CToss_render_FUN_00487630(CToss *this_ptr);
void __cdecl core_fire_cpp_loadDynamiteAssets_FUN_004876a0(void);
void __cdecl core_fire_cpp_CCrater_reset_FUN_004876b0(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_activate_FUN_004876d0(CCrater *this_ptr,CVector3f *center_position,float radius);
void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(CCrater *this_ptr);
void __cdecl core_fire_cpp_CCrater_load_FUN_00487d50(CCrater *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_CCrater_save_FUN_00487e90(CCrater *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void);
void __cdecl core_fire_cpp_CGunFlame_init_FUN_004880d0(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_loadGunFlameAssets_FUN_00488220(void);
void __cdecl core_fire_cpp_CGunFlame_reset_FUN_00488270(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_activate_FUN_00488280(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type);
void __cdecl core_fire_cpp_CGunFlame_process_FUN_00488430(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(CGunFlame *this_ptr);
void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_00488ad0(void);
void __cdecl core_fire_cpp_CLightningBolt_reset_FUN_00488b00(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_00488b10(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width );
void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_00488b50(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread);
void __cdecl core_fire_cpp_CLightningBolt_process_FUN_00488bb0(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CLightningBolt_render_FUN_00488bf0(CLightningBolt *this_ptr);
void __cdecl core_fire_cpp_CTrail_reset_FUN_004892b0(CTrail *this_ptr);
void __cdecl core_fire_cpp_CTrail_activate_FUN_004892c0(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);
void __cdecl core_fire_cpp_CTrail_process_FUN_00489310(CTrail *this_ptr);
void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(CTrail *this_ptr);
void __cdecl core_fire_cpp_CShell_setup_FUN_00489640(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr);
void __cdecl core_fire_cpp_CShell_render_FUN_004896d0(CShell *this_ptr);
void __cdecl core_fire_cpp_CShell_process_FUN_004897d0(CShell *this_ptr);
int __cdecl core_fire_cpp_CShell_onCollision_FUN_00489850(CShell *this_ptr,CVector3f *collision_normal);
int __cdecl core_fire_cpp_CRainDrop_onCollision_FUN_00489980(CRainDrop *this_ptr,CVector3f *collision_normal);
void __cdecl core_fire_cpp_CPopcorn_render_FUN_00489990(CPopcorn *this_ptr);
void __cdecl core_fire_cpp_CRainDrop_render_FUN_00489d00(CRainDrop *this_ptr);
CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_0048a0e0(void);
CFireEffect * __cdecl core_fire_cpp_CFireEffect_ctor_FUN_0048a130(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_init_FUN_0048a150(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_process_FUN_0048a390(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_render_FUN_0048a650(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect *this_ptr,int render_mode,int render_completeness);
void __cdecl core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0(CFireEffect *this_ptr,CVector3f *position);
void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor);
void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate);
void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix);
void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0048af70(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value);
void __cdecl core_fire_cpp_CFireEffect_createStake_FUN_0048b070(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type);
void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime);
void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle);
void __cdecl core_fire_cpp_CFireEffect_createRock_FUN_0048b320(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr);
void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread);
void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle);
void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue);
SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(SLaserInfo *this_ptr);
void __cdecl core_fire_cpp_CFireEffect_traceLaser_FUN_0048b6f0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *direction,SLaserInfo *laser_info,int recursion_depth);
void __cdecl core_fire_cpp_CFireEffect_createExplosion_FUN_0048c0d0(CFireEffect *this_ptr,CVector3f *position,float scale,float gore_multiplier,float radius);
int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier);
void __cdecl core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time,uint sfx_handle);
int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time);
void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect *this_ptr,CVector3f *position,float radius);
void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type);
void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width);
void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread);
void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);
void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr);
void __cdecl core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr);
void __cdecl core_fire_cpp_CFireEffect_createPopcorn_FUN_0048c710(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity);
void __cdecl core_fire_cpp_CFireEffect_createRainDrop_FUN_0048c760(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity);
void __cdecl core_fire_cpp_CFireEffect_load_FUN_0048c7d0(CFireEffect *this_ptr,_FILE *file_handle);
void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(CFireEffect *this_ptr,_FILE *file_handle);
int __cdecl core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0048c8a0(CFireEffect *this_ptr);
void __cdecl core_fire_cpp_transformWorldToScreen_FUN_0048c8d0(CVector3i *input,SProjectedVertex *output,CVector3f *world_position);
CVector3f * __cdecl core_fire_cpp_CKeyFramedModel_getBoundsMin_FUN_0048c920(CKeyFramedModel *this_ptr);
void __cdecl core_fire_cpp_CBulletTrail_reset_FUN_0048c930(CBulletTrail *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_deactivate_FUN_0048c940(CSmokeParticle *this_ptr);
CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_0048c960(CRainDrop *this_ptr);
CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_0048c980(CRainDrop *this_ptr,uint flags);
CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0048c990(CPopcorn *this_ptr);
CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0048c9b0(CPopcorn *this_ptr,uint flags);
CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0048c9c0(CShell *this_ptr);
CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_0048c9e0(CShell *this_ptr,uint flags);
CTrail * __cdecl core_fire_cpp_CTrail_ctor_FUN_0048c9f0(CTrail *this_ptr);
CTrail * __cdecl core_fire_cpp_CTrail_dtor_FUN_0048ca00(CTrail *this_ptr,uint flags);
CLightningBolt * __cdecl core_fire_cpp_CLightningBolt_ctor_FUN_0048ca10(CLightningBolt *this_ptr);
CLightningBolt * __cdecl core_fire_cpp_CLightningBolt_dtor_FUN_0048ca20(CLightningBolt *this_ptr,uint flags);
CGunFlame * __cdecl core_fire_cpp_CGunFlame_ctor_FUN_0048ca30(CGunFlame *this_ptr);
CGunFlame * __cdecl core_fire_cpp_CGunFlame_dtor_FUN_0048ca40(CGunFlame *this_ptr,uint flags);
CCrater * __cdecl core_fire_cpp_CCrater_ctor_FUN_0048ca50(CCrater *this_ptr);
CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_0048ca70(CCrater *this_ptr,uint flags);
CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_0048ca90(CToss *this_ptr,uint flags);
CExplosion * __cdecl core_fire_cpp_CExplosion_dtor_FUN_0048cab0(CExplosion *this_ptr,uint flags);
CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_ctor_FUN_0048cac0(CLaserBeam *this_ptr);
CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_dtor_FUN_0048cad0(CLaserBeam *this_ptr,uint flags);
CBulletTrail * __cdecl core_fire_cpp_CBulletTrail_ctor_FUN_0048cae0(CBulletTrail *this_ptr);
CBulletTrail * __cdecl core_fire_cpp_CBulletTrail_dtor_FUN_0048caf0(CBulletTrail *this_ptr,uint flags);
CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(CGlassParticle *this_ptr);
CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(CGlassParticle *this_ptr,uint flags);
CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_ctor_FUN_0048cb60(CMuzzleFlash *this_ptr);
CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_dtor_FUN_0048cb70(CMuzzleFlash *this_ptr,uint flags);
CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0048cb80(CRock *this_ptr);
CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_0048cba0(CRock *this_ptr,uint flags);
CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0048cbb0(CFireball *this_ptr);
CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_0048cbd0(CFireball *this_ptr,uint flags);
CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0048cbe0(CSpark *this_ptr);
CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_0048cc00(CSpark *this_ptr,uint flags);
CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0048cc10(CStake *this_ptr);
CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0048cc30(CStake *this_ptr,uint flags);
CBulletHole * __cdecl core_fire_cpp_CBulletHole_ctor_FUN_0048cc50(CBulletHole *this_ptr);
CBulletHole * __cdecl core_fire_cpp_CBulletHole_dtor_FUN_0048cc60(CBulletHole *this_ptr,uint flags);
CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_ctor_FUN_0048cc70(CSmokeParticle *this_ptr);
CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_dtor_FUN_0048cc80(CSmokeParticle *this_ptr,uint flags);
CKeyFramedModelInstance * __cdecl core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_0048cc90(CKeyFramedModelInstance *this_ptr,uint flags);
CRainDrop * __cdecl core_fire_cpp_CRainDrop_arrdtor256_FUN_0048cca0(CRainDrop *this_ptr,uint flags);
CPopcorn * __cdecl core_fire_cpp_CPopcorn_arrdtor256_FUN_0048ccc0(CPopcorn *this_ptr,uint flags);
CShell * __cdecl core_fire_cpp_CShell_arrdtor50_FUN_0048cce0(CShell *this_ptr,uint flags);
CTrail * __cdecl core_fire_cpp_CTrail_arrdtor100_FUN_0048cd00(CTrail *this_ptr,uint flags);
CLightningBolt * __cdecl core_fire_cpp_CLightningBolt_arrdtor10_FUN_0048cd20(CLightningBolt *this_ptr,uint flags);
CGunFlame * __cdecl core_fire_cpp_CGunFlame_arrdtor500_FUN_0048cd40(CGunFlame *this_ptr,uint flags);
CCrater * __cdecl core_fire_cpp_CCrater_arrdtor20_FUN_0048cd60(CCrater *this_ptr,uint flags);
CToss * __cdecl core_fire_cpp_CToss_arrdtor20_FUN_0048cd80(CToss *this_ptr,uint flags);
CExplosion * __cdecl core_fire_cpp_CExplosion_arrdtor10_FUN_0048cda0(CExplosion *this_ptr,uint flags);
CLaserBeam * __cdecl core_fire_cpp_CLaserBeam_arrdtor64_FUN_0048cdc0(CLaserBeam *this_ptr,uint flags);
CRock * __cdecl core_fire_cpp_CRock_arrdtor64_FUN_0048cde0(CRock *this_ptr,uint flags);
CFireball * __cdecl core_fire_cpp_CFireball_arrdtor64_FUN_0048ce00(CFireball *this_ptr,uint flags);
CBulletTrail * __cdecl core_fire_cpp_CBulletTrail_arrdtor10_FUN_0048ce20(CBulletTrail *this_ptr,uint flags);
CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_arrdtor256_FUN_0048ce40(CGlassParticle *this_ptr,uint flags);
CMuzzleFlash * __cdecl core_fire_cpp_CMuzzleFlash_arrdtor20_FUN_0048ce60(CMuzzleFlash *this_ptr,uint flags);
CSpark * __cdecl core_fire_cpp_CSpark_arrdtor256_FUN_0048ce80(CSpark *this_ptr,uint flags);
CStake * __cdecl core_fire_cpp_CStake_arrdtor256_FUN_0048cea0(CStake *this_ptr,uint flags);
CBulletHole * __cdecl core_fire_cpp_CBulletHole_arrdtor256_FUN_0048cec0(CBulletHole *this_ptr,uint flags);
CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_arrdtor2048_FUN_0048cee0(CSmokeParticle *this_ptr,uint flags);
void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void);
CFlame * __cdecl core_flame_cpp_factoryFuncFlame_FUN_0048cf30(void);
CDemonActorType * __cdecl core_flame_cpp_CFlame_getActorType_FUN_0048cf50(CFlame *this_ptr);
CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_0048cf60(CFlame *this_ptr);
void __cdecl core_flame_cpp_CFlame_setup_FUN_0048d050(CFlame *this_ptr);
void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time);
int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(CFlame *this_ptr);
void __cdecl core_flame_cpp_CFlame_hide_FUN_0048df10(CFlame *this_ptr);
void __cdecl core_flame_cpp_CFlame_renderBackground_FUN_0048df20(CFlame *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_flame_cpp_CFlame_getBoundingBox_FUN_0048e0a0(CFlame *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_flame_cpp_CFlame_archive_FUN_0048e100(CFlame *this_ptr);
ECollisionType __cdecl core_flame_cpp_CFlame_getCollisionType_FUN_0048e220(CFlame *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(CFlame *this_ptr);
void __cdecl core_flamecan_cpp_staticInit_FUN_0048e310(void);
CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_0048e340(void);
CDemonActorType * __cdecl core_flamecan_cpp_CFlameCan_getActorType_FUN_0048e360(CFlameCan *this_ptr);
CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(CFlameCan *this_ptr);
void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CFlameCan *this_ptr);
void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan *this_ptr);
void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *this_ptr,float delta_time);
int __cdecl core_flamecan_cpp_CFlameCan_renderOpaque_FUN_0048e6d0(CFlameCan *this_ptr);
int __cdecl core_flamecan_cpp_CFlameCan_renderTransparent_FUN_0048e760(CFlameCan *this_ptr);
int __cdecl core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_0048e790(CFlameCan *this_ptr,CVector3f *out_points_array);
void __cdecl core_flamecan_cpp_CFlameCan_archive_FUN_0048e830(CFlameCan *this_ptr);
ECollisionType __cdecl core_flamecan_cpp_CFlameCan_getCollisionType_FUN_0048e890(CFlameCan *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_flamecan_cpp_CFlameCan_getBoundingBox_FUN_0048e8a0(CFlameCan *this_ptr,CBoundingBox3D *out_box);
CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_dtor_FUN_0048e8f0(CFlameCan *this_ptr,uint flags);
void __cdecl core_flamegun_cpp_staticInit_FUN_0048e960(void);
CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_0048e990(void);
CDemonActorType * __cdecl core_flamegun_cpp_CFlameThrower_getActorType_FUN_0048e9b0(CFlameThrower *this_ptr);
CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(CFlameThrower *this_ptr);
int __cdecl core_flamegun_cpp_CFlameThrower_fire_FUN_0048ea60(CFlameThrower *this_ptr);
void __cdecl core_flamegun_cpp_CFlameThrower_process_FUN_0048eb30(CFlameThrower *this_ptr,float delta_time);
float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_0048ec60(CFlameThrower *this_ptr);
void __cdecl core_flamegun_cpp_CFlameThrower_fireProjectile_FUN_0048ec80(CFlameThrower *this_ptr);
CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_0048ecb0(CFlameThrower *this_ptr,uint flags);
void __cdecl core_flashlit_cpp_staticInit_FUN_0048ed00(void);
CFlashlight * __cdecl core_flashlit_cpp_factoryFuncFlashlight_FUN_0048ed30(void);
CDemonActorType * __cdecl core_flashlit_cpp_CFlashlight_getActorType_FUN_0048ed50(CFlashlight *this_ptr);
CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(CFlashlight *this_ptr);
int __cdecl core_flashlit_cpp_CFlashlight_fire_FUN_0048ede0(CFlashlight *this_ptr);
float __cdecl core_flashlit_cpp_CFlashlight_getDamage_FUN_0048edf0(CFlashlight *this_ptr);
CFlashlight * __cdecl core_flashlit_cpp_CFlashlight_dtor_FUN_0048ee00(CFlashlight *this_ptr,uint flags);
void __cdecl core_flattn_cpp_staticInit_FUN_0048ee50(void);
void __cdecl core_flattn_cpp_doNothing_FUN_0048ee80(void);
void __cdecl core_flies_cpp_staticInit_FUN_0048ee90(void);
CFlies * __cdecl core_flies_cpp_factoryFuncFlies_FUN_0048eec0(void);
CDemonActorType * __cdecl core_flies_cpp_CFlies_getActorType_FUN_0048eee0(CFlies *this_ptr);
CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_0048eef0(CFlies *this_ptr);
void __cdecl core_flies_cpp_CFlies_setup_FUN_0048efb0(CFlies *this_ptr);
void __cdecl core_flies_cpp_CFlies_archive_FUN_0048eff0(CFlies *this_ptr);
void __cdecl core_flies_cpp_CFlies_process_FUN_0048f090(CFlies *this_ptr,float delta_time);
void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int screen_x,int screen_y,int z_depth);
int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_0048f490(CFlies *this_ptr);
CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_0048f890(CFlies *this_ptr,CBoundingBox3D *out_box);
ECollisionType __cdecl core_flies_cpp_CFlies_getCollisionType_FUN_0048f8e0(CFlies *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_flies_cpp_CFlies_initFly_FUN_0048f8f0(CFlies *this_ptr,int fly_index);
CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point);
CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(CDemonActor *actor);
CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags);
SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_0048fca0(SFly *this_ptr);
SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_0048fcc0(SFly *this_ptr,uint flags);
SFly * __cdecl core_flies_cpp_SFly_arrdtor200_FUN_0048fce0(SFly *this_ptr,uint flags);
int __cdecl engine_font_cpp_isRectangleClipped_FUN_0048fd00(int rect_width,int rect_height,int rect_x,int rect_y);
int __cdecl engine_font_cpp_clipCharacter_FUN_0048fd50(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width );
CBitFont * __cdecl engine_font_cpp_CBitFont_ctor_FUN_0048fe10(CBitFont *this_ptr);
CBitFont * __cdecl engine_font_cpp_CBitFont_dtor_FUN_0048fe30(CBitFont *this_ptr,uint flags);
void __cdecl engine_font_cpp_CBitFont_reset_FUN_0048fe50(CBitFont *this_ptr);
void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont *this_ptr,char *filename,int width,int height,int load_flags);
void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_0048ff70(CBitFont *this_ptr,char *filename,int width,int height,int first_char);


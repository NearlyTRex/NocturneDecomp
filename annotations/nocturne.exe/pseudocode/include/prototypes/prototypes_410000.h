#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBackgroundActor.h"
#include "types/classes/CBaron.h"
#include "types/classes/CBaronWeapon.h"
#include "types/classes/CBarrier.h"
#include "types/classes/CBat.h"
#include "types/classes/CBatCreature.h"
#include "types/classes/CBatman.h"
#include "types/classes/CBattery.h"
#include "types/classes/CBeast.h"
#include "types/classes/CBiggs.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBoneGuy.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CBride.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CHero.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CLightActor.h"
#include "types/classes/CStairs.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWeapon.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EGroundType.h"
#include "types/structs/SBodyPartFire.h"
#include "types/structs/SBodyPartModel.h"
#include "types/structs/SBoneGuyBox.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SScrape.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x410000
// =============================================================================

void core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(CDemonActor *param_1);
ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_004100a0(CBackgroundActor *this_ptr,SCollisionInfo *collision_info);
EGroundType __cdecl core_backgnd_cpp_CBackgroundActor_getGroundType_FUN_004100e0(CBackgroundActor *this_ptr);
CDemonActor * core_backgnd_cpp_CBackgroundActor_dtor_FUN_004100f0(CDemonActor *param_1,byte param_2);
void __cdecl core_baron_cpp_staticInit_FUN_00410140(void);
CBaron * __cdecl core_baron_cpp_factoryFunc_FUN_004101a0(void);
CDemonActorType * core_baron_cpp_CBaron_getActorType_FUN_004101c0(void);
CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_004101d0(CBaron *this_ptr);
void core_baron_cpp_CBaron_setup_FUN_004102c0(CHero *param_1);
void core_baron_cpp_CBaron_process_FUN_00410490(CBaron *param_1,float param_2);
void __cdecl core_baron_cpp_CBaron_attachToOwner_FUN_00410a80(CBaron *this_ptr,CDemonActor *target);
void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(CBaron *this_ptr,CDemonActor *target);
void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(CBaron *this_ptr,float delta_time);
void __cdecl core_baron_cpp_FUN_00410cc0(CBaron *this_ptr);
void core_baron_cpp_CBaron_advanceMotion_FUN_00411010(CBaron *param_1,float param_2);
void core_baron_cpp_CBaron_archive_FUN_00411080(CHero *param_1);
undefined4 core_baron_cpp_FUN_004110e0(void);
int core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CDemonActor *param_1);
void __cdecl core_baron_cpp_CBaron_processDamage_FUN_004112f0(CBaron *this_ptr,SDamageInfo *damage_info);
void core_baron_cpp_CBaron_handlePureVirtualCall_FUN_00411310(void);
CBaronWeapon * __cdecl core_baron_cpp_factoryFunc_FUN_00411320(void);
CDemonActorType * core_baron_cpp_CBaronWeapon_getActorType_FUN_00411340(void);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_004113b0(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004113d0(CBaronWeapon *this_ptr,float delta_time);
void core_baron_cpp_CBaronWeapon_renderOpaque_FUN_004113f0(CWeapon *param_1);
undefined4 core_baron_cpp_CBaronWeapon_fire_FUN_00411400(CBaronWeapon *param_1);
longlong core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(CBaronWeapon *param_1);
void core_baron_cpp_FUN_00411470(void);
void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CBaronWeapon *this_ptr,int weapon_state);
void __cdecl core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(CBaronWeapon *this_ptr);
undefined4 core_baron_cpp_CBaron_getCollisionType_FUN_00411600(void);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00411610(CBaronWeapon *this_ptr,uint flags);
CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags);
void __cdecl core_barrier_cpp_staticInit_FUN_004116b0(void);
void core_barrier_cpp_FUN_004116e0(void);
CDemonActorType * core_barrier_cpp_CBarrier_getActorType_FUN_00411700(void);
CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00411710(CBarrier *this_ptr);
void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00411760(CBarrier *this_ptr);
undefined4 core_barrier_cpp_CBarrier_renderTransparent_FUN_00411790(void);
void core_barrier_cpp_CBarrier_getBoundingBox_FUN_004117a0(int param_1,float *param_2);
void core_barrier_cpp_CBarrier_archive_FUN_00411800(CDemonActor *param_1);
undefined4 core_barrier_cpp_CBarrier_getCollisionType_FUN_00411860(int param_1,int *param_2);
void core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CDemonActor *param_1);
CDemonActor * core_barrier_cpp_CBarrier_dtor_FUN_004118c0(CDemonActor *param_1,byte param_2);
void __cdecl core_bat_cpp_staticInit_FUN_00411910(void);
float core_bat_cpp_FUN_00411940(float param_1,float param_2);
CBat * __cdecl core_bat_cpp_factoryFunc_FUN_004119e0(void);
CDemonActorType * core_bat_cpp_CBat_getActorType_FUN_00411a00(void);
CKeyFramedModel ** core_bat_cpp_FUN_00411a10(CDemonActor *param_1);
void core_bat_cpp_CBat_setup_FUN_00411ae0(CBat *param_1);
void core_bat_cpp_CBat_archive_FUN_00411b50(CDemonActor *param_1);
void core_bat_cpp_CBat_process_FUN_00411c40(CBat *param_1,float param_2);
int core_bat_cpp_CBat_renderOpaque_FUN_00411e30(CDemonActor *param_1);
undefined4 * core_bat_cpp_CBat_getBoundingBox_FUN_00411ea0(int param_1,undefined4 *param_2);
void __cdecl core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(CBat *this_ptr);
CStairs * __cdecl core_bat_cpp_CStairs_dtor_FUN_00412000(CStairs *this_ptr,uint flags);
void core_bat_cpp_FUN_0041206c(void);
undefined4 * core_bat_cpp_FUN_00412080(undefined4 *param_1,undefined4 *param_2);
undefined4 * core_bat_cpp_FUN_00412090(undefined4 *param_1,undefined4 *param_2);
void __cdecl core_batcreat_cpp_staticInit_FUN_004120a0(void);
CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void);
CDemonActorType * core_batcreat_cpp_CBatCreature_getActorType_FUN_004120f0(void);
CEnemy * core_batcreat_cpp_FUN_00412100(CEnemy *param_1);
void core_batcreat_cpp_CBatCreature_setup_FUN_00412160(CEnemy *param_1);
void core_batcreat_cpp_CBatCreature_process_FUN_00412480(CEnemy *param_1,float param_2);
void core_batcreat_cpp_CBatCreature_archive_FUN_00412d80(CEnemy *param_1);
void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00412de0(CBatCreature *this_ptr,SDamageInfo *damage_info);
void core_batcreat_cpp_CBatCreature_processDamage_FUN_00413040(CBatCreature *param_1,SDamageInfo *param_2);
undefined4 core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(int param_1,CVector3f *param_2);
void core_batcreat_cpp_CBatCreature_getCollisionType_FUN_004132a0(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_004132c0(CBatCreature *this_ptr,uint flags);
void __cdecl core_batman_cpp_staticInit_FUN_00413380(void);
CBatman * __cdecl core_batman_cpp_factoryFunc_FUN_004133b0(void);
CDemonActorType * core_batman_cpp_CBatman_getActorType_FUN_004133d0(void);
CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_004133e0(CBatman *this_ptr);
void core_batman_cpp_CBatman_setup_FUN_004134a0(CEnemy *param_1);
void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman *this_ptr);
void core_batman_cpp_CBatman_process_FUN_00413800(CBatman *param_1,float param_2);
int core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CCharacter *param_1);
void core_batman_cpp_CBatman_archive_FUN_00414510(CEnemy *param_1);
void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(CBatman *this_ptr,SDamageInfo *damage_info);
void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00414930(CBatman *this_ptr,SDamageInfo *damage_info);
int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_00414b40(CBatman *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_batman_cpp_CBatman_getCollisionType_FUN_00414c40(CBatman *this_ptr,SCollisionInfo *collision_info);
CBatman * __cdecl core_batman_cpp_CBatman_dtor_FUN_00414c60(CBatman *this_ptr,uint flags);
void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void);
CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00414d50(void);
CDemonActorType * core_battery_cpp_CBattery_getActorType_FUN_00414d70(void);
int * core_battery_cpp_FUN_00414d80(CDemonActor *param_1);
void __cdecl core_battery_cpp_CBattery_setup_FUN_00414de0(CBattery *this_ptr);
undefined4 core_battery_cpp_CBattery_canPickup_FUN_00414e10(undefined4 param_1,CDemonActor *param_2);
void __cdecl core_battery_cpp_CBattery_pickup_FUN_00414e30(CBattery *this_ptr,CDemonActor *carrier);
void __cdecl core_battery_cpp_CBattery_onDropped_FUN_00414e40(CBattery *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_00414e50(CBattery *this_ptr);
void core_battery_cpp_CBattery_process_FUN_00414e60(void);
int core_battery_cpp_CBattery_renderOpaque_FUN_00414e70(int param_1);
void core_battery_cpp_CBattery_archive_FUN_00414ef0(CDemonActor *param_1);
undefined4 core_battery_cpp_CBattery_getCollisionType_FUN_00414f40(void);
CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_00414f50(CBattery *this_ptr,CBoundingBox3D *out_box);
CDemonActor * core_battery_cpp_CBattery_dtor_FUN_00414fa0(CDemonActor *param_1,byte param_2);
void __cdecl core_beast_cpp_staticInit_FUN_00414ff0(void);
CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_00415020(void);
CDemonActorType * core_beast_cpp_CBeast_getActorType_FUN_00415040(void);
CEnemy * core_beast_cpp_FUN_00415050(CEnemy *param_1);
void __cdecl core_beast_cpp_CBeast_setup_FUN_004150b0(CBeast *this_ptr);
void core_beast_cpp_CBeast_process_FUN_004150d0(CCharacter *param_1,float param_2);
void core_beast_cpp_CBeast_archive_FUN_00415160(CEnemy *param_1);
void core_beast_cpp_CBeast_processDamage_FUN_004151b0(CEnemy *param_1,SDamageInfo *param_2);
undefined4 core_beast_cpp_CBeast_getDeathState_FUN_004151d0(void);
undefined4 core_beast_cpp_CBeast_getTargetPoints_FUN_004151e0(int param_1,CVector3f *param_2);
undefined4 core_beast_cpp_CBeast_getCollisionType_FUN_00415230(int param_1,int *param_2);
CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00415250(CBeast *this_ptr,uint flags);
void __cdecl core_biggs_cpp_staticInit_FUN_00415310(void);
CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00415340(void);
CDemonActorType * core_biggs_cpp_CBiggs_getActorType_FUN_00415360(void);
CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00415370(CBiggs *this_ptr);
void core_biggs_cpp_CBiggs_setup_FUN_00415430(CEnemy *param_1);
void core_biggs_cpp_CBiggs_process_FUN_004154b0(CCharacter *param_1,float param_2);
int core_biggs_cpp_CBiggs_renderOpaque_FUN_00415760(CCharacter *param_1);
void core_biggs_cpp_CBiggs_archive_FUN_00415870(CEnemy *param_1);
void core_biggs_cpp_CBiggs_processDamage_FUN_00415900(CEnemy *param_1,SDamageInfo *param_2);
int __cdecl core_biggs_cpp_CBiggs_getTargetPoints_FUN_004159c0(CBiggs *this_ptr,CVector3f *out_points_array);
void core_biggs_cpp_CBiggs_getCollisionType_FUN_00415a10(CCharacter *param_1,SCollisionInfo *param_2);
CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00415a30(CBiggs *this_ptr,uint flags);
void __cdecl core_bodypart_cpp_staticInit_FUN_00415b00(void);
CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00415b30(CVector3f *position,UOrientationVector *orientation,CVector3f *initial_velocity,CDemonActor *scale_source,int dont_use_normals,int is_transparent,int blood_type);
CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00415cf0(void);
CDemonActorType * core_bodypart_cpp_CBodyPart_getActorType_FUN_00415d10(void);
CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart *this_ptr);
CDemonActor * core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CDemonActor *param_1,byte param_2);
void core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(int param_1,undefined4 param_2,undefined4 param_3);
void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(CBodyPart *this_ptr,int render_flags);
int core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004161a0(CBodyPart *param_1);
void core_bodypart_cpp_CBodyPart_renderBackground_FUN_00416300(CBodyPart *param_1,int param_2);
undefined4 core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(CBodyPart *param_1);
void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(CDemonActor *param_1);
void core_bodypart_cpp_CBodyPart_archive_FUN_00416570(CBodyPart *param_1);
void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(CBodyPart *param_1,float param_2);
void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(CBodyPart *this_ptr,float delta_time);
undefined4 core_bodypart_cpp_CBodyPart_getCollisionType_FUN_00416c40(void);
undefined4 * core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00416c50(int param_1,undefined4 *param_2);
undefined4 core_bodypart_cpp_CBodyPart_canPickup_FUN_00416c90(int param_1);
void core_bodypart_cpp_CBodyPart_pickup_FUN_00416cb0(int param_1,undefined4 param_2);
void core_bodypart_cpp_CBodyPart_onDropped_FUN_00416cc0(int param_1,CVector3f *param_2);
undefined4 core_bodypart_cpp_CBodyPart_getCarrier_FUN_00416d30(int param_1);
void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(CBodyPart *this_ptr,CVector3f *euler_angles);
void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max);
void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417ac0(CBodyPart *this_ptr,char *model_name,CVector3f *scale,CVector3f *position);
void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(CBodyPart *this_ptr,CVector3f *position);
int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(CBodyPart *this_ptr,char *texture_name);
void core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(CDemonActor *param_1);
void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(CBodyPart *this_ptr);
int core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ef0(CDemonActor *param_1);
void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417f10(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);
CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_00417f60(CVector3f *src,CVector3f *dst,float *scalar);
CVector3f * __cdecl core_bodypart_cpp_subtractVector_FUN_00417f90(CVector3f *a,CVector3f *dst,CVector3f *b);
CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_00417fc0(CVector3f *a,CVector3f *dst,CVector3f *b);
void core_bodypart_cpp_FUN_00417fec(void);
CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_00418010(CBoundingBox3D *src,CBoundingBox3D *dst);
float * core_bodypart_cpp_FUN_0041803d(float *param_1);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(SBodyPartFire *this_ptr);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0(SBodyPartFire *this_ptr,uint flags);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(SBodyPartModel *this_ptr);
undefined4 core_bodypart_cpp_SBodyPartModel_dtor_FUN_00418100(undefined4 param_1);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_00418110(SBodyPartModel *objs,uint flags);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_00418130(SBodyPartFire *objs,uint flags);
void __cdecl core_boneguy_cpp_staticInit_FUN_00418150(void);
float * core_boneguy_cpp_FUN_00418180(float *param_1,int param_2);
CVector3f * core_boneguy_cpp_FUN_004181f0(CVector3f *param_1,CDemonActor *param_2);
CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_004182a0(void);
CDemonActorType * core_boneguy_cpp_CBoneGuy_getActorType_FUN_004182c0(void);
float * core_boneguy_cpp_FUN_004182cd(float *param_1);
CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_00418480(CColor3f *out_rgb,CColor3f *in_hsv);
CBoneGuy * __cdecl core_boneguy_cpp_FUN_00418630(CBoneGuy *this_ptr);
void core_boneguy_cpp_CBoneGuy_setup_FUN_00418800(CEnemy *param_1);
void core_boneguy_cpp_CBoneGuy_process_FUN_00418a00(CBoneGuy *param_1,float param_2);
void core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004194b0(int param_1,int param_2);
int __cdecl core_boneguy_cpp_FUN_004196b0(CBoneGuy *this_ptr,float delta_time);
void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419bf0(CBoneGuy *this_ptr);
int core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CCharacter *param_1);
void core_boneguy_cpp_CBoneGuy_archive_FUN_00419ce0(CEnemy *param_1);
undefined4 core_boneguy_cpp_CBoneGuy_reset_FUN_00419f30(void);
void core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(CBoneGuy *param_1,SDamageInfo *param_2);
undefined4 core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419fc0(int param_1,CVector3f *param_2);
void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(CBoneGuy *this_ptr);
ECollisionType __cdecl core_boneguy_cpp_CBoneGuy_getCollisionType_FUN_0041a3e0(CBoneGuy *this_ptr,SCollisionInfo *collision_info);
CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a400(CBoneGuy *this_ptr,uint flags);
undefined4 core_boneguy_cpp_FUN_0041a4d0(undefined4 param_1);
undefined4 core_boneguy_cpp_FUN_0041a4e0(undefined4 param_1);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0(SBoneGuyBox *objs,uint flags);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported1_FUN_0041a510(SMRGLHeaderExtended *mrgl_data);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported2_FUN_0041a540(char *filename);
void __cdecl engine_boss_c_modelStructNotSupported3_FUN_0041a570(SMRGLHeaderExtended *mrgl_data);
void engine_boss_c_modelStructNotSupported4_FUN_0041a5a0(void);
void __cdecl engine_boss_c_modelStructNotSupported5_FUN_0041a5e0(SMRGLHeaderExtended *mrgl_data);
CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041a610(CBox *this_ptr);
CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041a6c0(CBox *this_ptr,uint flags);
void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume);
void __cdecl core_box_cpp_CBox_setupN_FUN_0041a910(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume);
void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041aaa0(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed);
void __cdecl core_box_cpp_CBox_process_FUN_0041acb0(CBox *this_ptr,float delta_time);
void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041ad10(CBox *this_ptr,float delta_time);
void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(CBox *this_ptr,_FILE *file_handle);
void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix);
void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity);
undefined4 core_box_cpp_FUN_0041cbc0(undefined4 param_1);
undefined4 core_box_cpp_FUN_0041cbd0(undefined4 param_1);
SScrape * __cdecl core_box_cpp_SScrape_arrdtor_FUN_0041cbe0(SScrape *objs,uint flags);
void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D *this_ptr,CVector3f *point);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index);
int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D *this_ptr);
undefined4 core_box_cpp_FUN_0041d050(CBoundingBox3D *param_1);
float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(CBoundingBox3D *this_ptr);
float __cdecl core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);
void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_0041d980(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_0041daa0(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices);
void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_0041dbf0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(CBoundingBox3D *this_ptr,CBoundingBox3D *other);
float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D *this_ptr);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point);
int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius);
void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void);
CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041e2d0(void);
CDemonActorType * core_boxactor_cpp_CBoxActor_getActorType_FUN_0041e2f0(void);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_0041e430(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(CBoxActor *this_ptr,float delta_time);
int core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(int param_1);
int core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041eaf0(int param_1);
undefined4 * core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_0041ebe0(int param_1,undefined4 *param_2);
void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_0041ec60(CBoxActor *this_ptr);
undefined4 core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_0041ef30(int param_1);
undefined4 core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(int param_1,int param_2);
void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);
undefined4 core_boxactor_cpp_CBoxActor_canPickup_FUN_0041f0b0(int param_1,CDemonActor *param_2);
void core_boxactor_cpp_CBoxActor_pickup_FUN_0041f0e0(int param_1,undefined4 param_2);
void core_boxactor_cpp_CBoxActor_onDropped_FUN_0041f0f0(CBoxActor *param_1,CVector3f *param_2);
undefined4 core_boxactor_cpp_CBoxActor_getCarrier_FUN_0041f150(int param_1);
undefined4 core_boxactor_cpp_CBoxActor_getGroundType_FUN_0041f160(int param_1);
void core_boxactor_cpp_CBoxActor_onPickup_FUN_0041f170(CDemonActor *param_1,CDemonActor *param_2);
void __cdecl core_boxactor_cpp_FUN_0041f190(CBoxActor *this_ptr);
void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(CBoxActor *param_1,float *param_2,float *param_3);
int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_0041f2d0(CBoxActor *this_ptr);
void core_boxactor_cpp_FUN_0041f2e0(void);
CDemonActorType * core_boxactor_cpp_CLightActor_getActorType_FUN_0041f300(void);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041f310(CLightActor *this_ptr);
void core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(CLightActor *param_1);
void core_boxactor_cpp_CLightActor_process_FUN_0041f3d0(CBoxActor *param_1,float param_2);
void core_boxactor_cpp_CLightActor_archive_FUN_0041f600(CBoxActor *param_1);
void __cdecl core_boxactor_cpp_FUN_0041f6e0(CLightActor *this_ptr);
int __cdecl core_boxactor_cpp_CLightActor_isLightPartVisible_FUN_0041f9f0(CLightActor *this_ptr);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10(CLightActor *this_ptr,uint flags);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_0041fa90(CBoxActor *this_ptr,uint flags);
void core_boxactor_cpp_FUN_0041fb00(void *param_1);
void __cdecl core_bride_cpp_staticInit_FUN_0041fb20(void);
CBride * __cdecl core_bride_cpp_factoryFunc_FUN_0041fb80(void);
CDemonActorType * core_bride_cpp_CBride_getActorType_FUN_0041fba0(void);
CBride * __cdecl core_bride_cpp_FUN_0041fbb0(CBride *this_ptr);
void core_bride_cpp_CBride_setup_FUN_0041fc20(CEnemy *param_1);
void core_bride_cpp_CBride_process_FUN_0041fe40(CEnemy *param_1,float param_2);


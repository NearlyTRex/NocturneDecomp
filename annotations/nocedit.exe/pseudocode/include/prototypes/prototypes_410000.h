#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CAmmo.h"
#include "types/classes/CAmmoBox.h"
#include "types/classes/CAnvil.h"
#include "types/classes/CArmour.h"
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
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CFlame.h"
#include "types/classes/CInventory.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CSlew.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SBodyPartFire.h"
#include "types/structs/SBodyPartModel.h"
#include "types/structs/SBoneGuyBox.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SMRGLHeaderExtended.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x410000
// =============================================================================

CVector3f * __cdecl core_actor_cpp_CVector_ctor_FUN_00410340(CVector3f *this_ptr);
CVector3f * __cdecl core_actor_cpp_CVector_dtor_FUN_00410350(CVector3f *this_ptr,uint flags);
void __cdecl core_actor_cpp_copyVector_FUN_00410360(CVector3f *dst_ptr,CVector3f *src_ptr);
float __cdecl core_actor_cpp_CVector3f_length_FUN_00410380(CVector3f *this_ptr);
void __cdecl core_actor_cpp_CVector3f_zero_FUN_004103b0(CVector3f *this_ptr);
void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(CVector3f *this_ptr,CVector3f *other);
CSlew * __cdecl core_actor_cpp_CSlew_ctor_FUN_00410400(CSlew *this_ptr);
CSlew * __cdecl core_actor_cpp_CSlew_dtor_FUN_00410410(CSlew *this_ptr,uint flags);
SDamageInfo * __cdecl core_actor_cpp_SDamageInfo_dtor_FUN_00410420(SDamageInfo *this_ptr,uint flags);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_ctor_FUN_00410430(CBoundingBox3D *this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D *this_ptr,CBoundingBox3D *other);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_dtor_FUN_00410490(CBoundingBox3D *this_ptr,uint flags);
CVector3f * __cdecl core_actor_cpp_CVector_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other);
float * __cdecl core_actor_cpp_copyFloat_FUN_004104d0(float *dst,float *src);
float * __cdecl core_actor_cpp_copyFloat_FUN_004104e0(float *dst,float *src);
float * __cdecl core_actor_cpp_copyFloat_FUN_004104f0(float *dst,float *src);
CVector3f * __cdecl core_actor_cpp_CVector3f_arrdtor_FUN_00410500(CVector3f *objs,uint flags);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *this_ptr);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *this_ptr,uint flags);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *this_ptr);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap *this_ptr,char *filename,int width,int height);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap *this_ptr,int x,int y,int alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap *this_ptr,int dest_y,int dest_x,int left_x,int top_y,int right_x, int bottom_y);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *this_ptr);
void __cdecl engine_alphabit_cpp_copyBytes_FUN_00410d20(void *src,void *dest,int width,int height);
void __cdecl core_ammo_cpp_staticInit_FUN_00410d50(void);
CAmmo * __cdecl core_ammo_cpp_factoryFunc_FUN_00410d80(void);
CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_00410db0(CAmmo *this_ptr);
CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr);
void __cdecl core_ammo_cpp_CAmmo_setup_FUN_00410e50(CAmmo *this_ptr);
void __cdecl core_ammo_cpp_CAmmo_process_FUN_00410e70(CAmmo *this_ptr,float delta_time);
int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_00410e80(CAmmo *this_ptr);
CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_ammo_cpp_CAmmo_archive_FUN_00410f40(CAmmo *this_ptr);
int __cdecl core_ammo_cpp_CAmmo_hasCollision_FUN_00410fa0(CAmmo *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_ammo_cpp_CAmmo_FUN_00410fd0(CAmmo *this_ptr,char *weapon_class_name);
void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_004111b0(CAmmo *this_ptr,int ammo_count);
int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_004111c0(CAmmo *this_ptr,CDemonActor *picker);
void __cdecl core_ammo_cpp_CAmmo_propertyDisplayCallback_FUN_00411200(CAmmo *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_ammo_cpp_CAmmo_propertyActionCallback_FUN_004112b0(CAmmo *this_ptr,CActorProperty *property);
void __cdecl core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo *this_ptr,CActorPropertyList *property_list);
void __cdecl core_ammo_cpp_CAmmo_addFilesToExtract_FUN_004113e0(CAmmo *this_ptr,_FILE *file_handle);
CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_004114e0(CAmmo *this_ptr,uint flags);
void __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void);
CAmmoBox * __cdecl core_ammobox_cpp_factoryFunc_FUN_00411560(void);
CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_00411590(CAmmoBox *this_ptr);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox *this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_00411650(CAmmoBox *this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_process_FUN_00411680(CAmmoBox *this_ptr,float delta_time);
void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411690(CAmmoBox *this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411700(CAmmoBox *this_ptr,CInventory *inventory);
int __cdecl core_ammobox_cpp_CAmmoBox_renderOpaque_FUN_00411820(CAmmoBox *this_ptr);
CBoundingBox3D * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_004118b0(CAmmoBox *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_ammobox_cpp_CAmmoBox_archive_FUN_00411900(CAmmoBox *this_ptr);
int __cdecl core_ammobox_cpp_CAmmoBox_hasCollision_FUN_004119d0(CAmmoBox *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_004119f0(CAmmoBox *this_ptr,CDemonActor *carrier);
void __cdecl core_ammobox_cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30(CAmmoBox *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_ammobox_cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0(CAmmoBox *this_ptr,CActorProperty *property);
void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox *this_ptr,CActorPropertyList *property_list);
void __cdecl core_ammobox_cpp_CAmmoBox_addFilesToExtract_FUN_00411c00(CAmmoBox *this_ptr,_FILE *file_handle);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox *this_ptr,uint flags);
void __cdecl core_anvil_cpp_staticInit_FUN_00411c70(void);
CAnvil * __cdecl core_anvil_cpp_factoryFunc_FUN_00411ca0(void);
CDemonActorType * __cdecl core_anvil_cpp_CAnvil_getActorType_FUN_00411cd0(CAnvil *this_ptr);
CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_setup_FUN_00411d70(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil *this_ptr,float delta_time);
int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_00411ec0(CAnvil *this_ptr);
void __cdecl core_anvil_cpp_CAnvil_archive_FUN_00411f50(CAnvil *this_ptr);
int __cdecl core_anvil_cpp_CAnvil_hasCollision_FUN_00411fd0(CAnvil *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_00411fe0(CAnvil *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_anvil_cpp_CAnvil_getPropertyList_FUN_00412030(CAnvil *this_ptr,CActorPropertyList *property_list);
void __cdecl core_anvil_cpp_CAnvil_addFilesToExtract_FUN_00412090(CAnvil *this_ptr,_FILE *file_handle);
CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_004120e0(CAnvil *this_ptr,uint flags);
void __cdecl core_armour_cpp_staticInit_FUN_00412130(void);
CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_00412160(void);
CDemonActorType * __cdecl core_armour_cpp_CArmour_getActorType_FUN_00412190(CArmour *this_ptr);
CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_setup_FUN_00412240(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_process_FUN_00412260(CArmour *this_ptr,float delta_time);
void __cdecl core_armour_cpp_CArmour_archive_FUN_004123a0(CArmour *this_ptr);
void __cdecl core_armour_cpp_CArmour_processDamage_FUN_00412400(CArmour *this_ptr,SDamageInfo *damage_info);
int __cdecl core_armour_cpp_CArmour_getTargetPoints_FUN_00412440(CArmour *this_ptr,CVector3f *out_points_array);
int __cdecl core_armour_cpp_CArmour_hasCollision_FUN_00412450(CArmour *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_armour_cpp_CArmour_getPropertyList_FUN_00412470(CArmour *this_ptr,CActorPropertyList *property_list);
void __cdecl core_armour_cpp_CArmour_addFilesToExtract_FUN_004124d0(CArmour *this_ptr,_FILE *file_handle);
CArmour * __cdecl core_armour_cpp_CArmour_dtor_FUN_00412500(CArmour *this_ptr,uint flags);
CEnemy * __cdecl core_armour_cpp_CEnemy_dtor_FUN_004125c0(CEnemy *this_ptr,uint flags);
SFire * __cdecl core_armour_cpp_SFire_dtor_FUN_00412680(SFire *this_ptr,uint flags);
CFlame * __cdecl core_armour_cpp_CFlame_dtor_FUN_00412690(CFlame *this_ptr,uint flags);
CVector3f * __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(CVector3f *objs,uint flags);
SFire * __cdecl core_armour_cpp_SFire_arrdtor_FUN_00412700(SFire *objs,uint flags);
CFlame * __cdecl core_armour_cpp_CFlame_arrdtor_FUN_00412720(CFlame *objs,uint flags);
void __cdecl core_backgnd_cpp_staticInit_FUN_00412740(void);
CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_00412770(void);
CDemonActorType * __cdecl core_backgnd_cpp_CBackgroundActor_getActorType_FUN_004127a0(CBackgroundActor *this_ptr);
CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor *this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_00412810(CBackgroundActor *this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_process_FUN_00412850(CBackgroundActor *this_ptr,float delta_time);
void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_00412860(CBackgroundActor *this_ptr,int layer_flag);
int __cdecl core_backgnd_cpp_CBackgroundActor_renderOpaque_FUN_004128d0(CBackgroundActor *this_ptr);
CBoundingBox3D * __cdecl core_backgnd_cpp_CBackgroundActor_getBoundingBox_FUN_00412940(CBackgroundActor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_backgnd_cpp_CBackgroundActor_archive_FUN_00412990(CBackgroundActor *this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_hasCollision_FUN_004129f0(CBackgroundActor *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_backgnd_cpp_CBackgroundActor_getGroundType_FUN_00412a30(CBackgroundActor *this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_getPropertyList_FUN_00412a40(CBackgroundActor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_backgnd_cpp_CBackgroundActor_addFilesToExtract_FUN_00412ab0(CBackgroundActor *this_ptr,_FILE *file_handle);
CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor *this_ptr,uint flags);
void __cdecl core_baron_cpp_staticInit_FUN_00412b20(void);
void __cdecl core_baron_cpp_staticInit_FUN_00412b41(void);
CBaron * __cdecl core_baron_cpp_factoryFunc_FUN_00412b80(void);
CDemonActorType * __cdecl core_baron_cpp_CBaron_getActorType_FUN_00412bb0(CBaron *this_ptr);
CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr);
void __cdecl core_baron_cpp_CBaron_setup_FUN_00412cb0(CBaron *this_ptr);
void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr,float delta_time);
void __cdecl core_baron_cpp_CBaron_engageTarget_FUN_00413470(CBaron *this_ptr,CDemonActor *target);
void __cdecl core_baron_cpp_CBaron_FUN_004135a0(CBaron *this_ptr,int param_2);
void __cdecl core_baron_cpp_CBaron_FUN_004135e0(CBaron *this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_004136b0(CBaron *this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00413a00(CBaron *this_ptr,float param_2);
void __cdecl core_baron_cpp_CBaron_archive_FUN_00413a70(CBaron *this_ptr);
int __cdecl core_baron_cpp_CBaron_renderOpaque_FUN_00413ad0(CBaron *this_ptr);
int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron *this_ptr);
void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00413cd0(CBaron *this_ptr,SDamageInfo *damage_info);
void __cdecl core_baron_cpp_CBaron_drawWeapon_FUN_00413cf0(CBaron *this_ptr,int drawn);
CBaronWeapon * __cdecl core_baron_cpp_factoryFunc_FUN_00413d00(void);
CDemonActorType * __cdecl core_baron_cpp_CBaronWeapon_getActorType_FUN_00413d30(CBaronWeapon *this_ptr);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_setup_FUN_00413da0(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr,float delta_time);
void __cdecl core_baron_cpp_CBaronWeapon_renderOpaque_FUN_00413de0(CBaronWeapon *this_ptr);
int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00413df0(CBaronWeapon *this_ptr);
int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00413e30(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_fireProjectile_FUN_00413e60(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon *this_ptr);
void __cdecl core_baron_cpp_CBaron_onActorDeleted_FUN_00413ff0(CBaron *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_baron_cpp_CBaron_getPropertyList_FUN_00414010(CBaron *this_ptr,CActorPropertyList *property_list);
void __cdecl core_baron_cpp_CBaron_addFilesToExtract_FUN_00414070(CBaron *this_ptr,_FILE *file_handle);
void __cdecl core_baron_cpp_CBaron_FUN_00414090(CBaron *this_ptr);
int __cdecl core_baron_cpp_CBaron_hasCollision_FUN_004140a0(CBaron *this_ptr,SCollisionInfo *collision_info);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon *this_ptr,uint flags);
CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint flags);
void __cdecl core_barrier_cpp_staticInit_FUN_00414150(void);
CBarrier * __cdecl core_barrier_cpp_factoryFunc_FUN_00414180(void);
CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_004141b0(CBarrier *this_ptr);
CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_004141c0(CBarrier *this_ptr);
void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00414210(CBarrier *this_ptr);
int __cdecl core_barrier_cpp_CBarrier_renderTransparent_FUN_00414240(CBarrier *this_ptr);
CBoundingBox3D * __cdecl core_barrier_cpp_CBarrier_getBoundingBox_FUN_004142e0(CBarrier *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00414340(CBarrier *this_ptr);
int __cdecl core_barrier_cpp_CBarrier_hasCollision_FUN_004143a0(CBarrier *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_barrier_cpp_CBarrier_updateCollisionData_FUN_004143e0(CBarrier *this_ptr);
void __cdecl core_barrier_cpp_CBarrier_getPropertyList_FUN_00414400(CBarrier *this_ptr,CActorPropertyList *property_list);
void __cdecl core_barrier_cpp_CBarrier_processInEditor_FUN_00414460(CBarrier *this_ptr);
void __cdecl core_barrier_cpp_CBarrier_showEditorHelp_FUN_00414610(CBarrier *this_ptr,int *y_pos);
CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00414670(CBarrier *this_ptr,uint flags);
void __cdecl core_bat_cpp_staticInit_FUN_004146c0(void);
float __cdecl core_bat_cpp_FUN_004146f0(void);
CBat * __cdecl core_bat_cpp_factoryFunc_FUN_00414790(void);
CDemonActorType * __cdecl core_bat_cpp_CBat_getActorType_FUN_004147c0(CBat *this_ptr);
CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat *this_ptr);
void __cdecl core_bat_cpp_CBat_setup_FUN_004148a0(CBat *this_ptr);
void __cdecl core_bat_cpp_CBat_archive_FUN_00414910(CBat *this_ptr);
void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat *this_ptr,float delta_time);
int __cdecl core_bat_cpp_CBat_renderOpaque_FUN_00414bf0(CBat *this_ptr);
CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00414c60(CBat *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr);
void __cdecl core_bat_cpp_CBat_getPropertyList_FUN_00414dc0(CBat *this_ptr,CActorPropertyList *property_list);
void __cdecl core_bat_cpp_CBat_addFilesToExtract_FUN_00414ec0(CBat *this_ptr,_FILE *file_handle);
void __cdecl core_bat_cpp_CBat_processInEditor_FUN_00414f00(CBat *this_ptr);
void __cdecl core_bat_cpp_CBat_showEditorHelp_FUN_00414fb0(CBat *this_ptr,int *y_pos);
CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat *this_ptr,uint flags);
int __cdecl core_bat_cpp_FUN_00415050(void);
int __cdecl core_bat_cpp_FUN_00415060(void);
int __cdecl core_bat_cpp_FUN_00415070(void);
void __cdecl core_batcreat_cpp_staticInit_FUN_00415080(void);
CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004150b0(void);
CDemonActorType * __cdecl core_batcreat_cpp_CBatCreature_getActorType_FUN_004150e0(CBatCreature *this_ptr);
CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_setup_FUN_00415150(CBatCreature *this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time);
void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00415d70(CBatCreature *this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415dd0(CBatCreature *this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_processDamage_FUN_00416030(CBatCreature *this_ptr,SDamageInfo *damage_info);
int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00416240(CBatCreature *this_ptr,CVector3f *out_points_array);
void __cdecl core_batcreat_cpp_CBatCreature_hasCollision_FUN_00416290(CBatCreature *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_batcreat_cpp_CBatCreature_getPropertyList_FUN_004162b0(CBatCreature *this_ptr,CActorPropertyList *property_list);
void __cdecl core_batcreat_cpp_CBatCreature_addFilesToExtract_FUN_004162f0(CBatCreature *this_ptr,_FILE *file_handle);
CDemonActor * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00416320(CBatCreature *this_ptr,uint flags);
void __cdecl core_batman_cpp_staticInit_FUN_004163e0(void);
CBatman * __cdecl core_batman_cpp_factoryFunc_FUN_00416410(void);
CDemonActorType * __cdecl core_batman_cpp_CBatman_getActorType_FUN_00416440(CBatman *this_ptr);
CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_setup_FUN_00416510(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_FUN_004167f0(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time);
int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_004173b0(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_archive_FUN_00417580(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_FUN_00417660(CBatman *this_ptr);
void __cdecl core_batman_cpp_CBatman_processDamage_FUN_004179a0(CBatman *this_ptr,SDamageInfo *damage_info);
int __cdecl core_batman_cpp_CBatman_getTargetPoints_FUN_00417bb0(CBatman *this_ptr,CVector3f *out_points_array);
int __cdecl core_batman_cpp_CBatman_hasCollision_FUN_00417cb0(CBatman *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_batman_cpp_CBatman_getPropertyList_FUN_00417cd0(CBatman *this_ptr,CActorPropertyList *property_list);
void __cdecl core_batman_cpp_CBatman_addFilesToExtract_FUN_00417d30(CBatman *this_ptr,_FILE *file_handle);
CBatman * __cdecl core_batman_cpp_CBatman_dtor_FUN_00417d60(CBatman *this_ptr,uint flags);
void __cdecl core_battery_cpp_staticInit_FUN_00417e20(void);
CBattery * __cdecl core_battery_cpp_factoryFunc_FUN_00417e50(void);
CDemonActorType * __cdecl core_battery_cpp_CBattery_getActorType_FUN_00417e80(CBattery *this_ptr);
CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery *this_ptr);
void __cdecl core_battery_cpp_CBattery_setup_FUN_00417ef0(CBattery *this_ptr);
int __cdecl core_battery_cpp_CBattery_canPickup_FUN_00417f20(CBattery *this_ptr,CDemonActor *picker);
void __cdecl core_battery_cpp_CBattery_pickup_FUN_00417f40(CBattery *this_ptr,CDemonActor *carrier);
void __cdecl core_battery_cpp_CBattery_onDropped_FUN_00417f50(CBattery *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_battery_cpp_CBattery_getCarrier_FUN_00417f60(CBattery *this_ptr);
void __cdecl core_battery_cpp_CBattery_process_FUN_00417f70(CBattery *this_ptr,float delta_time);
int __cdecl core_battery_cpp_CBattery_renderOpaque_FUN_00417f80(CBattery *this_ptr);
void __cdecl core_battery_cpp_CBattery_archive_FUN_00418000(CBattery *this_ptr);
int __cdecl core_battery_cpp_CBattery_hasCollision_FUN_00418050(CBattery *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_battery_cpp_CBattery_getBoundingBox_FUN_00418060(CBattery *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_battery_cpp_CBattery_getPropertyList_FUN_004180b0(CBattery *this_ptr,CActorPropertyList *property_list);
void __cdecl core_battery_cpp_CBattery_addFilesToExtract_FUN_00418110(CBattery *this_ptr,_FILE *file_handle);
CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00418160(CBattery *this_ptr,uint flags);
void __cdecl core_beast_cpp_staticInit_FUN_004181b0(void);
CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_004181e0(void);
CDemonActorType * __cdecl core_beast_cpp_CBeast_getActorType_FUN_00418210(CBeast *this_ptr);
CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast *this_ptr);
void __cdecl core_beast_cpp_CBeast_setup_FUN_00418280(CBeast *this_ptr);
void __cdecl core_beast_cpp_CBeast_process_FUN_004182a0(CBeast *this_ptr,float delta_time);
void __cdecl core_beast_cpp_CBeast_archive_FUN_00418330(CBeast *this_ptr);
void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00418380(CBeast *this_ptr,SDamageInfo *damage_info);
int __cdecl core_beast_cpp_CBeast_getDeathState_FUN_004183a0(CBeast *this_ptr);
int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_004183b0(CBeast *this_ptr,CVector3f *out_points_array);
int __cdecl core_beast_cpp_CBeast_hasCollision_FUN_00418400(CBeast *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_beast_cpp_CBeast_getPropertyList_FUN_00418420(CBeast *this_ptr,CActorPropertyList *property_list);
void __cdecl core_beast_cpp_CBeast_addFilesToExtract_FUN_00418460(CBeast *this_ptr,_FILE *file_handle);
CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00418490(CBeast *this_ptr,uint flags);
void __cdecl core_biggs_cpp_staticInit_FUN_00418550(void);
CBiggs * __cdecl core_biggs_cpp_factoryFunc_FUN_00418580(void);
CDemonActorType * __cdecl core_biggs_cpp_CBiggs_getActorType_FUN_004185b0(CBiggs *this_ptr);
CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs *this_ptr);
void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00418680(CBiggs *this_ptr);
void __cdecl core_biggs_cpp_CBiggs_process_FUN_00418700(CBiggs *this_ptr,float delta_time);
int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs *this_ptr);
void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00418ac0(CBiggs *this_ptr);
void __cdecl core_biggs_cpp_CBiggs_processDamage_FUN_00418b50(CBiggs *this_ptr,SDamageInfo *damage_info);
int __cdecl core_biggs_cpp_CBiggs_getTargetPoints_FUN_00418c10(CBiggs *this_ptr,CVector3f *out_points_array);
void __cdecl core_biggs_cpp_CBiggs_hasCollision_FUN_00418c60(CBiggs *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_biggs_cpp_CBiggs_getPropertyList_FUN_00418c80(CBiggs *this_ptr,CActorPropertyList *property_list);
void __cdecl core_biggs_cpp_CBiggs_addFilesToExtract_FUN_00418ce0(CBiggs *this_ptr,_FILE *file_handle);
CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint flags);
void __cdecl core_bodypart_cpp_staticInit_FUN_00418de0(void);
CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418e10(void);
CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00418fd0(void);
CDemonActorType * __cdecl core_bodypart_cpp_CBodyPart_getActorType_FUN_00419000(CBodyPart *this_ptr);
CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr);
CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags);
void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr,int vertex_count,int tri_count);
void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(CBodyPart *this_ptr,int render_flags);
int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag);
int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419810(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart *this_ptr,float delta_time);
void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00419e10(CBodyPart *this_ptr,float delta_time);
int __cdecl core_bodypart_cpp_CBodyPart_hasCollision_FUN_00419f50(CBodyPart *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart *this_ptr,CBoundingBox3D *out_box);
int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart *this_ptr,CDemonActor *picker);
void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00419fc0(CBodyPart *this_ptr,CDemonActor *carrier);
void __cdecl core_bodypart_cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles);
void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max);
void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3i *scale,CVector3i *position);
void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_0041ae50(CBodyPart *this_ptr,CVector3f *param_2);
int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_0041af90(CBodyPart *this_ptr,char *texture_name);
void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041b1b0(CBodyPart *this_ptr);
int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart *this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info, CDemonActor *victim);
void __cdecl core_bodypart_cpp_CBodyPart_processInEditor_FUN_0041b260(CBodyPart *this_ptr);
int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr);
CVector3f * __cdecl core_bodypart_cpp_scaleVector_FUN_0041b4e0(CVector3f *src,CVector3f *dst,float *scalar);
CVector3f * __cdecl core_bodypart_cpp_subtractVector_FUN_0041b510(CVector3f *a,CVector3f *dst,CVector3f *b);
CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_0041b540(CVector3f *a,CVector3f *dst,CVector3f *b);
CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_0041b570(CVector3f *dst,CVector3f *src);
CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxExtent_FUN_0041b590(CBoundingBox3D *src,CBoundingBox3D *dst);
CBoundingBox3D * __cdecl core_bodypart_cpp_boundingBoxCenter_FUN_0041b5c0(CBoundingBox3D *src,CBoundingBox3D *dst);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr,uint flags);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_dtor_FUN_0041b680(SBodyPartModel *this_ptr,uint flags);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_0041b690(SBodyPartModel *objs,uint flags);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_0041b6b0(SBodyPartFire *objs,uint flags);
void __cdecl core_boneguy_cpp_staticInit_FUN_0041b6d0(void);
float * __cdecl core_boneguy_cpp_FUN_0041b700(void);
CVector3f * __cdecl core_boneguy_cpp_FUN_0041b770(void);
CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_0041b820(void);
CDemonActorType * __cdecl core_boneguy_cpp_CBoneGuy_getActorType_FUN_0041b850(CBoneGuy *this_ptr);
float * __cdecl core_boneguy_cpp_FUN_0041b860(void);
CVector3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CVector3f *out_rgb,CVector3f *in_hsv);
CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_0041bd90(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bf90(CBoneGuy *this_ptr,float delta_time);
void __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40 (CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041cc40(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041d180(CBoneGuy *this_ptr);
int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d1b0(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_archive_FUN_0041d270(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_reset_FUN_0041d4c0(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_0041d4d0(CBoneGuy *this_ptr,SDamageInfo *damage_info);
int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_0041d550(CBoneGuy *this_ptr,CVector3f *out_points_array);
void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d8a0(CBoneGuy *this_ptr);
int __cdecl core_boneguy_cpp_CBoneGuy_hasCollision_FUN_0041d970(CBoneGuy *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_boneguy_cpp_CBoneGuy_getPropertyList_FUN_0041d990(CBoneGuy *this_ptr,CActorPropertyList *property_list);
void __cdecl core_boneguy_cpp_CBoneGuy_randomize_FUN_0041da00(CBoneGuy *this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_addFilesToExtract_FUN_0041da10(CBoneGuy *this_ptr,_FILE *file_handle);
CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy *this_ptr,uint flags);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_ctor_FUN_0041db10(SBoneGuyBox *this_ptr);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_dtor_FUN_0041db20(SBoneGuyBox *this_ptr,uint flags);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_arrdtor_FUN_0041db30(SBoneGuyBox *objs,uint flags);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041db50(SMRGLHeaderExtended *header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended *header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended *header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended *header);
CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041dc50(CBox *this_ptr);
CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr,uint flags);
void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041dd20(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents, float volume);
void __cdecl core_box_cpp_CBox_setupN_FUN_0041df50(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count, CVector3f *point_array,float volume);
void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041e0e0(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed);
void __cdecl core_box_cpp_CBox_process_FUN_0041e2f0(CBox *this_ptr,float delta_time);
void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox *this_ptr,float delta_time);
void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,_FILE *file_handle);


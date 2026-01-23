#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
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
#include "types/classes/CSlew.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBodyPartFire.h"
#include "types/structs/SBodyPartModel.h"
#include "types/structs/SBoneGuyBox.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SMRGLHeaderExtended.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x410000
// =============================================================================

CVector3f * __cdecl core_actor_cpp_CVector_ctor_FUN_00410340(CVector3f * this_ptr);
CVector3f * __cdecl core_actor_cpp_CVector_dtor_FUN_00410350(CVector3f * this_ptr);
void __cdecl core_actor_cpp_copyVector_FUN_00410360(CVector3f * dst_ptr, CVector3f * src_ptr);
undefined __unknown core_actor_cpp_FUN_00410380();
undefined __unknown core_actor_cpp_FUN_004103b0();
undefined __unknown core_actor_cpp_FUN_004103d0();
CSlew * __cdecl core_actor_cpp_CSlew_ctor_FUN_00410400(CSlew * this_ptr);
CSlew * __cdecl core_actor_cpp_CSlew_dtor_FUN_00410410(CSlew * this_ptr);
SDamageInfo * __cdecl core_actor_cpp_SDamageInfo_dtor_FUN_00410420(SDamageInfo * this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_ctor_FUN_00410430(CBoundingBox3D * this_ptr);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_copy_FUN_00410440(CBoundingBox3D * this_ptr, CBoundingBox3D * other);
CBoundingBox3D * __cdecl core_actor_cpp_CBoundingBox3D_dtor_FUN_00410490(CBoundingBox3D * this_ptr);
void __cdecl core_actor_cpp_CVector_copy_FUN_004104a0(CVector3f * this_ptr, CVector3f * other);
undefined __unknown core_actor_cpp_FUN_004104d0();
undefined __unknown core_actor_cpp_FUN_004104e0();
undefined __unknown core_actor_cpp_FUN_004104f0();
void __cdecl core_actor_cpp_freeVectors_FUN_00410500(CVector3f * * array);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr);
CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap * this_ptr, int dest_y, int dest_x, int left_x, int top_y, int right_x, int bottom_y);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY);
void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap * this_ptr);
void __cdecl engine_alphabit_cpp_copyBytes_FUN_00410d20(void * src, void * dest, int width, int height);
void __cdecl core_ammo_cpp_staticInit_FUN_00410d50(void);
CAmmo * __cdecl core_ammo_cpp_CAmmo_factoryFunc_FUN_00410d80(void);
CDemonActorType * __cdecl core_ammo_cpp_CAmmo_getActorType_FUN_00410db0(CAmmo * this_ptr);
CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr);
void __cdecl core_ammo_cpp_CAmmo_setup_FUN_00410e50(CAmmo * this_ptr);
void __cdecl core_ammo_cpp_CAmmo_process_FUN_00410e70(CAmmo * this_ptr, float delta_time);
int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_00410e80(CAmmo * this_ptr);
CBoundingBox3D * __cdecl core_ammo_cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo * this_ptr, CBoundingBox3D * out_box);
void __cdecl core_ammo_cpp_CAmmo_serialize_FUN_00410f40(CAmmo * this_ptr);
int __cdecl core_ammo_cpp_CAmmo_hasCollision_FUN_00410fa0(CAmmo * this_ptr);
undefined __unknown core_ammo_cpp_CAmmo_FUN_00410fd0();
undefined __unknown core_ammo_cpp_CAmmo_FUN_004111b0();
int __cdecl core_ammo_cpp_CAmmo_canPickup_FUN_004111c0(CAmmo * this_ptr, CDemonActor * picker);
undefined __unknown core_ammo_cpp_FUN_00411200();
undefined __unknown core_ammo_cpp_FUN_004112b0();
void __cdecl core_ammo_cpp_CAmmo_getPropertyList_FUN_00411360(CAmmo * this_ptr, CActorPropertyList * property_list);
void __cdecl core_ammo_cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo * this_ptr, FILE * file_handle);
CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_004114e0(CAmmo * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_ammobox_cpp_staticInit_FUN_00411530(void);
undefined __unknown core_ammobox_cpp_constructor_FUN_00411560();
CDemonActorType * __cdecl core_ammobox_cpp_CAmmoBox_getActorType_FUN_00411590(CAmmoBox * this_ptr);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox * this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_setup_FUN_00411650(CAmmoBox * this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_process_FUN_00411680(CAmmoBox * this_ptr, float delta_time);
undefined __unknown core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690();
undefined __unknown core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700();
int __cdecl core_ammobox_cpp_CAmmoBox_renderOpaque_FUN_00411820(CAmmoBox * this_ptr);
int * __cdecl core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_004118b0(CAmmoBox * this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_serialize_FUN_00411900(CAmmoBox * this_ptr);
int __cdecl core_ammobox_cpp_CAmmoBox_hasCollision_FUN_004119d0(CAmmoBox * this_ptr);
int __cdecl core_ammobox_cpp_CAmmoBox_canPickup_FUN_004119f0(CAmmoBox * this_ptr);
undefined __unknown core_ammobox_cpp_FUN_00411a30();
undefined __unknown core_ammobox_cpp_FUN_00411ab0();
void __cdecl core_ammobox_cpp_CAmmoBox_getPropertyList_FUN_00411b30(CAmmoBox * this_ptr);
void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411c00(CAmmoBox * this_ptr);
CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_anvil_cpp_staticInit_FUN_00411c70(void);
undefined __unknown core_anvil_cpp_constructor_FUN_00411ca0();
CDemonActorType * __cdecl core_anvil_cpp_CAnvil_getActorType_FUN_00411cd0(CAnvil * this_ptr);
CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(CAnvil * this_ptr);
void __cdecl core_anvil_cpp_CAnvil_FUN_00411d70(CAnvil * this_ptr);
void __cdecl core_anvil_cpp_CAnvil_process_FUN_00411d90(CAnvil * this_ptr, float delta_time);
int __cdecl core_anvil_cpp_CAnvil_FUN_00411ec0(CAnvil * this_ptr);
void __cdecl core_anvil_cpp_CAnvil_serialize_FUN_00411f50(CAnvil * this_ptr);
int __cdecl core_anvil_cpp_CAnvil_FUN_00411fd0(CAnvil * this_ptr);
int * __cdecl core_anvil_cpp_CAnvil_FUN_00411fe0(CAnvil * this_ptr);
void __cdecl core_anvil_cpp_CAnvil_FUN_00412030(CAnvil * this_ptr);
void __cdecl core_anvil_cpp_CAnvil_FUN_00412090(CAnvil * this_ptr);
CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_004120e0(CAnvil * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_armour_cpp_staticInit_FUN_00412130(void);
undefined __unknown core_armour_cpp_constructor_FUN_00412160();
CDemonActorType * __cdecl core_armour_cpp_CArmour_getActorType_FUN_00412190(CArmour * this_ptr);
CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_FUN_00412240(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_process_FUN_00412260(CArmour * this_ptr, float delta_time);
void __cdecl core_armour_cpp_CArmour_serialize_FUN_004123a0(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_FUN_00412400(CArmour * this_ptr);
int __cdecl core_armour_cpp_CArmour_FUN_00412440(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_FUN_00412450(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour * this_ptr);
void __cdecl core_armour_cpp_CArmour_FUN_004124d0(CArmour * this_ptr);
CArmour * __cdecl core_armour_cpp_CArmour_dtor_FUN_00412500(CArmour * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CEnemy * __cdecl core_enemy_cpp_CEnemy_dtor_FUN_004125c0(CEnemy * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
SFire * __cdecl core_backgnd_cpp_SFire_dtor_FUN_00412680(SFire * this_ptr);
CFlame * __cdecl core_backgnd_cpp_CFlame_dtor_FUN_00412690(CFlame * this_ptr, uint d1, uint d2);
int __cdecl core_backgnd_cpp_cleanupVector_FUN_004126e0(CVector3f * * objs);
int __cdecl core_backgnd_cpp_freeFires_FUN_00412700(SFire * * objs);
int __cdecl core_backgnd_cpp_freeFlames_FUN_00412720(CFlame * * array);
CDemonActorType * __cdecl core_backgnd_cpp_staticInit_FUN_00412740(void);
undefined __unknown core_backgnd_cpp_FUN_00412770();
CDemonActorType * __cdecl core_backgnd_cpp_CBackgroundActor_getActorType_FUN_004127a0(CBackgroundActor * this_ptr);
CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(CBackgroundActor * this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_setup_FUN_00412810(CBackgroundActor * this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_process_FUN_00412850(CBackgroundActor * this_ptr, float delta_time);
void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412860(CBackgroundActor * this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor * this_ptr);
int * __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412940(CBackgroundActor * this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor * this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004129f0(CBackgroundActor * this_ptr);
int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a30(CBackgroundActor * this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor * this_ptr);
void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412ab0(CBackgroundActor * this_ptr);
CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_00412ad0(CBackgroundActor * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_baron_cpp_staticInit_FUN_00412b20(void);
CDemonActorType * __cdecl core_baron_cpp_FUN_00412b41(void);
undefined __unknown core_baron_cpp_FUN_00412b80();
CDemonActorType * __cdecl core_baron_cpp_CBaron_getActorType_FUN_00412bb0(CBaron * this_ptr);
CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00412cb0(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron * this_ptr, float delta_time);
undefined __unknown core_baron_cpp_FUN_00413470();
undefined __unknown core_baron_cpp_FUN_004135a0();
undefined __unknown core_baron_cpp_FUN_004135e0();
undefined __unknown core_baron_cpp_FUN_004136b0();
undefined __unknown core_baron_cpp_FUN_00413a00();
void __cdecl core_baron_cpp_CBaron_serialize_FUN_00413a70(CBaron * this_ptr);
int __cdecl core_baron_cpp_CBaron_FUN_00413ad0(CBaron * this_ptr);
int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00413cd0(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00413cf0(CBaron * this_ptr);
undefined __unknown core_baron_cpp_constructor_FUN_00413d00();
CDemonActorType * __cdecl core_baron_cpp_CBaronWeapon_getActorType_FUN_00413d30(CBaronWeapon * this_ptr);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon * this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413da0(CBaronWeapon * this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon * this_ptr, float delta_time);
void __cdecl core_baron_cpp_FUN_CBaronWeapon_00413de0(CBaronWeapon * this_ptr);
int __cdecl core_baron_cpp_FUN_00413df0(CBaronWeapon * this_ptr);
int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413e30(CBaronWeapon * this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413e60(CBaronWeapon * this_ptr);
void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon * this_ptr);
undefined __unknown core_baron_cpp_FUN_00413f20();
void __cdecl core_baron_cpp_CBaron_FUN_00413ff0(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00414010(CBaron * this_ptr);
void __cdecl core_baron_cpp_CBaron_FUN_00414070(CBaron * this_ptr);
undefined __unknown core_baron_cpp_FUN_00414090();
int __cdecl core_baron_cpp_CBaron_FUN_004140a0(CBaron * this_ptr);
CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon * this_ptr, uint d1, uint d2);
CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_barrier_cpp_staticInit_FUN_00414150(void);
undefined __unknown core_barrier_cpp_constructor_FUN_00414180();
CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_004141b0(CBarrier * this_ptr);
CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_004141c0(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_00414210(CBarrier * this_ptr);
int __cdecl core_barrier_cpp_CBarrier_FUN_00414240(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_004142e0(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_serialize_FUN_00414340(CBarrier * this_ptr);
int __cdecl core_barrier_cpp_CBarrier_FUN_004143a0(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_004143e0(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_00414400(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier * this_ptr);
void __cdecl core_barrier_cpp_CBarrier_FUN_00414610(CBarrier * this_ptr);
CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00414670(CBarrier * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_bat_cpp_staticInit_FUN_004146c0(void);
undefined __unknown core_bat_cpp_FUN_004146f0();
undefined __unknown core_bat_cpp_FUN_00414790();
CDemonActorType * __cdecl core_bat_cpp_CBat_getActorType_FUN_004147c0(CBat * this_ptr);
CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_004147d0(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_FUN_004148a0(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_serialize_FUN_00414910(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat * this_ptr, float delta_time);
int __cdecl core_bat_cpp_CBat_FUN_00414bf0(CBat * this_ptr);
int * __cdecl core_bat_cpp_CBat_FUN_00414c60(CBat * this_ptr);
undefined __unknown core_bat_cpp_FUN_00414ce0();
void __cdecl core_bat_cpp_CBat_FUN_00414dc0(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_FUN_00414ec0(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat * this_ptr);
void __cdecl core_bat_cpp_CBat_FUN_00414fb0(CBat * this_ptr);
CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat * this_ptr, uint d1, uint d2, uint d3);
undefined __unknown core_bat_cpp_FUN_00415050();
undefined __unknown core_bat_cpp_FUN_00415060();
undefined __unknown core_bat_cpp_FUN_00415070();
CDemonActorType * __cdecl core_batcreat_cpp_staticInit_FUN_00415080(void);
undefined __unknown core_batcreat_cpp_constructor_FUN_004150b0();
CDemonActorType * __cdecl core_batcreat_cpp_CBatCreature_getActorType_FUN_004150e0(CBatCreature * this_ptr);
CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature * this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415150(CBatCreature * this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature * this_ptr, float delta_time);
void __cdecl core_batcreat_cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature * this_ptr);
undefined __unknown core_batcreat_cpp_FUN_00415dd0();
undefined __unknown core_batcreat_cpp_FUN_00416030();
int __cdecl core_batcreat_cpp_CBatCreature_FUN_00416240(CBatCreature * this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_FUN_00416290(CBatCreature * this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162b0(CBatCreature * this_ptr);
void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162f0(CBatCreature * this_ptr);
CDemonActor * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00416320(CBatCreature * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * __cdecl core_batman_cpp_staticInit_FUN_004163e0(void);
undefined __unknown core_batman_cpp_FUN_00416410();
CDemonActorType * __cdecl core_batman_cpp_CBatman_getActorType_FUN_00416440(CBatman * this_ptr);
CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00416450(CBatman * this_ptr);
void __cdecl core_batman_cpp_CBatman_FUN_00416510(CBatman * this_ptr);
undefined __unknown core_batman_cpp_FUN_004167f0();
void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman * this_ptr, float delta_time);
int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_004173b0(CBatman * this_ptr);
void __cdecl core_batman_cpp_CBatman_serialize_FUN_00417580(CBatman * this_ptr);
undefined __unknown core_batman_cpp_FUN_00417660();
undefined __unknown core_batman_cpp_FUN_004179a0();
int __cdecl core_batman_cpp_CBatman_FUN_00417bb0(CBatman * this_ptr);
int __cdecl core_batman_cpp_CBatman_FUN_00417cb0(CBatman * this_ptr);
void __cdecl core_batman_cpp_CBatman_FUN_00417cd0(CBatman * this_ptr);
void __cdecl core_batman_cpp_CBatman_FUN_00417d30(CBatman * this_ptr);
CBatman * __cdecl core_batman_cpp_CBatman_dtor_FUN_00417d60(CBatman * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * __cdecl core_battery_cpp_staticInit_FUN_00417e20(void);
undefined __unknown core_battery_cpp_FUN_00417e50();
undefined __unknown core_battery_cpp_FUN_00417e80();
CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00417e90(CBattery * this_ptr);
undefined __unknown core_battery_cpp_FUN_00417ef0();
undefined __unknown core_battery_cpp_FUN_00417f20();
undefined __unknown core_battery_cpp_FUN_00417f40();
undefined __unknown core_battery_cpp_FUN_00417f50();
undefined __unknown core_battery_cpp_FUN_00417f60();
undefined __unknown core_battery_cpp_FUN_00417f70();
undefined __unknown core_battery_cpp_FUN_00417f80();
undefined __unknown core_battery_cpp_CBattery_load_FUN_00418000();
undefined __unknown core_battery_cpp_FUN_00418050();
undefined __unknown core_battery_cpp_FUN_00418060();
undefined __unknown core_battery_cpp_FUN_004180b0();
undefined __unknown core_battery_cpp_FUN_00418110();
CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00418160(CBattery * this_ptr, uint d1, uint d2);
CDemonActorType * __cdecl core_beast_cpp_staticInit_FUN_004181b0(void);
undefined __unknown core_beast_cpp_constructor_FUN_004181e0();
undefined __unknown core_beast_cpp_FUN_00418210();
CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00418220(CBeast * this_ptr);
undefined __unknown core_beast_cpp_FUN_00418280();
undefined __unknown core_beast_cpp_FUN_004182a0();
undefined __unknown core_beast_cpp_CBeast_load_FUN_00418330();
undefined __unknown core_beast_cpp_FUN_00418380();
undefined __unknown core_beast_cpp_FUN_004183a0();
undefined __unknown core_beast_cpp_FUN_004183b0();
undefined __unknown core_beast_cpp_FUN_00418400();
undefined __unknown core_beast_cpp_FUN_00418420();
undefined __unknown core_beast_cpp_FUN_00418460();
CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00418490(CBeast * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * __cdecl core_biggs_cpp_staticInit_FUN_00418550(void);
undefined __unknown core_biggs_cpp_constructor_FUN_00418580();
undefined __unknown core_biggs_cpp_FUN_004185b0();
CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs * this_ptr);
undefined __unknown core_biggs_cpp_FUN_00418680();
void __cdecl core_biggs_cpp_CBiggs_FUN_00418700(CBiggs * this_ptr);
int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs * this_ptr);
undefined __unknown core_biggs_cpp_CBiggs_load_FUN_00418ac0();
undefined __unknown core_biggs_cpp_FUN_00418b50();
undefined __unknown core_biggs_cpp_FUN_00418c10();
undefined __unknown core_biggs_cpp_FUN_00418c60();
undefined __unknown core_biggs_cpp_snag_FUN_00418c80();
undefined __unknown core_biggs_cpp_FUN_00418ce0();
CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs * this_ptr, uint d1);
void __cdecl core_bodypart_cpp_staticInit_FUN_00418de0(void);
undefined __unknown core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
CBodyPart * __cdecl core_bodypart_cpp_createBodyPart_FUN_00418fd0(void);
CDemonActorType * __cdecl core_bodypart_cpp_CBodyPart_getActorType_FUN_00419000(CBodyPart * this_ptr);
CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart * this_ptr);
CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6);
void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr);
undefined __unknown core_bodypart_cpp_FUN_00419340();
int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart * this_ptr, int layer_flag);
int __cdecl core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00419740(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419810(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_serialize_FUN_00419880(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00419be0(CBodyPart * this_ptr, float delta_time);
undefined __unknown core_bodypart_cpp_FUN_00419e10();
int __cdecl core_bodypart_cpp_CBodyPart_hasCollision_FUN_00419f50(CBodyPart * this_ptr);
CBoundingBox3D * __cdecl core_bodypart_cpp_CBodyPart_getBoundingBox_FUN_00419f60(CBodyPart * this_ptr, CBoundingBox3D * out_box);
int __cdecl core_bodypart_cpp_CBodyPart_canPickup_FUN_00419fa0(CBodyPart * this_ptr, CDemonActor * picker);
void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00419fc0(CBodyPart * this_ptr, CDemonActor * carrier);
void __cdecl core_bodypart_cpp_CBodyPart_onDropped_FUN_00419fd0(CBodyPart * this_ptr, CVector3f * drop_position);
CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart * this_ptr);
undefined __unknown core_bodypart_cpp_FUN_0041a050();
undefined __unknown core_bodypart_cpp_FUN_0041a630();
undefined __unknown core_bodypart_cpp_FUN_0041aa40();
undefined __unknown core_bodypart_cpp_FUN_0041add0();
undefined __unknown core_bodypart_cpp_FUN_0041ae50();
int __cdecl core_bodypart_cpp_CBodyPart_FUN_0041af90(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041b070(CBodyPart * this_ptr);
undefined __unknown core_bodypart_cpp_FUN_0041b1b0();
int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart * this_ptr);
void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210(CBodyPart * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim);
void __cdecl core_bodypart_cpp_CBodyPart_processInEditor_FUN_0041b260(CBodyPart * this_ptr);
int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart * this_ptr);
undefined __unknown core_bodypart_cpp_FUN_0041b4e0();
undefined __unknown core_bodypart_cpp_FUN_0041b510();
undefined __unknown core_bodypart_cpp_FUN_0041b540();
undefined __unknown core_bodypart_cpp_FUN_0041b570();
undefined __unknown core_bodypart_cpp_FUN_0041b590();
undefined __unknown core_bodypart_cpp_FUN_0041b5c0();
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire * this_ptr);
SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire * this_ptr);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel * this_ptr);
SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_dtor_FUN_0041b680(SBodyPartModel * this_ptr);
int __cdecl core_bodypart_cpp_freeBodyPartModels_FUN_0041b690(SBodyPartModel * * objs);
int __cdecl core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire * * objs);
CDemonActorType * __cdecl core_boneguy_cpp_staticInit_FUN_0041b6d0(void);
undefined __unknown core_boneguy_cpp_FUN_0041b700();
undefined __unknown core_boneguy_cpp_FUN_0041b770();
undefined __unknown core_boneguy_cpp_constructor_FUN_0041b820();
undefined __unknown core_boneguy_cpp_FUN_0041b850();
undefined __unknown core_boneguy_cpp_FUN_0041b860();
undefined __unknown core_boneguy_cpp_FUN_0041ba10();
CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy * this_ptr);
void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy * this_ptr);
undefined __unknown core_boneguy_cpp_FUN_0041bf90();
undefined __unknown core_boneguy_cpp_FUN_0041ca40();
undefined __unknown core_boneguy_cpp_FUN_0041cc40();
undefined __unknown core_boneguy_cpp_FUN_0041d180();
undefined __unknown core_boneguy_cpp_FUN_0041d1b0();
undefined __unknown core_boneguy_cpp_CBoneGuy_load_FUN_0041d270();
undefined __unknown core_boneguy_cpp_FUN_0041d4c0();
undefined __unknown core_boneguy_cpp_ExplodeAndSoundSomething_FUN_0041d4d0();
undefined __unknown core_boneguy_cpp_FUN_0041d550();
void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy * this_ptr);
undefined __unknown core_boneguy_cpp_FUN_0041d8a0();
undefined __unknown core_boneguy_cpp_FUN_0041d970();
undefined __unknown core_boneguy_cpp_SnagRelated_ModelStateDeath_FUN_0041d990();
undefined __unknown core_boneguy_cpp_FUN_0041da00();
undefined __unknown core_boneguy_cpp_FUN_0041da10();
CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_ctor_FUN_0041db10(SBoneGuyBox * this_ptr);
SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_dtor_FUN_0041db20(SBoneGuyBox * this_ptr);
int __cdecl core_boneguy_cpp_FUN_0041db30(SBoneGuyBox * * objs);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041db50(SMRGLHeaderExtended * header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended * header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbb0(SMRGLHeaderExtended * header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended * header);
SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dc20(SMRGLHeaderExtended * header);
CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr);
CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr);
void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, float volume);
void __cdecl core_box_cpp_CBox_setupN_FUN_0041df50(CBox * this_ptr, CVector3f * position, CVector3f * orientation, int point_count, CVector3f * point_array, float volume);
void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed);
void __cdecl core_box_cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time);
void __cdecl core_box_cpp_CBox_processPhysics_FUN_0041e350(CBox * this_ptr, float delta_time);
void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox * this_ptr, FILE * file_handle);


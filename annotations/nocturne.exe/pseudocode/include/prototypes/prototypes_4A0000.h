#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFootstep.h"
#include "types/classes/CGame.h"
#include "types/classes/CGargoyle.h"
#include "types/classes/CGasMask.h"
#include "types/classes/CGhoul.h"
#include "types/classes/CGlass.h"
#include "types/classes/CGore.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CSlew.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EAmmoType.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EGroundType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SLaserInfo.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4A0000
// =============================================================================

int __cdecl core_game_cpp_checkCheatCode_FUN_004a0260(char *cheat_string);
void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(char *class_name);
void __cdecl core_game_cpp_FUN_004a03a0(char *param_1,EAmmoType param_2);
void __cdecl core_game_cpp_checkCheatAndGiveWeapon_FUN_004a0430(char *cheat_code,char *class_name,char *message);
void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004a04e0(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index);
void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_loadAssets_FUN_004a3660(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004a3820(CGame *this_ptr);
void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004a3860(void);
void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004a3880(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(CGame *this_ptr);
uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004a3a50(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004a3a70(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004a3a90(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0(CGame *this_ptr,char *name,int value,float duration);
void __cdecl core_game_cpp_CGame_FUN_004a3b90(CGame *this_ptr,char *save_filename);
void __cdecl core_game_cpp_CGame_FUN_004a4170(CGame *this_ptr,char *save_filename,int load_mode);
void __cdecl core_game_cpp_CGame_FUN_004a4b50(CGame *this_ptr,int select_mode);
void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004a5740(CGame *this_ptr,char *filename,int width,int height);
void __cdecl core_game_cpp_CGame_FUN_004a57c0(CGame *this_ptr);
void __cdecl core_game_cpp_joinNetworkGame_FUN_004a5e40(void);
void __cdecl core_game_cpp_CGame_slamDT_FUN_004a5f00(CGame *this_ptr,float delta_time);
void __cdecl core_game_cpp_CGame_process_FUN_004a6010(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(CGame *this_ptr);
CSlew * __cdecl core_game_cpp_CSlew_ctor_FUN_004a72a0(CSlew *this_ptr);
CSlew * __cdecl core_game_cpp_CSlew_dtor_FUN_004a72b0(CSlew *this_ptr,uint flags);
void __cdecl core_gargoyle_cpp_staticInit_FUN_004a72f0(void);
CGargoyle * __cdecl core_gargoyle_cpp_factoryFuncGargoyle_FUN_004a7320(void);
CDemonActorType * __cdecl core_gargoyle_cpp_CGargoyle_getActorType_FUN_004a7340(CGargoyle *this_ptr);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(CGargoyle *this_ptr);
void __cdecl core_gargoyle_cpp_CGargoyle_setup_FUN_004a7450(CGargoyle *this_ptr);
int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(CGargoyle *this_ptr);
void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(CGargoyle *this_ptr,float delta_time);
void __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004a8260(CGargoyle *this_ptr);
void __cdecl core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CGargoyle *this_ptr);
void __cdecl core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004a8330(CGargoyle *this_ptr,SDamageInfo *damage_info);
void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004a85d0(CGargoyle *this_ptr,SDamageInfo *damage_info);
int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(CGargoyle *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_gargoyle_cpp_CGargoyle_getCollisionType_FUN_004a88d0(CGargoyle *this_ptr,SCollisionInfo *collision_info);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_dtor_FUN_004a88f0(CGargoyle *this_ptr,uint flags);
void __cdecl core_gasmask_cpp_staticInit_FUN_004a89b0(void);
CGasMask * __cdecl core_gasmask_cpp_factoryFuncGasMask_FUN_004a89e0(void);
CDemonActorType * __cdecl core_gasmask_cpp_CGasMask_getActorType_FUN_004a8a00(CGasMask *this_ptr);
CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004a8a10(CGasMask *this_ptr);
void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004a8a60(CGasMask *this_ptr);
int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(CGasMask *this_ptr,CDemonActor *picker);
void __cdecl core_gasmask_cpp_CGasMask_process_FUN_004a8aa0(CGasMask *this_ptr,float delta_time);
int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(CGasMask *this_ptr);
void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004a8b30(CGasMask *this_ptr);
ECollisionType __cdecl core_gasmask_cpp_CGasMask_getCollisionType_FUN_004a8b60(CGasMask *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_gasmask_cpp_CGasMask_getBoundingBox_FUN_004a8b70(CGasMask *this_ptr,CBoundingBox3D *out_box);
CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004a8bc0(CGasMask *this_ptr,uint flags);
void __cdecl core_ghoul_cpp_staticInit_FUN_004a8c10(void);
CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004a8c70(void);
CDemonActorType * __cdecl core_ghoul_cpp_CGhoul_getActorType_FUN_004a8c90(CGhoul *this_ptr);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(CGhoul *this_ptr);
void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(CGhoul *this_ptr);
void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(CGhoul *this_ptr,float delta_time);
void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004a9270(CGhoul *this_ptr,float delta_time);
void __cdecl core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CGhoul *this_ptr,int layer_flag);
void __cdecl core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CGhoul *this_ptr);
int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(CGhoul *this_ptr,CVector3f *out_attract_position);
CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004ab110(CGhoul *this_ptr,CVector3f *out_point);
void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004ab190(CGhoul *this_ptr,SDamageInfo *damage_info);
void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004ab450(CGhoul *this_ptr,SDamageInfo *damage_info);
int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004ab830(CGhoul *this_ptr,CVector3f *out_points_array);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004aba30(CGhoul *this_ptr,uint flags);
void __cdecl core_glass_cpp_staticInit_FUN_004abaf0(void);
CGlass * __cdecl core_glass_cpp_factoryFuncGlass_FUN_004abb20(void);
CDemonActorType * __cdecl core_glass_cpp_CGlass_getActorType_FUN_004abb40(CGlass *this_ptr);
CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004abb50(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_setup_FUN_004abc90(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *this_ptr,float delta_time);
int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004ac440(CGlass *this_ptr);
int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004ac600(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_FUN_004ac7c0(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004acb60(CGlass *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_glass_cpp_CGlass_archive_FUN_004acbc0(CGlass *this_ptr);
ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004accc0(CGlass *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_glass_cpp_CGlass_FUN_004accf0(CGlass *this_ptr,float *param_2,int *param_3,int *param_4,int param_5);
void __cdecl core_glass_cpp_CGlass_shatter_FUN_004ada20(CGlass *this_ptr,CVector3f *location);
void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004add80(CGlass *this_ptr,SLaserInfo *laser_info);
EGroundType __cdecl core_glass_cpp_CGlass_getGroundType_FUN_004adec0(CGlass *this_ptr);
int __cdecl core_glass_cpp_CGlass_FUN_004aded0(CGlass *this_ptr);
CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004adef0(CGlass *this_ptr,uint flags);
CVector3f * __cdecl core_glass_cpp_CVector3f_arrdtor25_FUN_004adf70(CVector3f *this_ptr,uint flags);
void __cdecl core_gore_cpp_staticInit_FUN_004adf90(void);
void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);
void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(CBloodParticle *this_ptr);
void __cdecl core_gore_cpp_CBloodParticle_render_FUN_004ae190(CBloodParticle *this_ptr);
int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CBloodParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(CBloodSplat *this_ptr,CVector3f *position,int blood_type);
void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);
void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr);
void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004aeb70(CBloodSplat *this_ptr,int expire_flag);
void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat *this_ptr);
int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004af1f0(CBloodSplat *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool *this_ptr);
void __cdecl core_gore_cpp_CBloodPool_render_FUN_004af340(CBloodPool *this_ptr,int expire_flag);
void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(CBloodPool *this_ptr);
void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type);
int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodPool_save_FUN_004af820(CBloodPool *this_ptr,_FILE *file_handle);
void __cdecl core_gore_cpp_CFootstep_init_FUN_004af8a0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type);
void __cdecl core_gore_cpp_CFootstep_render_FUN_004afa20(CFootstep *this_ptr,int expire_flag);
CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004afd80(CGore *this_ptr);
CGore * __cdecl core_gore_cpp_CGore_dtor_FUN_004afda0(CGore *this_ptr,uint flags);
void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004afe80(CGore *this_ptr,int render_all,int expire_flag);


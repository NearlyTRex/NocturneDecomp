#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CFootstep.h"
#include "types/classes/CGame.h"
#include "types/classes/CGargoyle.h"
#include "types/classes/CGasMask.h"
#include "types/classes/CGhoul.h"
#include "types/classes/CGlass.h"
#include "types/classes/CGore.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4A0000
// =============================================================================

int __cdecl core_game_cpp_checkCheatCode_FUN_004a0260(char *cheat_string);
void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(char *class_name);
void core_game_cpp_FUN_004a03a0(void);
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
void __cdecl core_game_cpp_FUN_004a3a70(CGame *this_ptr);
void __cdecl core_game_cpp_FUN_004a3a90(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0(CGame *this_ptr,char *name,int value,float duration);
void __cdecl core_game_cpp_FUN_004a3b90(CGame *this_ptr,char *save_filename);
void __cdecl core_game_cpp_FUN_004a4170(CGame *this_ptr,char *save_filename,int load_mode);
void __cdecl core_game_cpp_FUN_004a4b50(CGame *this_ptr,int select_mode);
void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004a5740(CGame *this_ptr,char *filename,int width,int height);
void __cdecl core_game_cpp_FUN_004a57c0(CGame *this_ptr);
void __cdecl core_game_cpp_joinNetworkGame_FUN_004a5e40(void);
void __cdecl core_game_cpp_CGame_slamDT_FUN_004a5f00(CGame *this_ptr,float delta_time);
void __cdecl core_game_cpp_CGame_process_FUN_004a6010(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_finishAct_FUN_004a6a10(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(CGame *this_ptr);
undefined4 core_game_cpp_CSlew_ctor_FUN_004a72a0(undefined4 param_1);
undefined4 core_game_cpp_CSlew_dtor_FUN_004a72b0(undefined4 param_1);
void __cdecl core_gargoyle_cpp_staticInit_FUN_004a72f0(void);
void core_gargoyle_cpp_FUN_004a7320(void);
CDemonActorType * core_gargoyle_cpp_FUN_004a7340(void);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(CGargoyle *this_ptr);
void core_gargoyle_cpp_CGargoyle_setup_FUN_004a7450(CEnemy *param_1);
int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(CGargoyle *this_ptr);
void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(CGargoyle *param_1,float param_2);
void core_gargoyle_cpp_FUN_004a8260(CCharacter *param_1);
void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CEnemy *param_1);
void __cdecl core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004a8330(CGargoyle *this_ptr,SDamageInfo *damage_info);
void core_gargoyle_cpp_CGargoyle_processDamage_FUN_004a85d0(CGargoyle *param_1,SDamageInfo *param_2);
int core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004a8730(int param_1,CVector3f *param_2);
void core_gargoyle_cpp_FUN_004a88d0(CCharacter *param_1,SCollisionInfo *param_2);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_dtor_FUN_004a88f0(CGargoyle *this_ptr,uint flags);
void __cdecl core_gasmask_cpp_staticInit_FUN_004a89b0(void);
void core_gasmask_cpp_FUN_004a89e0(void);
CDemonActorType * core_gasmask_cpp_FUN_004a8a00(void);
int * core_gasmask_cpp_FUN_004a8a10(CDemonActor *param_1);
void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004a8a60(CGasMask *this_ptr);
int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(CGasMask *this_ptr,CDemonActor *picker);
void core_gasmask_cpp_FUN_004a8aa0(void);
int core_gasmask_cpp_FUN_004a8ab0(int param_1);
void __cdecl core_gasmask_cpp_CGasMask_archive_FUN_004a8b30(CGasMask *this_ptr);
undefined4 core_gasmask_cpp_FUN_004a8b60(void);
CBoundingBox3D * __cdecl core_gasmask_cpp_CGasMask_getBoundingBox_FUN_004a8b70(CGasMask *this_ptr,CBoundingBox3D *out_box);
CDemonActor * core_gasmask_cpp_FUN_004a8bc0(CDemonActor *param_1,byte param_2);
void __cdecl core_ghoul_cpp_staticInit_FUN_004a8c10(void);
void core_ghoul_cpp_FUN_004a8c70(void);
CDemonActorType * core_ghoul_cpp_FUN_004a8c90(void);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(CGhoul *this_ptr);
void core_ghoul_cpp_CGhoul_setup_FUN_004a8dd0(CEnemy *param_1);
void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(CGhoul *this_ptr,float delta_time);
void core_ghoul_cpp_FUN_004a9270(CGhoul *param_1,float param_2);
void core_ghoul_cpp_CGhoul_renderBackground_FUN_004aae00(CEnemy *param_1,int param_2);
void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CEnemy *param_1);
undefined4 core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(CDemonActor *param_1,CVector3f *param_2);
CVector3f * core_ghoul_cpp_FUN_004ab110(int param_1,CVector3f *param_2);
void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004ab190(CGhoul *this_ptr,SDamageInfo *damage_info);
void core_ghoul_cpp_FUN_004ab450(CGhoul *param_1,SDamageInfo *param_2);
int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004ab830(CGhoul *this_ptr,CVector3f *out_points_array);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004aba30(CGhoul *this_ptr,uint flags);
void __cdecl core_glass_cpp_staticInit_FUN_004abaf0(void);
void core_glass_cpp_FUN_004abb20(void);
CDemonActorType * core_glass_cpp_FUN_004abb40(void);
CGlass * __cdecl core_glass_cpp_FUN_004abb50(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_setup_FUN_004abc90(CGlass *this_ptr);
void core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *param_1);
int core_glass_cpp_FUN_004ac440(CDemonActor *param_1);
int core_glass_cpp_FUN_004ac600(CDemonActor *param_1);
void __cdecl core_glass_cpp_FUN_004ac7c0(CGlass *this_ptr);
void core_glass_cpp_FUN_004ac9b0(CGlass *param_1,int param_2);
void core_glass_cpp_FUN_004acb60(int param_1,float *param_2);
void core_glass_cpp_CGlass_archive_FUN_004acbc0(CDemonActor *param_1);
undefined4 core_glass_cpp_CGlass_getCollisionType_FUN_004accc0(int param_1);
void core_glass_cpp_FUN_004accf0(int param_1,float *param_2,int *param_3,int *param_4,int param_5);
void __cdecl core_glass_cpp_CGlass_shatter_FUN_004ada20(CGlass *this_ptr,CVector3f *location);
void core_glass_cpp_CGlass_onLaserHit_FUN_004add80(int param_1,int param_2);
undefined4 core_glass_cpp_FUN_004adec0(void);
int __cdecl core_glass_cpp_FUN_004aded0(CGlass *this_ptr);
CDemonActor * core_glass_cpp_FUN_004adef0(CDemonActor *param_1,byte param_2);
CVector3f * __cdecl core_glass_cpp_CVector3f_arrdtor_FUN_004adf70(CVector3f *objs,uint flags);
void __cdecl core_gore_cpp_staticInit_FUN_004adf90(void);
void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ae070(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type);
void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(CBloodParticle *this_ptr);
void core_gore_cpp_CBloodParticle_render_FUN_004ae190(CVector3f *param_1);
int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ae900(CBloodParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(CBloodSplat *this_ptr,CVector3f *position,int blood_type);
void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,int blood_type);
void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(CBloodSplat *this_ptr);
void core_gore_cpp_CBloodSplat_render_FUN_004aeb70(undefined4 *param_1);
void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat *this_ptr);
int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004af1f0(CBloodSplat *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool *this_ptr);
void core_gore_cpp_CBloodPool_render_FUN_004af340(undefined4 *param_1);
void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(CBloodPool *this_ptr);
void __cdecl core_gore_cpp_CBloodPool_init_FUN_004af730(CBloodPool *this_ptr,CVector3f *position,int blood_type);
int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle);
int __cdecl core_gore_cpp_CBloodPool_save_FUN_004af820(CBloodPool *this_ptr,_FILE *file_handle);
void __cdecl core_gore_cpp_CFootstep_init_FUN_004af8a0(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,int blood_type);
void core_gore_cpp_CFootstep_render_FUN_004afa20(undefined4 *param_1);
CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004afd80(CGore *this_ptr);
undefined4 core_gore_cpp_FUN_004afda0(undefined4 param_1);
void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr);
void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(CGore *this_ptr);
int core_gore_cpp_CGore_renderDecals_FUN_004afe80(undefined4 param_1,int param_2);


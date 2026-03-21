#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "system/time.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBulletHole.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CCheckOutItem.h"
#include "types/classes/CCheckOutList.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFileManager.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CEventList.h"
#include "types/classes/CFileManager.h"
#include "types/classes/CFilmProjector.h"
#include "types/classes/CFilmReel.h"
#include "types/classes/CPodAuditRecord.h"
#include "types/classes/CRuleList.h"
#include "types/classes/CSmokeParticle.h"
#include "types/classes/CStake.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ECollisionType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/STimestampRecord.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4B0000
// =============================================================================

int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(CEventList *this_ptr,char *expression,int *parse_position);
void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList *this_ptr,char *name,int add_flag);
void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_004b0460(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470(CEventList *this_ptr,char *name,int add_flag);
void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration);
void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value);
int __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004b0830(CEventList *this_ptr,char *str);
int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_004b08b0(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findTimer_FUN_004b0900(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findCounter_FUN_004b0950(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList *this_ptr,char *var_name,CDemonActor *actor);
CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004b0b80(CEventList *this_ptr,char *name);
int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004b0bf0(CEventList *this_ptr,char *name);
uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr,char *name,uint sfx_handle);
int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_004b0d60(CEventList *this_ptr,char *name);
void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004b0f00(CEventList *this_ptr);
int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004b0f90(int ch);
int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr,_FILE *file_handle);
int __cdecl core_event_cpp_CEventList_saveState_FUN_004b1380(CEventList *this_ptr,_FILE *file_handle);
void __cdecl core_event_cpp_CRuleList_clear_FUN_004b1670(CRuleList *this_ptr);
void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr,int index,char *condition,char *event);
void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr,int index);
int __cdecl core_event_cpp_CRuleList_findFirst_FUN_004b1890(CRuleList *this_ptr);
int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_004b18e0(CRuleList *this_ptr);
float __cdecl core_event_cpp_getVectorDistance_FUN_004b1930(CVector3f *a,CVector3f *b);
int __cdecl core_event_cpp_getSelectedCameraIndex_FUN_004b1970(CDemonSet *set_ptr);
int __cdecl core_event_cpp_isCharacterSpeaking_FUN_004b1980(CCharacter *char_ptr);
void __fastcall crt_watcom_c__memset_FUN_004b19d0(void *dest,int fill_byte,uint size);
void __fastcall crt_watcom_c__memcpy_FUN_004b1a78(void *dest,void *src,uint size);
int __cdecl engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(void);
void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string);
void __cdecl engine_fileio_cpp_safeCloseFile_FUN_004b1db0(_FILE **file_ptr);
void __cdecl engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path);
void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer);
void __cdecl engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10(char *filename,char *extension,char *dest_buffer);
void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer);
char * __cdecl engine_fileio_cpp_copyFileWithProgress_FUN_004b2030(_FILE *source_file,_FILE *dest_file,char *source_filename,char *dest_filename, int file_size_bytes);
_FILE * __cdecl engine_fileio_cpp_openFileWithRetry_FUN_004b2200(char *filename,char *mode);
int __cdecl engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(char *input_string,STimestampRecord *output_record);
int __cdecl engine_fileio_cpp_readTimestampFile_FUN_004b23a0(_FILE *file_handle,STimestampRecord **records,char *directory,char *filename);
int __cdecl engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(char *directory,char *filename);
int __cdecl engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770(void);
void __cdecl engine_fileio_cpp_logOffVersionControl_FUN_004b2830(void);
void __cdecl engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList *this_ptr);
int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr);
int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,_FILE **file);
int __cdecl engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList *this_ptr,CCheckOutItem *new_entry);
int __cdecl engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index);
int __cdecl engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList *this_ptr,char *filename);
int __cdecl engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList *this_ptr,_FILE **file_handle);
int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char *dialog_title,int *overwrite_state);
int __cdecl engine_fileio_cpp_checkFileOverwriteCondition_FUN_004b3120(char *target_filename,char *source_directory);
int __cdecl engine_fileio_cpp_copyFileTimestamp_FUN_004b31e0(char *source_file,char *dest_file);
int __cdecl engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220(char *base_directory,char *filename);
int __cdecl engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem *this_ptr,void *unused_param);
int __cdecl engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem *this_ptr,char *filename);
int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *preselected_filename,char *out_buffer, char *dialog_title,char *wildcard_pattern);
void __cdecl engine_fileio_cpp_CCheckOutItem_revert_FUN_004b41c0(CCheckOutItem *this_ptr,char *output_buffer);
int __cdecl engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem *this_ptr,char *filename);
int __cdecl engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030(CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer);
void __cdecl engine_fileio_cpp_remountAllPods_FUN_004b5350(void);
CFileManager * __cdecl engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(CFileManager *this_ptr);
CFileManager * __cdecl engine_fileio_cpp_CFileManager_dtor_FUN_004b53d0(CFileManager *this_ptr,uint flags);
void __cdecl engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager *this_ptr,char *texture_filename);
void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node);
void __cdecl engine_fileio_cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610(CFileManager *this_ptr,char *filename);
void __cdecl engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager *this_ptr,char *filename_list);
void __cdecl engine_fileio_cpp_CFileManager_freeAuditRecords_FUN_004b5910(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path);
void __cdecl engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager *this_ptr,char *pod_filename,char *volume_name);
void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10(CFileManager *this_ptr,char *pod_filename,int offer_dismount);
void __cdecl engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager *this_ptr,char *pod_filename);
void __cdecl engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager *this_ptr,char *pod_filename);
int __cdecl engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50(CFileManager *this_ptr,_FILE *source_file,char *dest_filename,int file_size, int file_offset,char *timestamp_source,int checksum);
void __cdecl engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(CFileManager *this_ptr,char *pod_filename);
void __cdecl engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager *this_ptr,char *pod_filename);
void __cdecl engine_fileio_cpp_CFileManager_managePodFiles_FUN_004b86b0(CFileManager *this_ptr,char *pod_directory_path);
void __cdecl engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager *this_ptr,char *pod_filename);
void __cdecl engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager *this_ptr,CStrList *pod_list);
void __cdecl engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager *this_ptr,CStrList *pod_list);
int __cdecl engine_fileio_cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager *this_ptr,CStrList *pod_list,char *target_filename);
int __cdecl engine_fileio_cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740(CFileManager *this_ptr,CCheckOutItem *checkout_item,_FILE *optional_pod_file);
int __cdecl engine_fileio_cpp_CFileManager_checkInPodFile_FUN_004baf00(CFileManager *this_ptr,char *checkout_item_name,char *timestamp_file, char *pod_filename);
int __cdecl engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0(CFileManager *this_ptr,CCheckOutItem *checkout_item,char *source_path);
void __cdecl engine_fileio_cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager *this_ptr,char *directory);
void __cdecl engine_fileio_cpp_CFileManager_setVersionControlCredentials_FUN_004bc5d0(CFileManager *this_ptr,char *network_username,char *password,char *domain);
void __cdecl engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650(_FILE *file_list_output,char *source_directory,char *file_pattern, char *dest_directory);
void __cdecl engine_fileio_cpp_writeArtFileEntries_FUN_004bc9f0(char *filename,_FILE **raw_file,_FILE **act_file);
int __cdecl engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager *this_ptr,char *pod_filename);
void __cdecl engine_fileio_cpp_CFileManager_searchMountedPods_FUN_004bcb70(CFileManager *this_ptr,char *default_wildcard);
int __cdecl engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr);
int __cdecl engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770(void);
void __cdecl engine_fileio_cpp_logOffVersionControl_FUN_004b2830(void);
void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr);
void __cdecl engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager *this_ptr,char *pod_file_path,time_t cutoff_timestamp);
CCheckOutList * __cdecl engine_fileio_cpp_CCheckOutList_ctor_FUN_004bd710(CCheckOutList *this_ptr);
CCheckOutList * __cdecl engine_fileio_cpp_CCheckOutList_dtor_FUN_004bd730(CCheckOutList *this_ptr,uint flags);
void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory);
void __cdecl core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager *this_ptr,char *set_filename);
void __cdecl core_fileman_cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(CDemonFileManager *this_ptr);
void __cdecl core_fileman_cpp_trimWhitespace_FUN_004bd9b0(char *str);
void __cdecl core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr);
void __cdecl core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager *file_manager_ptr,char *model_filename);
void __cdecl core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150(CDemonFileManager *file_manager_ptr,char *cloth_filename);
void __cdecl core_fileman_cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager *this_ptr,char *filename);
void __cdecl core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager *this_ptr);
void __cdecl core_fileman_cpp_refreshSoundDirectory_FUN_004be590(_FILE *file_list_output,char *source_directory);
void __cdecl core_filmreel_cpp_staticInit_FUN_004be620(void);
CFilmReel * __cdecl core_filmreel_cpp_factoryFunc_FUN_004be670(void);
CDemonActorType * __cdecl core_filmreel_cpp_CFilmReel_getActorType_FUN_004be6a0(CFilmReel *this_ptr);
CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_004be6b0(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004be720(CFilmReel *this_ptr);
int __cdecl core_filmreel_cpp_CFilmReel_canPickup_FUN_004be7b0(CFilmReel *this_ptr,CDemonActor *picker);
void __cdecl core_filmreel_cpp_CFilmReel_pickup_FUN_004be7d0(CFilmReel *this_ptr,CDemonActor *carrier);
void __cdecl core_filmreel_cpp_CFilmReel_onDropped_FUN_004be7e0(CFilmReel *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_filmreel_cpp_CFilmReel_getCarrier_FUN_004be7f0(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_process_FUN_004be800(CFilmReel *this_ptr,float delta_time);
int __cdecl core_filmreel_cpp_CFilmReel_renderOpaque_FUN_004be810(CFilmReel *this_ptr);
void __cdecl core_filmreel_cpp_CFilmReel_renderBackground_FUN_004be880(CFilmReel *this_ptr,int layer_flag);
void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004be8a0(CFilmReel *this_ptr);
ECollisionType __cdecl core_filmreel_cpp_CFilmReel_getCollisionType_FUN_004be8f0(CFilmReel *this_ptr,SCollisionInfo *collision_info);
CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmReel_getBoundingBox_FUN_004be910(CFilmReel *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_filmreel_cpp_CFilmReel_getPropertyList_FUN_004be960(CFilmReel *this_ptr,CActorPropertyList *property_list);
void __cdecl core_filmreel_cpp_CFilmReel_addFilesToExtract_FUN_004be9b0(CFilmReel *this_ptr,_FILE *file_handle);
CFilmProjector * __cdecl core_filmreel_cpp_factoryFunc_FUN_004bea00(void);
CDemonActorType * __cdecl core_filmreel_cpp_CFilmProjector_getActorType_FUN_004bea30(CFilmProjector *this_ptr);
CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004beb00(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_004beb40(CFilmProjector *this_ptr,float delta_time);
CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004becd0(CFilmProjector *this_ptr,CBoundingBox3D *out_box);
int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004bed00(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004bede0(CFilmProjector *this_ptr);
void __cdecl core_filmreel_cpp_CFilmProjector_getPropertyList_FUN_004bee30(CFilmProjector *this_ptr,CActorPropertyList *property_list);
CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_dtor_FUN_004bee80(CFilmReel *this_ptr,uint flags);
CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_dtor_FUN_004beed0(CFilmProjector *this_ptr,uint flags);
void __cdecl core_fire_cpp_staticInit_FUN_004bef20(void);
float __cdecl core_fire_cpp_safeAcos_FUN_004bf1a0(float value);
int __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_004bf1f0(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_reset_FUN_004bf2e0(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor, CVector3f *wind_influence,int alpha_value);
void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_init_FUN_004bf7f0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal, CDemonActor *hit_actor);
void __cdecl core_fire_cpp_CBulletHole_process_FUN_004bfa00(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004bfa40(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr);
void __cdecl core_fire_cpp_loadStakeAssets_FUN_004bfe00(void);
void __cdecl core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation);
void __cdecl core_fire_cpp_CStake_spawn_FUN_004bfe90(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles, CVector3f *surface_normal);


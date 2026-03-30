#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMultiCram.h"
#include "types/classes/CNetGame.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/funcdefs/CActorPropertyFilterFunc.h"
#include "types/structs/SMpegFrame.h"
#include "types/structs/SMpegFrameHeader.h"
#include "types/structs/SMpegLayer3SideInfo.h"
#include "types/structs/SMpegScalefactorBandData.h"
#include "types/structs/SMpegStereoSubbandSamples.h"
#include "types/structs/SMpegSubbandAllocation.h"
#include "types/structs/SMpegSubbandQuantizedSamples.h"
#include "types/structs/SMpegSubbandSamples.h"
#include "types/structs/SMpegSubbandScalefactors.h"
#include "types/structs/SSimFrame.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x530000
// =============================================================================

void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples, SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation, SMpegFrame *frame);
void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info, int channel_or_granule_index);
void __cdecl sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info);
void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream, SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info, int channel,int granule_index,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info, int channel,int granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *granule_info, int channel,int granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest, SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset, SMpegFrame *frame);
void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples, int *scalefactor_data,SMpegLayer3SideInfo *side_info,int channel_index, SMpegFrame *frame);
void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples, SMpegFrame *frame_info,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position,double ratio,int sample_index,float *ratio_buffer);
void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples, SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data, SMpegFrame *frame_info,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegFrame *frame_info, SMpegFrameHeader *header);
void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float *input_samples,float *output_samples,int mpeg_block_type);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index, int channel,SMpegFrame *frame_info,SMpegFrameHeader *header);
int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info);
int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void);
void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_00533f80(void);
void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder *this_ptr);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder *this_ptr,uint flags);
void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder *this_ptr,char *filename);
int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size);
void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder *this_ptr);
int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested);
int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder *this_ptr,int sample_offset);
int __cdecl sound_mp3_cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder *this_ptr);
int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr,short *pcm_output);
void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void);
CVector3f * __cdecl core_msnedit_cpp_screenToWorldPosition_FUN_00535c60(CVector3f *out_world_pos,int screen_x,int screen_y);
char * __cdecl core_msnedit_cpp_getOnOffString_FUN_00535df0(int value);
void __cdecl core_msnedit_cpp_drawPropertyRow_FUN_00535e10(int *y_pos,char *label,char *value);
void __cdecl core_msnedit_cpp_showEditorHelpScreen_FUN_00535e70(void);
int __cdecl core_msnedit_cpp_isWordSeparator_FUN_00536bc0(int ch);
void __cdecl core_msnedit_cpp_tokenizeWords_FUN_00536bf0(char *str,CStrList *word_list);
int __cdecl core_msnedit_cpp_drawClickableButton_FUN_00536cd0(char *text,int x,int y,int consume_click,int highlighted);
void __cdecl core_msnedit_cpp_drawMotionBar_FUN_00536e20(void);
void __cdecl core_msnedit_cpp_convertAllMissionFiles_FUN_00537230(void);
void __cdecl core_msnedit_cpp_buildActorClassHierarchy_FUN_00537330(CStrList *class_list,CDemonActor *parent_class,int indent_level);
int __cdecl core_msnedit_cpp_confirmNewActorName_FUN_00537410(char *name);
void __cdecl core_msnedit_cpp_setEditorLayoutMode_FUN_005374b0(int layout_mode);
void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file);
void __cdecl core_msnedit_cpp_CDemonMission_writeIni_FUN_005375d0(CDemonMission *this_ptr,CIniFile *ini_file);
void __cdecl core_msnedit_cpp_CDemonMission_showOptionsMenu_FUN_00537680(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_copyFile_FUN_00537dd0(char *src_filename,char *dest_filename,char *directory);
void __cdecl core_msnedit_cpp_CDemonMission_saveWithNewName_FUN_00537f60(CDemonMission *this_ptr,char *name);
void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_playMission_FUN_00538ba0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_addSet_FUN_00538d60(CDemonMission *this_ptr,char *set_name);
void __cdecl core_msnedit_cpp_CDemonMission_removeSet_FUN_00538df0(CDemonMission *this_ptr,int set_index);
void __cdecl core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,CDemonActor *actor);
int __cdecl core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(CDemonMission *this_ptr,char *set_name);
int __cdecl core_msnedit_cpp_CDemonMission_pickSet_FUN_00538f90(CDemonMission *this_ptr,char *title,int selected_index);
void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int show_3d_viewport);
int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int reset_cameras);
void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,CActorProperty *property);
void __cdecl core_msnedit_cpp_CDemonMission_editActorAtIndex_FUN_0053b030(CDemonMission *this_ptr,CActorProperty *property);
void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,CActorProperty *property);
void __cdecl core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(CDemonMission *this_ptr,CDemonActor *actor,int skip_confirmation);
void __cdecl core_msnedit_cpp_CDemonMission_selectNearestActor_FUN_0053bcf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_replicateActor_FUN_0053bd80(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_undoActorChanges_FUN_0053c0b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission *this_ptr,CDemonActor *actor);
char * __cdecl core_msnedit_cpp_CDemonMission_pickActorByName_FUN_0053c210(CDemonMission *this_ptr,char *title,char *current_name);
CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_raycastPickActor_FUN_0053c340(CDemonMission *this_ptr,int screen_x,int screen_y);
void __cdecl core_msnedit_cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_dropActorToGround_FUN_0053c8d0(CDemonMission *this_ptr,CDemonActor *actor);
void __cdecl core_msnedit_cpp_CDemonMission_moveActorToViewportCenter_FUN_0053c930(CDemonMission *this_ptr,CDemonActor *actor);
void __cdecl core_msnedit_cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970(CDemonMission *this_ptr,CDemonActor *actor,int screen_x,int screen_y);
void __cdecl core_msnedit_cpp_CDemonMission_moveActorToMousePos_FUN_0053ca00(CDemonMission *this_ptr,CDemonActor *actor);
CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30(CDemonMission *this_ptr,CDemonActor *actor);
CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80(CDemonMission *this_ptr,CDemonActor *actor);
template<typename T_func0>
inline int core_msnedit_cpp_CDemonMission_pickActorDialog_FUN_0053cad0(CDemonMission *this_ptr,CDemonActor *class_type,char *title,CDemonActor **out_actor,int allow_none,char *class_name,T_func0 filter_func,int preselect) {
    (void)this_ptr; (void)class_type; (void)title; (void)out_actor; (void)allow_none; (void)class_name; (void)filter_func; (void)preselect; return (int)0;
}
template<typename T_func0>
inline void core_msnedit_cpp_CDemonMission_buildFilteredActorList_FUN_0053cc30(CDemonMission *this_ptr,CStrList *name_list,CDemonActor *class_type,char *class_name,T_func0 filter_func) {
    (void)this_ptr; (void)name_list; (void)class_type; (void)class_name; (void)filter_func;
}
void __cdecl core_msnedit_cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_importActors_FUN_0053ccf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(CDemonMission *this_ptr,char *filename);
int __cdecl core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220(CDemonMission *this_ptr,char *orig_name,char *new_name);
char * __cdecl core_msnedit_cpp_getEmptyString_FUN_0053d3a0(void);
void __cdecl core_msnedit_cpp_CDemonMission_showDifficultyStats_FUN_0053d3b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_editGore_FUN_0053e220(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40(CDemonMission *this_ptr,char *filename);
void __cdecl core_msnedit_cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80(CDemonMission *this_ptr);
void * __cdecl shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram *this_ptr,CDSEModel **dest_array);
CDSEModel * __cdecl shape_multicrm_cpp_CMultiCram_getSecondModel_FUN_0053ee30(CMultiCram *this_ptr);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_setModelCount1_FUN_0053ee50(CMultiCram *this_ptr,int *model_count);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_setModelCount2_FUN_0053ee60(CMultiCram *this_ptr,int *model_count);
void __cdecl shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram *this_ptr);
void __cdecl core_netgame_cpp_staticInit_FUN_0053f310(void);
void __cdecl core_netgame_cpp_resetGameTime_FUN_0053f360(void);
void __cdecl core_netgame_cpp_updateGameTime_FUN_0053f390(void);
float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0053f3e0(int start_time,int end_time);
float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0053f440(uint timestamp);
void __edx core_netgame_cpp_resetChatCounts_FUN_0053f4a2(int count);
void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index);
int __cdecl core_netgame_cpp_findSimFrame_FUN_0053f550(int sequence_number);
SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(int sequence_number);
void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0053f650(int min_sequence);
CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr);
CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame *this_ptr,uint flags);
void __cdecl core_netgame_cpp_CNetGame_init_FUN_0053f780(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_0053f830(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr,uint32_t *server_ip);
int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame *this_ptr,int perform_handshake);


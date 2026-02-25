#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMultiCram.h"
#include "types/classes/CNetGame.h"
#include "types/classes/CStrList.h"
#include "types/structs/SMpegFrame.h"
#include "types/structs/SMpegFrameHeader.h"
#include "types/structs/SMpegLayer3Granule.h"
#include "types/structs/SMpegScalefactorBandData.h"
#include "types/structs/SMpegStereoSubbandSamples.h"
#include "types/structs/SMpegSubbandAllocation.h"
#include "types/structs/SMpegSubbandQuantizedSamples.h"
#include "types/structs/SMpegSubbandSamples.h"
#include "types/structs/SMpegSubbandScalefactors.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x530000
// =============================================================================

void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples, SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation, SMpegFrameHeader *header);
void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info, int channel_or_granule_index);
void __cdecl sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info);
void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3Granule *side_info_array ,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info, int channel,int granule_index,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info, int channel,int granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info, int channel,int granule,SMpegFrame *frame);
uint __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info, int channel,int granule,SMpegFrame *frame,int bit_budget);
void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples, int *scalefactor_data,SMpegLayer3Granule *granule_info,int channel_index, SMpegLayer3Granule **granule_array);
void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples, SMpegFrame *frame_info,SMpegLayer3Granule **granule_array);
void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position,double ratio,int unused_param3,int sample_index, float *output_buffer);
void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples *input_lr_samples, SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data, SMpegFrame *frame_info,SMpegLayer3Granule **granule_array);
void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float *input_samples,float *output_samples,SMpegFrame *frame_info, void *unused_param4);
void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float *input_samples,float *output_samples,int mpeg_block_type);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,void *unknown_param2,float *output_buffer,int subband_index, int channel,SMpegFrame *frame_info,void *unknown_param7);
int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info);
int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void);
void __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533f80(void);
void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder *this_ptr);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder *this_ptr,uint flags);
void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder *this_ptr,char *filename);
int __cdecl sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size);
void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder *this_ptr);
int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested);
int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder *this_ptr,int sample_offset);
int __cdecl sound_mp3_cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder *this_ptr);
int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder *this_ptr);
void __cdecl core_msnedit_cpp_staticInit_FUN_00535c30(void);
float * __cdecl core_msnedit_cpp_FUN_00535c60(float *param_1,int param_2,int param_3);
char * __cdecl core_msnedit_cpp_FUN_00535df0(int param_1);
void __cdecl core_msnedit_cpp_FUN_00535e10(int *param_1,char *param_2,char *param_3);
void __cdecl core_msnedit_cpp_FUN_00535e70(void);
int __cdecl core_msnedit_cpp_FUN_00536bc0(int param_1);
void __cdecl core_msnedit_cpp_FUN_00536bf0(char *param_1,CStrList *param_2);
int __cdecl core_msnedit_cpp_FUN_00536cd0(char *param_1,int param_2,int param_3,int param_4,int param_5);
void __cdecl core_msnedit_cpp_FUN_00536e20(void);
void __cdecl core_msnedit_cpp_FUN_00537230(void);
void __cdecl core_msnedit_cpp_FUN_00537330(CStrList *param_1,int param_2,int param_3);
int __cdecl core_msnedit_cpp_FUN_00537410(char *param_1);
void __cdecl core_msnedit_cpp_FUN_005374b0(int unk);
void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file);
void __cdecl core_msnedit_cpp_CDemonMission_writeIni_FUN_005375d0(CDemonMission *this_ptr,CIniFile *ini_file);
void __cdecl core_msnedit_cpp_CDemonMission_showOptionsMenu_FUN_00537680(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_FUN_00537dd0(char *param_1,char *param_2,char *param_3);
void __cdecl core_msnedit_cpp_CDemonMission_saveWithNewName_FUN_00537f60(CDemonMission *this_ptr,char *name);
void __cdecl core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_playMission_FUN_00538ba0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_addSet_FUN_00538d60(CDemonMission *this_ptr,char *param_2);
void __cdecl core_msnedit_cpp_CDemonMission_removeSet_FUN_00538df0(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(CDemonMission *this_ptr,int param_2);
int __cdecl core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(CDemonMission *this_ptr,char *set_name);
int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f90(CDemonMission *this_ptr,char *param_2,int param_3);
void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int param_2);
int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,char *property);
void __cdecl core_msnedit_cpp_CDemonMission_editActorAtIndex_FUN_0053b030(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0(CDemonMission *this_ptr,CDemonMission *other);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bc80(CDemonMission *this_ptr,int param_2,int param_3);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bcf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bd80(CDemonMission *this_ptr,int param_2,int param_3,CDemonMission *param_4);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c0b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c140(CDemonMission *this_ptr,int param_2);
char * __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c210(CDemonMission *this_ptr,char *param_2,char *param_3);
CDemonActor * __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c340(CDemonMission *this_ptr,int param_2,int param_3);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c4f0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c730(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c8d0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c930(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c970(CDemonMission *this_ptr,int param_2,int param_3,int param_4);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca00(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca30(CDemonMission *this_ptr,int param_2);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2);
int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cad0(CDemonMission *this_ptr,int param_2,char *param_3,int *param_4,int param_5, int param_6,int param_7,int param_8);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053cc30(CDemonMission *this_ptr,CStrList *param_2,uint param_3,char *param_4,int param_5);
void __cdecl core_msnedit_cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_importActors_FUN_0053ccf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(CDemonMission *this_ptr,char *filename);
int __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d220(CDemonMission *this_ptr);
int * __cdecl core_msnedit_cpp_FUN_0053d3a0(void);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d3b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d7b0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d8b0(CDemonMission *this_ptr,int param_2,CDemonMission *param_3,int param_4);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053dcf0(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053df90(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053e220(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ea30(CDemonMission *this_ptr);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053eb40(CDemonMission *this_ptr,char *param_2);
void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ec80(CDemonMission *this_ptr);
void * __cdecl shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram *this_ptr,CDSEModel **dest_array);
CDSEModel * __cdecl shape_multicrm_cpp_CMultiCram_getSecondModel_FUN_0053ee30(CMultiCram *this_ptr);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee50(CMultiCram *this_ptr,int *model_count);
CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee60(CMultiCram *this_ptr,int *model_count);
void __cdecl shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram *this_ptr);
void __cdecl core_netgame_cpp_staticInit_FUN_0053f310(void);
void __cdecl core_netgame_cpp_FUN_0053f360(void);
void __cdecl core_netgame_cpp_FUN_0053f390(void);
float __cdecl core_netgame_cpp_FUN_0053f3e0(void);
float __cdecl core_netgame_cpp_FUN_0053f440(void);
void __cdecl core_netgame_cpp_FUN_0053f4a2(void);
void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index);
int __cdecl core_netgame_cpp_FUN_0053f550(void);
int * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(void);
void __cdecl core_netgame_cpp_FUN_0053f650(void);
CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr);
CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame *this_ptr,uint flags);
void __cdecl core_netgame_cpp_CNetGame_FUN_0053f780(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_0053f830(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_0053fd00(CNetGame *this_ptr);


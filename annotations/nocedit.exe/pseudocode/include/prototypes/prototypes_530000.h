#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CDSEModel.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMultiCram.h"
#include "types/classes/CNetGame.h"
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

void sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors * quantized_samples, SMpegSubbandScalefactors * dequantized_samples, SMpegSubbandAllocation * allocation, SMpegFrameHeader * header);
void sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0(float * spectral_samples, int * scalefactor_band_indices, SMpegFrame * frame_info, int channel_or_granule_index);
void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float * sample_array, int * scalefactor_indices, SMpegFrame * frame_info);
void sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float * output_dct_table);
void sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_005304f0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output);
void sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3Granule * side_info_array, SMpegFrame * frame);
void sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule_index, SMpegFrame * frame);
void sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame);
void sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame);
uint sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder * this_ptr, float * spectral_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame, int bit_budget);
void sound_mp3_cpp_requantizeLayer3Samples_FUN_00531d50(SMpegSubbandQuantizedSamples * quantized_samples, SMpegSubbandSamples * output_samples, int * scalefactor_data, SMpegLayer3Granule * granule_info, int channel_index, SMpegLayer3Granule * * granule_array);
void sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples * input_samples, SMpegSubbandSamples * output_samples, SMpegFrame * frame_info, SMpegLayer3Granule * * granule_array);
void sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int unused_param3, int sample_index, float * output_buffer);
void sound_mp3_cpp_mpegLayer3StereoProcess_FUN_005325e0(SMpegStereoSubbandSamples * input_lr_samples, SMpegStereoSubbandSamples * output_samples, SMpegScalefactorBandData * scalefactor_data, SMpegFrame * frame_info, SMpegLayer3Granule * * granule_array);
void sound_mp3_cpp_antiAliasingButterfly_FUN_005334b0(float * input_samples, float * output_samples, SMpegFrame * frame_info, void * unused_param4);
void sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float * input_samples, float * output_samples, int mpeg_block_type);
void sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder * this_ptr, void * unknown_param2, float * output_buffer, int subband_index, int channel, SMpegFrame * frame_info, void * unknown_param7);
int sound_mp3_cpp_calculateMainDataSize_FUN_00533c50(SMpegFrame frame_info);
int sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void);
void sound_mp3_cpp_initializeHuffmanTables_FUN_00533f80(void);
void sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void);
CMP3Decoder * sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder * this_ptr);
CMP3Decoder * sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr);
void sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(CMP3Decoder * this_ptr, char * filename);
int sound_mp3_cpp_CMP3Decoder_parseHeader_FUN_00534630(CMP3Decoder * this_ptr, FILE * file_handle, int file_size);
void sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr);
int sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder * this_ptr, short * output_buffer, int samples_requested);
int sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset);
int sound_mp3_cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder * this_ptr);
int sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr);
void core_msnedit_cpp_staticInit_FUN_00535c30(void);
undefined core_msnedit_cpp_FUN_00535c60();
undefined core_msnedit_cpp_FUN_00535df0();
undefined core_msnedit_cpp_FUN_00535e10();
undefined core_msnedit_cpp_MasterEditorKeysHelpScreen_FUN_00535e70();
undefined core_msnedit_cpp_FUN_00536bc0();
undefined core_msnedit_cpp_FUN_00536bf0();
undefined core_msnedit_cpp_FUN_00536cd0();
undefined core_msnedit_cpp_FUN_00536e20();
undefined core_msnedit_cpp_FUN_00537230();
undefined core_msnedit_cpp_FUN_00537330();
undefined core_msnedit_cpp_FUN_00537410();
undefined core_msnedit_cpp_FUN_005374b0();
void core_msnedit_cpp_readIni_FUN_00537530(CDemonMission * mission_ptr, CIniFile * ini_file);
void core_msnedit_cpp_writeIni_FUN_005375d0(CDemonMission * mission, CIniFile * ini_file);
undefined core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680();
undefined core_msnedit_cpp_FUN_005379e0();
undefined core_msnedit_cpp_FUN_00537dd0();
undefined core_msnedit_cpp_OpenAndCreateWorld_FUN_00537f60();
void core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(CDemonMission * this_ptr);
undefined core_msnedit_cpp_WalkAroundOnSet_FUN_00538ba0();
undefined core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60();
undefined core_msnedit_cpp_FUN_00538df0();
undefined core_msnedit_cpp_FUN_00538ea0();
undefined core_msnedit_cpp_FUN_00538f40();
undefined core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90();
undefined core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
undefined core_msnedit_cpp_PrepareMissionMaybe_FUN_005390f0();
undefined core_msnedit_cpp_FUN_0053af50();
undefined core_msnedit_cpp_RelevantActorsToTesting_FUN_0053b030();
undefined core_msnedit_cpp_FUN_0053b510();
undefined core_msnedit_cpp_FUN_0053b9f0();
undefined core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
undefined core_msnedit_cpp_FUN_0053bcf0();
undefined core_msnedit_cpp_DuplicateActorCheckMaybe_FUN_0053bd80();
undefined core_msnedit_cpp_UndoChangeMaybe_FUN_0053c0b0();
undefined core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
undefined core_msnedit_cpp_FUN_0053c210();
undefined core_msnedit_cpp_FUN_0053c340();
undefined core_msnedit_cpp_FUN_0053c4f0();
undefined core_msnedit_cpp_FUN_0053c730();
void core_msnedit_cpp_CDemonMission_FUN_0053c8d0(CDemonMission * this_ptr);
undefined core_msnedit_cpp_FUN_0053c930();
undefined core_msnedit_cpp_BeginAndEndScene_FUN_0053c970();
void core_msnedit_cpp_CDemonMission_FUN_0053ca00(CDemonMission * this_ptr);
undefined core_msnedit_cpp_FUN_0053ca30();
undefined core_msnedit_cpp_FUN_0053ca80();
undefined core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0();
undefined core_msnedit_cpp_FUN_0053cc30();
undefined core_msnedit_cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0();
undefined core_msnedit_cpp_UserInputTempMission_FUN_0053ccf0();
undefined core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
int core_msnedit_cpp_FUN_0053d220(CDemonMission * this_ptr);
undefined core_msnedit_cpp_FUN_0053d3a0();
undefined core_msnedit_cpp_FUN_0053d3b0();
undefined core_msnedit_cpp_FUN_0053d7b0();
undefined core_msnedit_cpp_FUN_0053d8b0();
undefined core_msnedit_cpp_HideActors_FUN_0053dcf0();
undefined core_msnedit_cpp_DeleteActors_FUN_0053df90();
undefined core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220();
undefined core_msnedit_cpp_FUN_0053ea30();
undefined core_msnedit_cpp_FUN_0053eb40();
undefined core_msnedit_cpp_FUN_0053ec80();
void * shape_multicrm_cpp_CMultiCram_getModels_FUN_0053ee00(CMultiCram * this_ptr, CDSEModel * * dest_array);
CDSEModel * shape_multicrm_cpp_CMultiCram_getSecondModel_FUN_0053ee30(CMultiCram * this_ptr);
CMultiCram * shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram * this_ptr, int * model_count_ptr);
CMultiCram * shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee50(CMultiCram * this_ptr, int * model_count);
int * shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee60(CMultiCram * this_ptr, int * model_count);
void shape_multicrm_cpp_CMultiCram_run_FUN_0053ee70(CMultiCram * this_ptr);
undefined core_netgame_cpp_staticInit_FUN_0053f310();
undefined core_netgame_cpp_FUN_0053f360();
undefined core_netgame_cpp_FUN_0053f390();
undefined core_netgame_cpp_FUN_0053f3e0();
undefined core_netgame_cpp_FUN_0053f440();
undefined core_netgame_cpp_FUN_0053f4a2();
undefined core_netgame_cpp_removeChatOut_FUN_0053f4b0();
undefined core_netgame_cpp_FUN_0053f550();
undefined core_netgame_cpp_allocSimFrame_FUN_0053f5a0();
undefined core_netgame_cpp_FUN_0053f650();
CNetGame * core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame * this_ptr);
CNetGame * core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame * this_ptr);
undefined core_netgame_cpp_CNetGame_FUN_0053f780();
undefined core_netgame_cpp_CNetGame_FUN_0053f830();
undefined core_netgame_cpp_initializeNetworkToHost_FUN_0053f860();
undefined core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900();
undefined core_netgame_cpp_initializeNetwork_FUN_0053fbc0();
void core_netgame_cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr);


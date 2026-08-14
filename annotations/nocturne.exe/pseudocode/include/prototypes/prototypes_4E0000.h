#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CFont.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMorph.h"
#include "types/classes/CMorphModel.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CMotionList.h"
#include "types/classes/CMouse.h"
#include "types/classes/CNPC.h"
#include "types/classes/CNetGame.h"
#include "types/classes/CParticle.h"
#include "types/classes/CPassenger.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SChatHistory.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SHuffmanTable.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLTextureLod.h"
#include "types/structs/SMotion.h"
#include "types/structs/SMotionTransition.h"
#include "types/structs/SMpegFrame.h"
#include "types/structs/SMpegFrameHeader.h"
#include "types/structs/SMpegLayer3GranuleInfo.h"
#include "types/structs/SMpegLayer3SideInfo.h"
#include "types/structs/SMpegScalefactorBandData.h"
#include "types/structs/SMpegStereoSubbandSamples.h"
#include "types/structs/SMpegSubbandAllocation.h"
#include "types/structs/SMpegSubbandQuantizedSamples.h"
#include "types/structs/SMpegSubbandSCFSI.h"
#include "types/structs/SMpegSubbandSamples.h"
#include "types/structs/SMpegSubbandScalefactors.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SNetPlayer.h"
#include "types/structs/SNetworkAddr.h"
#include "types/structs/SPlayer.h"
#include "types/structs/SPlayerInput.h"
#include "types/structs/SSimFrame.h"
#include "types/unions/UNetPacket.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4E0000
// =============================================================================

CMorph * __cdecl core_morph_cpp_CMorph_ctor_FUN_004e0050(CMorph *this_ptr);
CMorph * __cdecl core_morph_cpp_CMorph_dtor_FUN_004e0070(CMorph *this_ptr,uint flags);
void __cdecl core_morph_cpp_CMorph_free_FUN_004e0090(CMorph *this_ptr);
void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);
void __cdecl core_morph_cpp_CMorph_setupModelFromQuadPolygons_FUN_004e0110(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);
void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);
void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);
void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_004e01f0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);
void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);
void __cdecl core_morph_cpp_CMorph_addPartFromDeformableModel_FUN_004e0290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);
void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);
void __cdecl core_morph_cpp_CMorph_FUN_004e0300(CMorph *this_ptr);
void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index);
void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index);
void __cdecl core_morph_cpp_CMorph_getReady_FUN_004e03c0(CMorph *this_ptr);
void __cdecl core_morph_cpp_CMorph_render_FUN_004e0820(CMorph *this_ptr,float morph_t);
int __cdecl core_morph_cpp_addInts_FUN_004e0890(int a,int b);
CBoundingBox3D * __cdecl core_morph_cpp_CBoundingBox3D_arrdtor_FUN_004e08a0(CBoundingBox3D *this_ptr,uint flags);
CMorphModel * __cdecl core_morph_cpp_CMorphModel_arrdtor_FUN_004e08c0(CMorphModel *this_ptr,uint flags);
void core_motion_cpp_FUN_004e08e0(_FILE *param_1);
CMotionList * __cdecl core_motion_cpp_CMotionList_ctor_FUN_004e0900(CMotionList *this_ptr);
void __cdecl core_motion_cpp_CMotionList_load_FUN_004e0920(CMotionList *this_ptr,_FILE *file_handle);
void __cdecl core_motion_cpp_CMotionList_save_FUN_004e0d20(CMotionList *this_ptr,_FILE *file_handle);
int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList *this_ptr,char *motion_name,int error_on_not_found);
int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList *this_ptr,char *state_name,int error_on_not_found);
CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(CMotionController *this_ptr);
CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(CMotionController *this_ptr,uint flags);
int __cdecl core_motion_cpp_CMotionController_advance_FUN_004e11c0(CMotionController *this_ptr,float *delta_time);
int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_004e1500(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_004e1600(CMotionController *this_ptr);
SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_reset_FUN_004e1680(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController *this_ptr,int desired_state_index,int force_immediate);
void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController *this_ptr,char *state_name,int force_immediate);
void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_004e1770(CMotionController *this_ptr,SMotionTransition *transition);
int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_004e1830(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004e1860(CMotionController *this_ptr,CMotionList *motion_list);
CMotionList * __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController *this_ptr);
char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController *this_ptr);
float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController *this_ptr,int desired_state_index);
void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController *this_ptr,char *motion_name,float frame_number);
void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(CMotionController *this_ptr,int target_motion_index,float target_frame_number);
void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(CMotionController *this_ptr);
int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor);
int __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition);
void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80(CMotionController *this_ptr,int motion_index,float current_frame,float *remaining_time);
float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController *this_ptr);
float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(CMotionController *this_ptr,int motion_index,float marker_position);
void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070(CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1,int *out_frame2,float *out_blend_weight);
void __cdecl core_motion_cpp_CMotionController_accumulateScaledRootMotion_FUN_004e2120(CMotionController *this_ptr,float start_frame,float end_frame,float scale_factor);
void __cdecl core_motion_cpp_CMotionController_load_FUN_004e2180(CMotionController *this_ptr,_FILE *file_handle);
void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix);
void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(CMotionController *this_ptr,CDemonActor *actor);
int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_004e2480(SMpegFrame *frame);
void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004e25c0(int layer,int mode_extension);
void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_004e2630(SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_004e27f0(CFileBitStream *this_ptr);
void __cdecl sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(CFileBitStream *this_ptr);
void __cdecl sound_mp3_cpp_CFileBitStream_FUN_004e28a0(CFileBitStream *this_ptr,_FILE *param_2,ulong param_3,int param_4);
void __cdecl sound_mp3_cpp_CFileBitStream_FUN_004e2980(CFileBitStream *this_ptr);
uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(CFileBitStream *this_ptr);
uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(CFileBitStream *this_ptr,int num_bits);
int __cdecl sound_mp3_cpp_CFileBitStream_getTotalBitsRead_FUN_004e2c40(CFileBitStream *this_ptr);
int __cdecl sound_mp3_cpp_CFileBitStream_FUN_004e2c50(CFileBitStream *this_ptr);
int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004e2c60(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits);
uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(CMP3Decoder *this_ptr);
uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder *this_ptr,uint num_bits);
uint __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder *this_ptr);
void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte);
void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_004e2e40(CMP3Decoder *this_ptr,int num_bits);
void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0(CMP3Decoder *this_ptr,int num_bytes);
int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out,int *w_out);
void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130(CFileBitStream *this_ptr,SMpegFrameHeader **header_out);
void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame );
void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004e3320(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004e33d0(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004e3a60(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_requantizeSamples_FUN_004e3d30(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index);
void __cdecl sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_004e3f20(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info);
void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_004e3f80(float *output_dct_table);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070(CMP3Decoder *this_ptr,float *subband_samples,int channel_index,short *pcm_output);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_004e4c70(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position,double ratio,int sample_index,float *ratio_buffer);
void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_004e6160(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame);
void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030(float *input_samples,float *output_samples,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header);
void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *input_samples,float *output_samples,int mpeg_block_type);
void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header);
int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0(SMpegFrame frame_info);
int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_004e78b0(void);
void __cdecl sound_mp3_cpp_initializeHuffmanTablesOnce_FUN_004e7b00(void);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder *this_ptr);
CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_004e7dd0(CMP3Decoder *this_ptr,uint flags);
void __cdecl sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(CMP3Decoder *this_ptr,char *filename);
int __cdecl sound_mp3_cpp_FUN_004e7ed0(CMP3Decoder *this_ptr,_FILE *file_handle,int file_size);
void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(CMP3Decoder *this_ptr);
int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested);
int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(CMP3Decoder *this_ptr,int sample_offset);
int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(CMP3Decoder *this_ptr,short *pcm_output);
void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void);
void __cdecl core_netgame_cpp_resetGameTime_FUN_004e94f0(void);
void __cdecl core_netgame_cpp_updateGameTime_FUN_004e9520(void);
float __cdecl core_netgame_cpp_computeTimeDelta_FUN_004e9570(int start_time,int end_time);
float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_004e95d0(uint timestamp);
void core_netgame_cpp_FUN_004e9630(void);
void __cdecl core_netgame_cpp_removeChatOut_FUN_004e9640(int index);
int __cdecl core_netgame_cpp_findSimFrame_FUN_004e96e0(int sequence_number);
SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number);
void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int min_sequence);
CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_004e9860(CNetGame *this_ptr);
CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(CNetGame *this_ptr,uint flags);
void __cdecl core_netgame_cpp_CNetGame_init_FUN_004e9910(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(CNetGame *this_ptr,uint32_t *server_ip);
int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(CNetGame *this_ptr,int perform_handshake);
int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_004ea370(CNetGame *this_ptr,int sync_stage);
void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_004ea740(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_004ea830(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet);
void __cdecl core_netgame_cpp_CNetGame_send_FUN_004eb350(CNetGame *this_ptr,int player_index,SNetPacketHeader *packet);
void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet);
int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_004eb3f0(CNetGame *this_ptr,SNetworkAddr *addr);
int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode);
int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_004ebe10(CNetGame *this_ptr,int player_index,float max_ping);
void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_004ebfd0(CNetGame *this_ptr,char *message,int target_player);
void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message);
int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_004ec600(CNetGame *this_ptr,UNetPacket *packet);
void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_004ed2d0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_004ed720(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(CNetGame *this_ptr,SSimFrame *sim_frame);
SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload);
void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_004edaf0(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_matchPacketSize_FUN_004edc30(SNetPacketHeader *a,SNetPacketHeader *b);
int __cdecl core_netgame_cpp_matchPacketHeader_FUN_004edc50(SNetPacketHeader *a,SNetPacketHeader *b);
void __cdecl core_netgame_cpp_initNetPacket_FUN_004edc80(SNetPacketHeader *packet,int packet_size,uchar packet_type);
void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_004edca0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_004edcb0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode5_FUN_004edcc0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode6_FUN_004edcd0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_004edce0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_004edcf0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_004edd00(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode12_FUN_004edd10(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode13_FUN_004edd20(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_swapPlayerData_FUN_004edd30(CNetGame *this_ptr,SNetPlayer *other);
SPlayer * __cdecl core_netgame_cpp_SPlayer_ctor_FUN_004ede30(SPlayer *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_ctor_FUN_004ede40(SChatHistory *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_dtor_FUN_004ede50(SChatHistory *this_ptr,uint flags);
SNetPlayer * __cdecl core_netgame_cpp_SNetPlayer_ctor_FUN_004ede60(SNetPlayer *this_ptr);
SNetPlayer * __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_004ede70(SNetPlayer *this_ptr,SNetPlayer *other);
void __cdecl core_netgame_cpp_copyPlayerInput_FUN_004edf30(SPlayerInput *dest,SPlayerInput *src);
void __cdecl core_netgame_cpp_copyNetAddr_FUN_004edf80(SNetworkAddr *dest,SNetworkAddr *src);
int * __cdecl core_netgame_cpp_assignInt1_FUN_004edfa0(int *dest,int *src);
int * __cdecl core_netgame_cpp_assignInt2_FUN_004edfb0(int *dest,int *src);
int support_newmsg_cpp_FUN_004edfc0(char *param_1);
char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_004ee2f0(char *key,int lower_bound,int upper_bound);
char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_004ee370(char *key);
char * __cdecl support_newmsg_cpp_decryptMessage_FUN_004ee3f0(char *encrypted_msg);
void __cdecl engine_ncursfx_cpp_staticInit_FUN_004ee4e0(void);
CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_004ee500(CMouse *this_ptr);
CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_004ee560(CMouse *this_ptr,uint flags);
void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0(CMouse *this_ptr);
void __cdecl engine_ncursfx_cpp_CMouse_FUN_004ee680(CMouse *this_ptr);
int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_004ee690(CMouse *this_ptr,uint button_mask);
int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_004ee6c0(CMouse *this_ptr,uint button_mask,int use_skull_effect);
void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_004ee720(CMouse *this_ptr,int *out_x,int *out_y);
void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_004ee740(CMouse *this_ptr);
CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor_FUN_004ee8b0(CAlphaBitmap *this_ptr,uint flags);
CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor_FUN_004ee8d0(CAlphaBitmap *this_ptr,uint flags);
void __cdecl core_npc_cpp_staticInit_FUN_004ee8f0(void);
CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_004ee920(void);
CDemonActorType * __cdecl core_npc_cpp_CNPC_getActorType_FUN_004ee940(CNPC *this_ptr);
CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_004ee950(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_setup_FUN_004ee9e0(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(CNPC *this_ptr,float delta_time);
void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_004eece0(CNPC *this_ptr,int layer_flag);
void __cdecl core_npc_cpp_CNPC_archive_FUN_004eed10(CNPC *this_ptr);
int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC *this_ptr,char *motion_name);
void __cdecl core_npc_cpp_CNPC_processDamage_FUN_004eeea0(CNPC *this_ptr,SDamageInfo *damage_info);
int __cdecl core_npc_cpp_CNPC_isInvulnerable_FUN_004eef80(CNPC *this_ptr);
CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_004eefa0(CNPC *this_ptr);
CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_004eefb0(CFont *this_ptr);
CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_004eefc0(CFont *this_ptr,uint flags);
int __cdecl engine_palette_cpp_CFont_drawText_FUN_004eefd0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color);
int __cdecl engine_palette_cpp_CFont_getLineSpacing_FUN_004ef000(CFont *this_ptr);
CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_004ef010(CParticle *this_ptr);
CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_004ef030(CParticle *this_ptr,uint flags);
void __cdecl core_particle_cpp_CParticle_setup_FUN_004ef040(CParticle *this_ptr,CVector3f *position,CVector3f *velocity);
void __cdecl core_particle_cpp_CParticle_process_FUN_004ef120(CParticle *this_ptr);
void __cdecl core_particle_cpp_CParticle_render_FUN_004ef440(CParticle *this_ptr);
int __cdecl core_particle_cpp_CParticle_onCollision_FUN_004ef470(CParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_passngr_cpp_staticInit_FUN_004ef480(void);
CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_004ef4b0(void);
CDemonActorType * __cdecl core_passngr_cpp_CPassenger_getActorType_FUN_004ef4d0(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_004ef5c0(CPassenger *this_ptr,uint flags);
void __cdecl core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_process_FUN_004ef890(CPassenger *this_ptr,float delta_time);
int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_004efa60(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_archive_FUN_004efb30(CPassenger *this_ptr);
void core_path_cpp_FUN_004efc10(void);
int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_004efc30(void);
void __cdecl core_path_cpp_queuePush_FUN_004efc50(int grid_x,int cost,int grid_z,char direction);
void __cdecl core_path_cpp_queuePop_FUN_004efcd0(int *out_x,int *out_cost,int *out_z);
CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_004efd50(CPathMap *this_ptr);
CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_004efdd0(CPathMap *this_ptr,uint flags);
float __cdecl core_path_cpp_CPathMap_getDirection_FUN_004efeb0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position);


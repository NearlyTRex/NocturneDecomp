#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/dsound.h"
#include "system/stdio.h"
#include "system/windef.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDirectSoundDevice.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CMotionController.h"
#include "types/classes/COrientation.h"
#include "types/classes/CSampleInfo.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/classes/CSfxSlot.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CSlew.h"
#include "types/classes/CSmiley.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBoneTransformData.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SMixBuffer.h"
#include "types/structs/SRecordingDeviceInfo.h"
#include "types/structs/SSoundDeviceInfo.h"
#include "types/structs/SStereoBuffers.h"
#include "types/structs/SStereoGains.h"
#include "types/structs/SVert.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5A0000
// =============================================================================

void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance *this_ptr,int lod_index);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210(CDeformableModelInstance *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0(CDeformableModelInstance *this_ptr,int lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(CDeformableModelInstance *this_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance *this_ptr);
CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance *this_ptr,char *model_name);
int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0(CMotionController *this_ptr,int source_motion_index,float source_frame, int target_motion_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance *this_ptr,int motion_index,float animation_time, SBoneTransformData *output_bone_data);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90(CDeformableModelInstance *this_ptr,float start_frame,float end_frame, float scale_factor);
CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame, float end_frame);
CDeformableModelInstance * __cdecl core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_005a0f50(CMotionController *motion_controller,CDeformableModelInstance *deformable_model, int motion_index,float start_frame,float end_frame);
CBodyPart * __cdecl core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0(CDeformableModelInstance *this_ptr,int part_index,COrientation *orientation, CVector3f *velocity,CDemonActor *source_actor,int unknown);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index);
float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);
int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160(CDeformableModelInstance *this_ptr,CVector3f *point);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0(CDeformableModelInstance *this_ptr,CVector3f *center_position, CVector3f *orientation_vector,int desired_lod_index);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(CDeformableModelInstance *this_ptr,SBoneTransformData *bone_transform);
CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a16c0(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0(CDeformableModelInstance *this_ptr,int color,int render_flags);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800(CDeformableModelInstance *this_ptr);
void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_005a1950(SBoneTransformData *bone_data,CDeformableModelInstance *instance_ptr);
void __cdecl core_skeleton_cpp_blendBoneTransformData_FUN_005a1b70(CVector3f *result_root_pos,SBoneTransformData *bone_data_out, SBoneTransformData *bone_data_in,float blend_weight, CDeformableModelInstance *instance_ptr);
CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(char *model_filename);
void __cdecl core_skeleton_cpp_freeAllModels_FUN_005a1dc0(void);
CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename);
void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0(void);
void __cdecl core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(char *output_buffer);
SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_005a1f70(SVert *this_ptr);
SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr,uint flags);
CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_005a1fb0(CSkeleton *objs,uint flags);
CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_arrdtor_FUN_005a1fd0(CDeformableModel *objs,uint flags);
CVector3f * __cdecl core_skeleton_cpp_CVector3f_arrdtor_FUN_005a1ff0(CVector3f *objs,uint flags);
CVector3f * __cdecl core_skeleton_cpp_CVector3f_arrdtor_FUN_005a2010(CVector3f *objs,uint flags);
CBoundingBox3D * __cdecl core_skeleton_cpp_CBoundingBox3D_arrdtor_FUN_005a2030(CBoundingBox3D *objs,uint flags);
void __cdecl core_slew_cpp_staticInit_FUN_005a2050(void);
void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr);
void __cdecl core_slew_cpp_CSlew_free_FUN_005a20a0(void);
void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr);
void __cdecl core_smiley_cpp_staticInit_FUN_005a23c0(void);
CSmiley * __cdecl core_smiley_cpp_factorFunc_FUN_005a23f0(void);
CDemonActorType * __cdecl core_smiley_cpp_CSmiley_getActorType_FUN_005a2420(CSmiley *this_ptr);
CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr);
void __cdecl core_smiley_cpp_CSmiley_setup_FUN_005a24d0(CSmiley *this_ptr);
void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time);
int __cdecl core_smiley_cpp_CSmiley_attractActorToward_FUN_005a3160(CSmiley *this_ptr,CDemonActor *actor,CVector3f *target_local_point);
void __cdecl core_smiley_cpp_CSmiley_archive_FUN_005a3220(CSmiley *this_ptr);
void __cdecl core_smiley_cpp_CSmiley_reset_FUN_005a3280(CSmiley *this_ptr);
void __cdecl core_smiley_cpp_CSmiley_FUN_005a32a0(CSmiley *this_ptr);
void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_005a3580(CSmiley *this_ptr,SDamageInfo *damage_info);
int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_005a3690(CSmiley *this_ptr,CVector3f *out_points_array);
void __cdecl core_smiley_cpp_CSmiley_hasCollision_FUN_005a37f0(CSmiley *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_smiley_cpp_CSmiley_getPropertyList_FUN_005a3810(CSmiley *this_ptr,CActorPropertyList *property_list);
void __cdecl core_smiley_cpp_CSmiley_addFilesToExtract_FUN_005a3850(CSmiley *this_ptr,_FILE *file_handle);
CSmiley * __cdecl core_smiley_cpp_CSmiley_dtor_FUN_005a3880(CSmiley *this_ptr,uint flags);
void __cdecl sound_sndmain_cpp_staticInit_FUN_005a3940(void);
void __cdecl sound_sndmain_cpp_computeComplexFFT_FUN_005a39a0(float *input_real,float *input_imag,float *output_real,float *output_imag,int size);
void __cdecl sound_sndmain_cpp_computeFFT_FUN_005a3c90(float *input,int size,float *output_real,float *output_imag);
int __cdecl sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(_FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample);
int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005a43a0(void);
CSfxSample * __cdecl sound_sndmain_cpp_findFreeSampleSlot_FUN_005a4400(void);
int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes);
void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_005a4530(char *line);
void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr);
CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename);
int __cdecl sound_sndmain_cpp_isStreamableFile_FUN_005a5180(char *filename,char *filepath);
CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005a5200(char *filename);
void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void);
int __cdecl sound_sndmain_cpp_allocateHwSample_FUN_005a5620(int bits_per_sample,int channel_count,int sample_rate,int sample_count);
float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_005a56c0(float distance,float reference_distance,float min_distance,float max_distance);
void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(int requested_size,int num_buffers);
void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005a5900(void);
void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void);
void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80(float *input_samples,void *output_buffer,int bits_per_sample,int num_samples, int output_stride);
CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle,int check_hardware_playback);
void __cdecl sound_sndmain_cpp_generateSilence_FUN_005a5db0(void *buffer,uint bits_per_sample,uint num_samples);
void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part);
double __cdecl sound_sndmain_cpp_mixResampleMonoToStereo_FUN_005a5e70(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains, double resample_position,double resample_delta,int samples_to_process);
double __cdecl sound_sndmain_cpp_mixResampleStereoToStereo_FUN_005a5fb0(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains, double resample_position,double resample_delta,int samples_to_process);
CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_ctor_FUN_005a60f0(CSfxSample *this_ptr);
CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_005a6150(CSfxSample *this_ptr,uint flags);
int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample *this_ptr);
void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(CSfxSample *this_ptr,int lock_offset,int lock_length);
void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *sample);
void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset);
int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample *this_ptr,float time_window,float update_interval);
void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr);
float __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070(CSfxSlot *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(CSfxSlot *this_ptr,float delta_time);
void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(CSfxSlot *this_ptr,SMixBuffer mix_buffer);
void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *slot);
void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot *this_ptr,double hardware_playback_pos);
void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr);
CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_005a8480(CSfxSample *this_ptr);
double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSample_computeDataSize_FUN_005a8520(CSfxSample *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample *this_ptr);
double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo *this_ptr,double position,uint input_type,uint output_type);
double __cdecl sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type);
int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions *this_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x,double pos_y,double pos_z);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f *position_source_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(CVector3d *position_source_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x,double vel_y,double vel_z);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f *velocity_source_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d *velocity_source_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(float volume);
void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency);
void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata);
void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index);
void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds);
void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags);
void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask);
void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask);
int __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time,int trigger_id);
void __cdecl sound_sndmain_cpp_resetCurrentSfxOptions_FUN_005a8c10(void);
void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void);
void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void);
int __cdecl sound_sndmain_cpp_returnZero_FUN_005a8cf0(void);
void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags);
uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename);
uint __cdecl sound_sndmain_cpp_startNonPositionalSfx_FUN_005a9550(char *filename);
uint __cdecl sound_sndmain_cpp_startSfxAtStaticPosition_FUN_005a9580(char *filename,double pos_x,double pos_y,double pos_z);
uint __cdecl sound_sndmain_cpp_startSfxTrackedFloatPosition_FUN_005a95e0(char *filename,CVector3f *position_source_ptr);
uint __cdecl sound_sndmain_cpp_startSfxTrackedDoublePosition_FUN_005a9620(char *filename,CVector3d *position_source_ptr);
int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle);
int __cdecl sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0(void);
int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(int enable);
int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle,CSfxSample *output_buffer);
double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format);
int __cdecl sound_sndmain_cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle,CSfxOptions *output_options);
int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_005a9820(uint sfx_handle,double pos_x,double pos_y,double pos_z);
int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle,CVector3f *position_source_ptr);
int __cdecl sound_sndmain_cpp_setSfxTrackedDoublePosition_FUN_005a9910(uint sfx_handle,CVector3d *position_source_ptr);
int __cdecl sound_sndmain_cpp_setSfxVelocity_FUN_005a9970(uint sfx_handle,double vel_x,double vel_y,double vel_z);
int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_005a9a00(uint sfx_handle,CVector3f *velocity_source_ptr);
int __cdecl sound_sndmain_cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70(uint sfx_handle,CVector3d *velocity_source_ptr);
int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle,float volume);
int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle,float base_frequency);
int __cdecl sound_sndmain_cpp_setSfxUserData_FUN_005a9ba0(uint sfx_handle,int index,void *value);
int __cdecl sound_sndmain_cpp_setSfxIsActive_FUN_005a9c10(uint sfx_handle,int active);
int __cdecl sound_sndmain_cpp_killSfx_FUN_005a9c40(uint sfx_handle);
int __cdecl sound_sndmain_cpp_setSfxFade_FUN_005a9c70(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade);
void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005a9cc0(void);
void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index,float volume);
float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(int channel_index);
void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count);
void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(int channel_index,int enable_state);
int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index);
uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0(void);
uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle);
void __cdecl sound_sndmain_cpp_formatActiveSounds_FUN_005a9f80(char *output_buffer);
int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005a9ff0(void);
void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(double pos_x,double pos_y,double pos_z);
void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z, double right_x,double right_y,double right_z);
void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(double x_velocity,double y_velocity,double z_velocity);
void __cdecl sound_sndmain_cpp_set3DListenerDistanceFactor_FUN_005aa240(double distance_in_feet);
int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290(double pos_x,double pos_y,double pos_z,double radius);
void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005aa2f0(char *sample_name);
void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005aa340(int min_bytes,int max_bytes);
void __cdecl sound_sndmain_cpp_freeSampleByName_FUN_005aa360(char *sample_name,int kill_active_slots);
int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005aa3c0(char *sample_name);
int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample);
void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005aa660(void);
void __cdecl sound_sndmain_cpp_getSoundMemoryStats_FUN_005aa6a0(int *out_referenced_count,int *out_total_bytes_referenced, int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots, int *out_available_memory);
void __cdecl sound_sndmain_cpp_convert8BitAudioSignedness_FUN_005aa7b0(byte *buffer,int num_bytes);
void __cdecl sound_sndmain_cpp_convert16BitAudioSignedness_FUN_005aa7d0(short *buffer,int num_samples);
void __cdecl sound_sndmain_cpp_resampleAndConvertAudio_FUN_005aa7f0(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed, short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate, int dst_signed,short *dst_buffer,int num_output_samples);
void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005aae00(void);
void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0(void);
int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0(void);
int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void);
int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate);
void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_005ab210(int *bits_per_sample,int *channels,int *sample_rate);
int __cdecl sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250(void);
int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(void);
int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270(void);
void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(int bit_depth);
void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count);
void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate);
int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(void);
void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info);
int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0(void);
void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id);
uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530(void);
int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005ab540(void);
void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(int enable);
int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590(void);
uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0(void);
int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0(void);
int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void);
int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0(void);
int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_005ab6d0(void);
void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x,float orient_right_y,float orient_right_z);
int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720(void);
void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(int index,SRecordingDeviceInfo *device_info);
int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_005ab7e0(void);
void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(int device_id);
int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005ab8d0(void);
int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930(void);
int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970(void);
int __cdecl sound_sndmain_cpp_isRecordingStarted_FUN_005ab980(void);
int __cdecl sound_sndmain_cpp_getCurrentRecordingDevice_FUN_005ab990(void);
int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0(int bits_per_sample,int channels,int sample_rate,int signed_samples);
void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_005aba40(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed);
int __cdecl sound_sndmain_cpp_startRecording_FUN_005aba90(void);
HRESULT __cdecl sound_sndmain_cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps);
int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void);
DWORD __stdcall sound_sndmain_cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam);
HANDLE __cdecl sound_sndmain_cpp_startSoundThread_FUN_005abc00(double latency_seconds);
int __cdecl sound_sndmain_cpp_killSoundThread_FUN_005abcb0(void);
void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void);
void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void);
void __cdecl sound_sndmain_cpp_processAudio_FUN_005abe20(void);
float __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0(void);
void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency);
void __cdecl sound_sndmain_cpp_readIni_FUN_005abf20(CIniFile *ini_file);
void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file);
int __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int channel,float freq_start_hz,float freq_end_hz);
void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005ac990(int channel,float *out_peak,float *out_average);
void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec, int samples_per_block,int block_align);
void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_005acdb0(void);
void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_005ace90(int paused_mode);
void __cdecl sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(char *mp3_filename);
char * __cdecl sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(char *sample_name);
void __cdecl sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0(void);
void __cdecl sound_sndmain_cpp_logSoundError_FUN_005adba0(char *format,...);
CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_ctor_FUN_005add70(CSfxOptions *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90(CSfxSample *this_ptr);
int __cdecl sound_sndmain_cpp_return16_FUN_005addb0(void);
int __cdecl sound_sndmain_cpp_CSampleInfo_getStreamingFlag_FUN_005addc0(CSampleInfo *this_ptr);
int __cdecl sound_sndmain_cpp_CSampleInfo_getBitDepth_FUN_005addd0(CSampleInfo *this_ptr);
void __cdecl sound_sndmain_cpp_doNothing_FUN_005adde0(void);
void __cdecl sound_sndmain_cpp_doNothing_FUN_005addf0(void);
CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_005ade00(CSfxSlot *this_ptr);
CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_dtor_FUN_005ade20(CSfxSlot *this_ptr,uint flags);
CSfxOptions * __cdecl sound_sndmain_cpp_CSfxOptions_dtor_FUN_005ade30(CSfxOptions *this_ptr,uint flags);
CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor_FUN_005ade40(CSfxSample *objs,uint flags);
void __cdecl sound_snddx_cpp_staticInit_FUN_005ade60(void);
char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code);
int __cdecl sound_snddx_cpp_checkDirectSoundError_FUN_005adf90(HRESULT error_code,char *operation_description);
int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005adff0(void);
int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice *this_ptr);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice *this_ptr);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice *this_ptr);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice *this_ptr);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate, int *out_samples_per_block);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice *this_ptr);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20(CDirectSoundDevice *this_ptr);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30(CDirectSoundDevice *this_ptr,double x,double y,double z);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front, double x_top,double y_top,double z_top);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0(CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10(CDirectSoundDevice *this_ptr,double distance_in_feet);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate, int sample_count);
int __cdecl sound_snddx_cpp_isValidSampleBuffer_FUN_005af150(int buffer_id);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_005af190(CDirectSoundDevice *this_ptr,int buffer_id);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice *this_ptr,int buffer_id);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice *this_ptr,int sample_buffer_id);
int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_005af720(int sfx_handle);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0(CDirectSoundDevice *this_ptr,CSfxSlot *slot);
double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60(CDirectSoundDevice *this_ptr,CSfxSlot *slot);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_005afe80(CDirectSoundDevice *this_ptr,CSfxSlot *slot);


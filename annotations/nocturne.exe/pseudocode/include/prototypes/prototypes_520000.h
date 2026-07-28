#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CDirectSoundDevice.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CSampleInfo.h"
#include "types/classes/CSfxOptions.h"
#include "types/classes/CSfxSample.h"
#include "types/classes/CSfxSlot.h"
#include "types/classes/CSmiley.h"
#include "types/classes/CSound.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWavOutDevice.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SSoundDeviceInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x520000
// =============================================================================

void core_smiley_cpp_CSmiley_process_FUN_005200c0(CEnemy *param_1,float param_2);
undefined4 core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(CCharacter *param_1,int param_2);
void core_smiley_cpp_CSmiley_archive_FUN_00520ae0(CEnemy *param_1);
undefined4 core_smiley_cpp_FUN_00520b40(void);
void __cdecl core_smiley_cpp_CSmiley_processDismemberment_FUN_00520b60(CSmiley *this_ptr,SDamageInfo *damage_info);
void core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(CSmiley *param_1,SDamageInfo *param_2);
undefined4 core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(int param_1,CVector3f *param_2);
void core_smiley_cpp_FUN_005210b0(CCharacter *param_1,SCollisionInfo *param_2);
CDemonActor * core_smiley_cpp_FUN_005210d0(CDemonActor *param_1,byte param_2);
void __cdecl sound_sndmain_cpp_staticInit_FUN_00521190(void);
void sound_sndmain_cpp_computeComplexFFT_FUN_005211f0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void sound_sndmain_cpp_computeFFT_FUN_005214e0(undefined4 *param_1,int param_2,int param_3,int param_4);
int __cdecl sound_sndmain_cpp_parseWavFile_FUN_00521830(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample);
int sound_sndmain_cpp_FUN_00521bf0(void);
int sound_sndmain_cpp_FUN_00521c50(void);
int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(int requested_bytes);
void sound_sndmain_cpp_trimLineAndRemoveComments_FUN_00521d80(void);
void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(char *param_1);
CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_00522480(char *filename);
undefined4 sound_sndmain_cpp_isStreamableFile_FUN_00522970(char *param_1);
CSfxSample * sound_sndmain_cpp_FUN_005229f0(int param_1,char *param_2);
void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10(void);
int sound_sndmain_cpp_FUN_00522e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
float sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float param_1,float param_2,float param_3,float param_4);
void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_00522f10(int requested_size,int num_buffers);
void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005230d0(void);
void sound_sndmain_cpp_FUN_00523170(void);
void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride);
CSfxSlot * sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint param_1,int param_2);
void sound_sndmain_cpp_FUN_00523550(void);
void sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(void);
double sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);
double sound_sndmain_cpp_mixResampleStereoToStereo_FUN_00523750(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);
void sound_sndmain_cpp_FUN_00523890(CSfxSample *param_1);
CSfxSample * sound_sndmain_cpp_FUN_005238f0(CSfxSample *param_1);
int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(CSfxSample *this_ptr);
short * sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(CSfxSample *param_1,int param_2,int param_3);
void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(CSfxSample *sample);
void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset);
undefined4 sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(CSfxSample *param_1,float param_2);
void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr);
void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(CSfxSlot *this_ptr);
undefined4 sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot *param_1,float param_2);
void sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *param_1);
void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot *slot);
void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005256f0(CSfxSlot *this_ptr);
int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot *this_ptr);
void sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(int param_1,undefined4 param_2,undefined4 param_3);
void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1);
CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(CSfxSample *this_ptr);
double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00525bc0(CSampleInfo *this_ptr);
int sound_sndmain_cpp_CSfxSample_computeDataSize_FUN_00525c10(void);
int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample *this_ptr);
double sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(int param_1,double param_2,uint param_3,uint param_4);
undefined8 sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0(int param_1,double param_2,undefined4 param_3);
void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(CSfxOptions *this_ptr);
void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50(double pos_x,double pos_y,double pos_z);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr);
void sound_sndmain_cpp_FUN_00525ff0(void);
void sound_sndmain_cpp_FUN_00526020(void);
void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(CVector3f *velocity_source_ptr);
void sound_sndmain_cpp_FUN_005260c0(void);
void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(float volume);
void sound_sndmain_cpp_FUN_00526120(undefined4 param_1);
void sound_sndmain_cpp_FUN_00526150(int param_1,undefined4 param_2);
void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(int channel_index);
void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(double delay_seconds);
void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(uint flags);
void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask);
void sound_sndmain_cpp_FUN_005262a0(void);
void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time,int trigger_id);
void sound_sndmain_cpp_FUN_00526310(void);
void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00526340(void);
void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005263c0(void);
void sound_sndmain_cpp_formatSfxOptionsToString_FUN_00526410(undefined1 *param_1,int param_2,undefined4 *param_3,byte param_4);
uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename);
int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle);
int __cdecl sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0(void);
int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(int enable);
int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(uint sfx_handle,CSfxSample *output_buffer);
undefined8 sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(undefined4 param_1,undefined4 param_2);
undefined4 sound_sndmain_cpp_FUN_00526dd0(void);
int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z);
int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0(uint sfx_handle,CVector3f *position_source_ptr);
undefined4 sound_sndmain_cpp_FUN_00526f00(void);
undefined4 sound_sndmain_cpp_FUN_00526f60(void);
int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle,CVector3f *velocity_source_ptr);
undefined4 sound_sndmain_cpp_FUN_00527060(void);
int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume);
int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(uint sfx_handle,float base_frequency);
undefined4 sound_sndmain_cpp_FUN_00527190(void);
undefined4 sound_sndmain_cpp_FUN_00527200(void);
int __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(uint sfx_handle);
int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade);
void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005272b0(void);
void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(int channel_index,float volume);
float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(int channel_index);
void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005273d0(int channel_count);
void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int channel_index,int enable_state);
int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(int channel_index);
uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005274e0(void);
uint sound_sndmain_cpp_FUN_00527520(uint param_1);
void sound_sndmain_cpp_FUN_00527570(undefined1 *param_1);
int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void);
void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00527610(double pos_x,double pos_y,double pos_z);
void __cdecl sound_sndmain_cpp_set3DListenerOrient_FUN_00527690(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z);
void __cdecl sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(double x_velocity,double y_velocity,double z_velocity);
int __cdecl sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880(double pos_x,double pos_y,double pos_z,double radius);
void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005278e0(char *sample_name);
void sound_sndmain_cpp_setMemoryBudget_FUN_00527930(void);
void sound_sndmain_cpp_FUN_00527950(char *param_1,int param_2);
bool sound_sndmain_cpp_isSampleLoaded_FUN_005279b0(void);
int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005279e0(CSfxSample *out_sample);
void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void);
void sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);
void sound_sndmain_cpp_FUN_00527d80(void);
void sound_sndmain_cpp_shutdownSoundSystem_FUN_00527e10(void);
int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00527e40(void);
int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void);
int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample,int channels,int sample_rate);
void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00528160(int *bits_per_sample,int *channels,int *sample_rate);
int __cdecl sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0(void);
int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0(void);
int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0(void);
void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(int bit_depth);
void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(int channel_count);
void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(int sample_rate);
int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void);
void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(int device_id,SSoundDeviceInfo *device_info);
int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00528320(void);
void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00528410(int device_id);
uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00528480(void);
int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_00528490(void);
void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(int enable);
int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0(void);
uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0(void);
int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void);
int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005285b0(void);
int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610(void);
int __cdecl sound_sndmain_cpp_getMixBufferCount_FUN_00528620(void);
void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z);
void sound_sndmain_cpp_audioThreadProc_FUN_00528670(void);
int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005286d0(double latency_seconds);
int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void);
void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void);
void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void);
void __cdecl sound_sndmain_cpp_processAudio_FUN_005288f0(void);
float __cdecl sound_sndmain_cpp_getMaxSwLatency_FUN_00528970(void);
void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(float latency);
void sound_sndmain_cpp_FUN_005289f0(CIniFile *param_1);
void __cdecl sound_sndmain_cpp_writeIni_FUN_00528c80(CIniFile *ini_file);
float sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60(int param_1,float param_2,float param_3);
void sound_sndmain_cpp_getChannelLevels_FUN_005293f0(int param_1,float *param_2,float *param_3);
void sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00529810(void);
void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_005298f0(int paused_mode);
void sound_sndmain_cpp_FUN_00529980(char *param_1);
CSfxOptions * sound_sndmain_cpp_FUN_005299e0(CSfxOptions *param_1);
int sound_sndmain_cpp_FUN_00529a00(void);
CSfxOptions * sound_sndmain_cpp_FUN_00529a20(CSfxOptions *param_1);
undefined4 sound_sndmain_cpp_FUN_00529a40(undefined4 param_1);
undefined4 sound_sndmain_cpp_FUN_00529a50(undefined4 param_1);
void sound_sndmain_cpp_FUN_00529a60(void *param_1);
void __cdecl sound_snddx_cpp_staticInit_FUN_00529a80(void);
char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code);
int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_00529c10(void);
undefined4 sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int param_1);
int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(CDirectSoundDevice *this_ptr);
undefined4 sound_snddx_cpp_CDirectSoundDevice_start_FUN_00529f60(int *param_1);
undefined4 sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(void);
void sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280(void);
undefined4 sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_0052a450(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5);
undefined4 sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(void);
bool sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40(void);
void sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50(undefined4 param_1,double param_2,double param_3,double param_4);
void sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0052aa90(void);
void sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0(undefined4 param_1,double param_2,double param_3,double param_4);
void sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30(undefined4 param_1,double param_2);
int sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 sound_snddx_cpp_FUN_0052ad30(void);
void sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(undefined4 param_1,int param_2);
int sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(undefined4 param_1,int param_2,int param_3,int param_4,CSfxSample *param_5);
void sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
int sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(undefined4 param_1,int param_2);
undefined4 sound_snddx_cpp_isValidSfxHandle_FUN_0052b240(void);
bool sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270(undefined4 param_1,int *param_2,byte param_3);
undefined4 sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0(undefined4 param_1,int param_2);
double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(undefined4 param_1,int param_2);
undefined4 sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0(int *param_1,int param_2);
void sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(undefined4 param_1,int param_2);
int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context);
void sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0052bdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(int param_1,int param_2);
CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(UINT device_id);
void __cdecl sound_sndwav_cpp_staticInit_FUN_0052c120(void);
int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index);
int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(CWavOutDevice *this_ptr);
undefined4 sound_sndwav_cpp_CWavOutDevice_start_FUN_0052c340(int *param_1);
undefined4 sound_sndwav_cpp_CWavOutDevice_reset_FUN_0052c3f0(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(undefined4 *param_1,uint param_2,int param_3,uint *param_4);
undefined4 sound_sndwav_cpp_CWavOutDevice_poll_FUN_0052c640(void);
undefined4 sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0(UINT_PTR param_1,char *param_2);
CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT device_id);
undefined4 sound_sndwav_cpp_CWavOutDevice_hasHardware3D_FUN_0052c7b0(void);
void sound_sndwav_cpp_CWavOutDevice_set3DListenerPos_FUN_0052c7c0(void);
void sound_sndwav_cpp_CWavOutDevice_set3DListenerOrient_FUN_0052c7d0(void);
void sound_sndwav_cpp_CWavOutDevice_set3DListenerVelocity_FUN_0052c7e0(void);
void sound_sndwav_cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_0052c7f0(void);
void sound_sndwav_cpp_CWavOutDevice_commitDeferredSettings_FUN_0052c800(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_allocateSample_FUN_0052c810(void);
void sound_sndwav_cpp_CWavOutDevice_freeSample_FUN_0052c820(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_lockSample_FUN_0052c830(void);
void sound_sndwav_cpp_CWavOutDevice_unlockSample_FUN_0052c840(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_allocateSfx_FUN_0052c850(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_setSfxPos_FUN_0052c860(void);
undefined8 sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0052c870(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_startSfx_FUN_0052c890(void);
void sound_sndwav_cpp_CWavOutDevice_killSfx_FUN_0052c8a0(void);
undefined4 sound_sndwav_cpp_CWavOutDevice_isSfxPlaying_FUN_0052c8b0(void);
void __cdecl core_sound_cpp_staticInit_FUN_0052c8c0(void);
void core_sound_cpp_populateSoundFiles_FUN_0052c900(void);
void core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(char *param_1);
void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void);
void core_sound_cpp_FUN_0052d030(undefined4 param_1,char *param_2,char *param_3);
uint __cdecl core_sound_cpp_playSfxInternal_FUN_0052d120(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags);
void core_sound_cpp_FUN_0052d710(void);
uint core_sound_cpp_FUN_0052d790(void);
void core_sound_cpp_stopTrainSounds_FUN_0052dcc0(void);
CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0052dd00(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_0052dd20(CSound *this_ptr);
void core_sound_cpp_FUN_00527e10(void);
void core_sound_cpp_syncChannel3WithChannel0_FUN_0052dd90(void);
void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_shutdown_FUN_0052df90(CSound *this_ptr);
CDemonSet * core_sound_cpp_FUN_0052dff0(CSound *param_1);
void __cdecl core_sound_cpp_CSound_configure_FUN_0052e850(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_reset_FUN_0052e9c0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(CSound *this_ptr,char *sound_name);
uint __cdecl core_sound_cpp_CSound_playSound_FUN_0052ea40(CSound *this_ptr,void *user_data,char *sound_name);
uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0052ea60(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position);
uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker);
uint core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0(void);
uint __cdecl core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay );
uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay);
int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(CSound *this_ptr,uint sfx_handle);
void __cdecl core_sound_cpp_CSound_killSound_FUN_0052ebb0(CSound *this_ptr,uint sfx_handle);
float core_sound_cpp_FUN_0052ebc0(undefined4 param_1,char *param_2);
undefined4 core_sound_cpp_FUN_0052ec80(void);
undefined * core_sound_cpp_CSound_getSoundModeName_FUN_0052ec90(void);
void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z);
void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_0052ece0(CSound *this_ptr,int index);
undefined4 core_sound_cpp_FUN_0052ed40(undefined4 param_1,undefined4 param_2,int *param_3);
void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time);
undefined4 core_sound_cpp_FUN_0052ee00(undefined4 param_1);
undefined4 core_sound_cpp_FUN_0052ee10(undefined4 param_1);
undefined4 * core_sound_cpp_FUN_0052ee20(void);
undefined4 * core_sound_cpp_FUN_0052ee30(void);
undefined4 * core_sound_cpp_FUN_0052ee40(void);
void core_sound_cpp_FUN_0052ee50(void);
void __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void);
void __cdecl engine_special_cpp_clearZBufferNative_FUN_0052eed4(void);
undefined4 engine_special_cpp_clearScreenRegion_FUN_0052ef37(int param_1);
undefined4 engine_special_cpp_fillDepthRegion_FUN_0052efc2(int param_1,int param_2,uint param_3,uint param_4);
void engine_special_cpp_FUN_0052f031(void);
void engine_special_cpp_FUN_0052f823(void);


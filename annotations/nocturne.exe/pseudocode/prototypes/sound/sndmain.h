#pragma once

// Function prototypes for sound/sndmain.cpp
// Generated from Ghidra function signatures

// Original: sound_sndmain.cpp_staticInit_FUN_00521190
// Address: 00521190
void __cdecl staticInit(void);

// Original: sound_sndmain.cpp_computeComplexFFT_FUN_005211f0
// Address: 005211f0
void __cdecl computeComplexFFT(float *input_real,float *input_imag,float *output_real,float *output_imag,int size);

// Original: sound_sndmain.cpp_computeFFT_FUN_005214e0
// Address: 005214e0
void __cdecl computeFFT(float *input,int size,float *output_real,float *output_imag);

// Original: sound_sndmain.cpp_parseWavFile_FUN_00521830
// Address: 00521830
int __cdecl parseWavFile(_FILE *file_handle,int *file_offset_ptr,CSfxSample *sfx_sample);

// Original: sound_sndmain.cpp_FUN_00521bf0
// Address: 00521bf0
int FUN_00521bf0(void);

// Original: sound_sndmain.cpp_FUN_00521c50
// Address: 00521c50
CSfxSample * FUN_00521c50(void);

// Original: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
// Address: 00521ca0
int __cdecl ensureSoundMemoryAvailable(int requested_bytes);

// Original: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_00521d80
// Address: 00521d80
void __cdecl trimLineAndRemoveComments(char *line);

// Original: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
// Address: 00521e10
void __cdecl CSfxSample::parseConfigFile(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_getSfxSample_FUN_00522480
// Address: 00522480
CSfxSample * __cdecl getSfxSample(char *filename);

// Original: sound_sndmain.cpp_isStreamableFile_FUN_00522970
// Address: 00522970
int __cdecl isStreamableFile(char *filename);

// Original: sound_sndmain.cpp_FUN_005229f0
// Address: 005229f0
CSfxSample * FUN_005229f0(int param_1,char *param_2);

// Original: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
// Address: 00522d10
void __cdecl calculateVirtualSpeakerPositions(void);

// Original: sound_sndmain.cpp_FUN_00522e00
// Address: 00522e00
int FUN_00522e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: sound_sndmain.cpp_calculateDistanceGain_FUN_00522ea0
// Address: 00522ea0
float __cdecl calculateDistanceGain(float distance,float reference_distance,float min_distance,float max_distance);

// Original: sound_sndmain.cpp_allocMixBuffers_FUN_00522f10
// Address: 00522f10
void __cdecl allocMixBuffers(int requested_size,int num_buffers);

// Original: sound_sndmain.cpp_freeMixBuffers_FUN_005230d0
// Address: 005230d0
void __cdecl freeMixBuffers(void);

// Original: sound_sndmain.cpp_FUN_00523170
// Address: 00523170
void FUN_00523170(void);

// Original: sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330
// Address: 00523330
void __cdecl convertMixBufToOutput(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride);

// Original: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
// Address: 005234b0
CSfxSlot * __cdecl getSfxSlotFromHandle(uint sfx_handle,int check_hardware_playback);

// Original: sound_sndmain.cpp_FUN_00523550
// Address: 00523550
void FUN_00523550(void);

// Original: sound_sndmain.cpp_convertDoubleToFixed_FUN_005235b0
// Address: 005235b0
void __cdecl convertDoubleToFixed(double input,int *out_integer_part,int *out_fractional_part);

// Original: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610
// Address: 00523610
double __cdecl mixResampleMonoToStereo(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process);

// Original: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750
// Address: 00523750
double __cdecl mixResampleStereoToStereo(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process);

// Original: sound_sndmain.cpp_CSfxSample_ctor_FUN_00523890
// Address: 00523890
CSfxSample * __cdecl CSfxSample::ctor(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_dtor_FUN_005238f0
// Address: 005238f0
CSfxSample * __cdecl CSfxSample::dtor(CSfxSample *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
// Address: 00523910
int __cdecl CSfxSample::allocateHwSample(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
// Address: 00523a60
void __cdecl CSfxSample::freeMemory(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
// Address: 00523b20
void __cdecl CSfxSample::releaseBufferId(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
// Address: 00523b70
void __cdecl CSfxSample::freeSampleData(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
// Address: 00523ba0
void * __cdecl CSfxSample::lock(CSfxSample *this_ptr,int lock_offset,int lock_length);

// Original: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
// Address: 00523cb0
void __cdecl CSfxSample::releaseSoundBuffer(CSfxSample *sample);

// Original: sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
// Address: 00523d10
void __cdecl CSfxSample::seek(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset);

// Original: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
// Address: 00523ea0
int __cdecl CSfxSample::pollStream(CSfxSample *this_ptr,float time_window,float update_interval);

// Original: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410
// Address: 00524410
void __cdecl CSfxSlot::updateBoundPositionAndVelocity(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0
// Address: 005244b0
void __cdecl CSfxSlot::computeDistancesToSpeakers(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
// Address: 00524520
void __cdecl CSfxSlot::computeChannelDelays(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
// Address: 00524630
void __cdecl CSfxSlot::computeChannelVolumes(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
// Address: 005247a0
void __cdecl CSfxSlot::autoCalcDelayRemaining(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
// Address: 00524830
int __cdecl CSfxSlot::compute(CSfxSlot *this_ptr,float delta_time);

// Original: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
// Address: 00524d10
void __cdecl CSfxSlot::mix(CSfxSlot *this_ptr,SMixBuffer mix_buffer);

// Original: sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
// Address: 00525570
void __cdecl CSfxSlot::kill(CSfxSlot *slot);

// Original: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0
// Address: 005256f0
void __cdecl CSfxSlot::pollHwHandle(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
// Address: 005257e0
int __cdecl CSfxSlot::pollHwPlaybackPos(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
// Address: 00525870
void __cdecl CSfxSlot::updatePlaybackPos(CSfxSlot *this_ptr,double hardware_playback_pos);

// Original: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
// Address: 00525a80
void __cdecl CSfxSlot::seek(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
// Address: 00525b70
CSfxSample * __cdecl CSfxSample::init(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00525bc0
// Address: 00525bc0
double __cdecl CSampleInfo::getSampleDuration(CSampleInfo *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_00525c10
// Address: 00525c10
int __cdecl CSfxSample::computeDataSize(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
// Address: 00525c40
int __cdecl CSfxSample::getBytesPerFrame(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
// Address: 00525c70
double __cdecl CSampleInfo::cvtPlaybackPos(CSampleInfo *this_ptr,double position,uint input_type,uint output_type);

// Original: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
// Address: 00525de0
double __cdecl CSfxSample::normalizePlaybackPos(CSfxSample *this_ptr,double position,uint input_type);

// Original: sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
// Address: 00525eb0
void __cdecl CSfxOptions::reset(CSfxOptions *this_ptr);

// Original: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50
// Address: 00525f50
void __cdecl setNextSfxStaticPosition(double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
// Address: 00525fc0
void __cdecl setNextSfxTrackedFloatPosition(CVector3f *position_source_ptr);

// Original: sound_sndmain.cpp_FUN_00525ff0
// Address: 00525ff0
void FUN_00525ff0(void);

// Original: sound_sndmain.cpp_FUN_00526020
// Address: 00526020
void FUN_00526020(void);

// Original: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
// Address: 00526090
void __cdecl setNextSfxTrackedVelocity1(CVector3f *velocity_source_ptr);

// Original: sound_sndmain.cpp_FUN_005260c0
// Address: 005260c0
void FUN_005260c0(void);

// Original: sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
// Address: 005260f0
void __cdecl setNextSfxVolume(float volume);

// Original: sound_sndmain.cpp_FUN_00526120
// Address: 00526120
void __cdecl FUN_00526120(float base_frequency);

// Original: sound_sndmain.cpp_FUN_00526150
// Address: 00526150
void __cdecl FUN_00526150(int index,void *userdata);

// Original: sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
// Address: 005261b0
void __cdecl setNextSfxChannel(int channel_index);

// Original: sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
// Address: 00526210
void __cdecl setNextSfxDelay(double delay_seconds);

// Original: sound_sndmain.cpp_setNextSfxFlags_FUN_00526240
// Address: 00526240
void __cdecl setNextSfxFlags(uint flags);

// Original: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270
// Address: 00526270
void __cdecl setNextSfxFlagBits(uint flag_mask);

// Original: sound_sndmain.cpp_FUN_005262a0
// Address: 005262a0
void FUN_005262a0(void);

// Original: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
// Address: 005262d0
void __cdecl setNextSfxTriggerTime(double trigger_time,int trigger_id);

// Original: sound_sndmain.cpp_FUN_00526310
// Address: 00526310
void FUN_00526310(void);

// Original: sound_sndmain.cpp_pushSfxOptions_FUN_00526340
// Address: 00526340
void __cdecl pushSfxOptions(void);

// Original: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
// Address: 005263c0
void __cdecl popSfxOptions(void);

// Original: sound_sndmain.cpp_formatSfxOptionsToString_FUN_00526410
// Address: 00526410
void __cdecl formatSfxOptionsToString(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags);

// Original: sound_sndmain.cpp_startSfx_FUN_005265a0
// Address: 005265a0
uint __cdecl startSfx(char *filename);

// Original: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
// Address: 00526c50
int __cdecl isSfxPlaying(uint sfx_handle);

// Original: sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
// Address: 00526ca0
int __cdecl isSoundEnabled(void);

// Original: sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0
// Address: 00526cb0
int __cdecl setSoundEnabled(int enable);

// Original: sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
// Address: 00526cd0
int __cdecl getSfxSampleInfo(uint sfx_handle,CSfxSample *output_buffer);

// Original: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
// Address: 00526d10
double __cdecl getSfxPlaybackPosition(uint sfx_handle,uint output_format);

// Original: sound_sndmain.cpp_FUN_00526dd0
// Address: 00526dd0
undefined4 FUN_00526dd0(void);

// Original: sound_sndmain.cpp_setSfxPosition_FUN_00526e10
// Address: 00526e10
int __cdecl setSfxPosition(uint sfx_handle,double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
// Address: 00526ea0
int __cdecl setSfxTrackedFloatPosition(uint sfx_handle,CVector3f *position_source_ptr);

// Original: sound_sndmain.cpp_FUN_00526f00
// Address: 00526f00
undefined4 FUN_00526f00(void);

// Original: sound_sndmain.cpp_FUN_00526f60
// Address: 00526f60
undefined4 FUN_00526f60(void);

// Original: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
// Address: 00526ff0
int __cdecl setSfxTrackedFloatVelocity(uint sfx_handle,CVector3f *velocity_source_ptr);

// Original: sound_sndmain.cpp_FUN_00527060
// Address: 00527060
undefined4 FUN_00527060(void);

// Original: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
// Address: 005270d0
int __cdecl setSfxVolume(uint sfx_handle,float volume);

// Original: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130
// Address: 00527130
int __cdecl setSfxBaseFrequency(uint sfx_handle,float base_frequency);

// Original: sound_sndmain.cpp_FUN_00527190
// Address: 00527190
undefined4 FUN_00527190(void);

// Original: sound_sndmain.cpp_FUN_00527200
// Address: 00527200
undefined4 FUN_00527200(void);

// Original: sound_sndmain.cpp_killSfx_FUN_00527230
// Address: 00527230
int __cdecl killSfx(uint sfx_handle);

// Original: sound_sndmain.cpp_setSfxFade_FUN_00527260
// Address: 00527260
int __cdecl setSfxFade(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade);

// Original: sound_sndmain.cpp_killAllSfx_FUN_005272b0
// Address: 005272b0
void __cdecl killAllSfx(void);

// Original: sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
// Address: 005272e0
void __cdecl setSfxChannelVol(int channel_index,float volume);

// Original: sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
// Address: 00527380
float __cdecl getSfxChannelVol(int channel_index);

// Original: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005273d0
// Address: 005273d0
void __cdecl setNumberOfSfxChannels(int channel_count);

// Original: sound_sndmain.cpp_enableSfxChannel_FUN_00527410
// Address: 00527410
void __cdecl enableSfxChannel(int channel_index,int enable_state);

// Original: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
// Address: 00527490
int __cdecl isSfxChannelEnabled(int channel_index);

// Original: sound_sndmain.cpp_getFirstActiveSfx_FUN_005274e0
// Address: 005274e0
uint __cdecl getFirstActiveSfx(void);

// Original: sound_sndmain.cpp_FUN_00527520
// Address: 00527520
uint __cdecl FUN_00527520(uint current_sfx_handle);

// Original: sound_sndmain.cpp_FUN_00527570
// Address: 00527570
void FUN_00527570(char *param_1);

// Original: sound_sndmain.cpp_countActiveSfx_FUN_005275e0
// Address: 005275e0
int __cdecl countActiveSfx(void);

// Original: sound_sndmain.cpp_set3DListenerPos_FUN_00527610
// Address: 00527610
void __cdecl set3DListenerPos(double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
// Address: 00527690
void __cdecl set3DListenerOrient(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z);

// Original: sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
// Address: 005277b0
void __cdecl set3DListenerVelocity(double x_velocity,double y_velocity,double z_velocity);

// Original: sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
// Address: 00527880
int __cdecl isWithinListenerRadius(double pos_x,double pos_y,double pos_z,double radius);

// Original: sound_sndmain.cpp_killSfxByName_FUN_005278e0
// Address: 005278e0
void __cdecl killSfxByName(char *sample_name);

// Original: sound_sndmain.cpp_setMemoryBudget_FUN_00527930
// Address: 00527930
void __cdecl setMemoryBudget(int min_bytes,int max_bytes);

// Original: sound_sndmain.cpp_FUN_00527950
// Address: 00527950
void FUN_00527950(char *param_1,int param_2);

// Original: sound_sndmain.cpp_isSampleLoaded_FUN_005279b0
// Address: 005279b0
int __cdecl isSampleLoaded(char *sample_name);

// Original: sound_sndmain.cpp_getSampleInfo_FUN_005279e0
// Address: 005279e0
int __cdecl getSampleInfo(CSfxSample *out_sample);

// Original: sound_sndmain.cpp_freeAllSamples_FUN_00527c30
// Address: 00527c30
void __cdecl freeAllSamples(void);

// Original: sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70
// Address: 00527c70
void __cdecl getSoundMemoryStats(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory);

// Original: sound_sndmain.cpp_FUN_00527d80
// Address: 00527d80
void __cdecl FUN_00527d80(void);

// Original: sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10
// Address: 00527e10
void __cdecl shutdownSoundSystem(CSound *this_ptr);

// Original: sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
// Address: 00527e40
int __cdecl enableSoundSystem(void);

// Original: sound_sndmain.cpp_resetSoundDevice_FUN_00528080
// Address: 00528080
int __cdecl resetSoundDevice(void);

// Original: sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
// Address: 005280c0
int __cdecl setSoundOutputMode(int bits_per_sample,int channels,int sample_rate);

// Original: sound_sndmain.cpp_getAudioFormat_FUN_00528160
// Address: 00528160
void __cdecl getAudioFormat(int *bits_per_sample,int *channels,int *sample_rate);

// Original: sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0
// Address: 005281a0
int __cdecl getAudioBitDepth(void);

// Original: sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
// Address: 005281b0
int __cdecl getAudioSampleRate(void);

// Original: sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0
// Address: 005281c0
int __cdecl getAudioChannelCount(void);

// Original: sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0
// Address: 005281d0
void __cdecl setAudioBitDepth(int bit_depth);

// Original: sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0
// Address: 005281f0
void __cdecl setAudioChannelCount(int channel_count);

// Original: sound_sndmain.cpp_setAudioSampleRate_FUN_00528210
// Address: 00528210
void __cdecl setAudioSampleRate(int sample_rate);

// Original: sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
// Address: 00528230
int __cdecl getSoundDeviceCount(void);

// Original: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
// Address: 005282c0
void __cdecl getSoundDeviceInfo(int device_id,SSoundDeviceInfo *device_info);

// Original: sound_sndmain.cpp_findBestSoundDevice_FUN_00528320
// Address: 00528320
int __cdecl findBestSoundDevice(void);

// Original: sound_sndmain.cpp_selectSoundDevice_FUN_00528410
// Address: 00528410
void __cdecl selectSoundDevice(int device_id);

// Original: sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
// Address: 00528480
uint __cdecl isSoundSystemActive(void);

// Original: sound_sndmain.cpp_isSoundBusy_FUN_00528490
// Address: 00528490
int __cdecl isSoundBusy(void);

// Original: sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0
// Address: 005284a0
void __cdecl enableHwSoundMixing(int enable);

// Original: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0
// Address: 005284e0
int __cdecl isHardwareMixingEnabled(void);

// Original: sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
// Address: 005284f0
uint __cdecl hasHardware3DSound(void);

// Original: sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
// Address: 00528500
int __cdecl initializeSoundDevice(void);

// Original: sound_sndmain.cpp_closeSoundDevice_FUN_005285b0
// Address: 005285b0
int __cdecl closeSoundDevice(void);

// Original: sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610
// Address: 00528610
int __cdecl getCurrentSoundDevice(void);

// Original: sound_sndmain.cpp_getMixBufferCount_FUN_00528620
// Address: 00528620
int __cdecl getMixBufferCount(void);

// Original: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
void __cdecl set3DListenerOrientRight(float orient_right_x,float orient_right_y,float orient_right_z);

// Original: sound_sndmain.cpp_audioThreadProc_FUN_00528670
// Address: 00528670
DWORD __stdcall audioThreadProc(LPVOID lpThreadParam);

// Original: sound_sndmain.cpp_startSoundThread_FUN_005286d0
// Address: 005286d0
int __cdecl startSoundThread(double latency_seconds);

// Original: sound_sndmain.cpp_killSoundThread_FUN_00528780
// Address: 00528780
int __cdecl killSoundThread(void);

// Original: sound_sndmain.cpp_lockSound_FUN_00528800
// Address: 00528800
void __cdecl lockSound(void);

// Original: sound_sndmain.cpp_unlockSound_FUN_00528890
// Address: 00528890
void __cdecl unlockSound(void);

// Original: sound_sndmain.cpp_processAudio_FUN_005288f0
// Address: 005288f0
void __cdecl processAudio(void);

// Original: sound_sndmain.cpp_getMaxSwLatency_FUN_00528970
// Address: 00528970
float __cdecl getMaxSwLatency(void);

// Original: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980
// Address: 00528980
void __cdecl setMaxSwSoundLatency(float latency);

// Original: sound_sndmain.cpp_readIni_FUN_005289f0
// Address: 005289f0
void __cdecl readIni(CIniFile *ini_file);

// Original: sound_sndmain.cpp_writeIni_FUN_00528c80
// Address: 00528c80
void __cdecl writeIni(CIniFile *ini_file);

// Original: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
// Address: 00528e60
float __cdecl analyzeFrequencyBand(int channel,float freq_start_hz,float freq_end_hz);

// Original: sound_sndmain.cpp_getChannelLevels_FUN_005293f0
// Address: 005293f0
void __cdecl getChannelLevels(int channel,float *out_peak,float *out_average);

// Original: sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
// Address: 005294f0
void __cdecl pollAndMixSfx(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align);

// Original: sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
// Address: 00529810
void __cdecl pollAllSfxSlots(void);

// Original: sound_sndmain.cpp_pollAllStreams_FUN_005298f0
// Address: 005298f0
void __cdecl pollAllStreams(int paused_mode);

// Original: sound_sndmain.cpp_FUN_00529980
// Address: 00529980
void FUN_00529980(char *param_1);

// Original: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005299e0
// Address: 005299e0
CSfxOptions * __cdecl CSfxOptions::ctor(CSfxOptions *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_FUN_00529a00
// Address: 00529a00
int __cdecl CSfxSample(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_ctor_FUN_00529a20
// Address: 00529a20
CSfxSlot * __cdecl CSfxSlot::ctor(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxOptions_dtor_FUN_00529a40
// Address: 00529a40
CSfxOptions * __cdecl CSfxOptions::dtor(CSfxOptions *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxOptions_dtor_FUN_00529a50
// Address: 00529a50
CSfxOptions * __cdecl CSfxOptions::dtor(CSfxOptions *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxSample_arrdtor_FUN_00529a60
// Address: 00529a60
CSfxSample * __cdecl CSfxSample::arrdtor(CSfxSample *this_ptr,uint flags);

#pragma once

// Function prototypes for sound/sndmain.cpp
// Generated from Ghidra function signatures

// Original: sound_sndmain.cpp_staticInit_FUN_005a3940
// Address: 005a3940
void __cdecl staticInit(void);

// Original: sound_sndmain.cpp_computeComplexFFT_FUN_005a39a0
// Address: 005a39a0
void __cdecl computeComplexFFT(float *input_real,float *input_imag,float *output_real,float *output_imag,int size);

// Original: sound_sndmain.cpp_computeFFT_FUN_005a3c90
// Address: 005a3c90
void __cdecl computeFFT(float *input,int size,float *output_real,float *output_imag);

// Original: sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
// Address: 005a3fe0
int __cdecl parseWavFile(_FILE *file_handle,long *file_offset_ptr,CSfxSample *sfx_sample);

// Original: sound_sndmain.cpp_getActiveSfxCount_FUN_005a43a0
// Address: 005a43a0
int __cdecl getActiveSfxCount(void);

// Original: sound_sndmain.cpp_findFreeSfxSample_FUN_005a4400
// Address: 005a4400
CSfxSample * __cdecl findFreeSfxSample(void);

// Original: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
// Address: 005a4450
int __cdecl ensureSoundMemoryAvailable(int requested_bytes);

// Original: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530
// Address: 005a4530
void __cdecl trimLineAndRemoveComments(char *line);

// Original: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
// Address: 005a45c0
void __cdecl CSfxSample::parseConfigFile(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_getSfxSample_FUN_005a4c80
// Address: 005a4c80
CSfxSample * __cdecl getSfxSample(char *filename);

// Original: sound_sndmain.cpp_isStreamableFile_FUN_005a5180
// Address: 005a5180
int __cdecl isStreamableFile(char *filename,char *filepath);

// Original: sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200
// Address: 005a5200
CSfxSample * __cdecl loadStreamingSoundFile(int slot_index,char *filename);

// Original: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
// Address: 005a5530
void __cdecl calculateVirtualSpeakerPositions(void);

// Original: sound_sndmain.cpp_allocateHwSample_FUN_005a5620
// Address: 005a5620
int __cdecl allocateHwSample(int bits_per_sample,int channel_count,int sample_rate,int sample_count);

// Original: sound_sndmain.cpp_calculateDistanceGain_FUN_005a56c0
// Address: 005a56c0
float __cdecl calculateDistanceGain(float distance,float reference_distance,float min_distance,float max_distance);

// Original: sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
// Address: 005a5730
void __cdecl allocMixBuffers(int requested_size,int num_buffers);

// Original: sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
// Address: 005a5900
void __cdecl freeMixBuffers(void);

// Original: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
// Address: 005a59c0
void __cdecl nextMixingBuffer(void);

// Original: sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
// Address: 005a5b80
void __cdecl convertMixBufToOutput(float *input_samples,void *output_buffer,int bits_per_sample,int num_samples,int output_stride);

// Original: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
// Address: 005a5d00
CSfxSlot * __cdecl getSfxSlotFromHandle(uint sfx_handle,int check_hardware_playback);

// Original: sound_sndmain.cpp_generateSilence_FUN_005a5db0
// Address: 005a5db0
void __cdecl generateSilence(void *buffer,uint bits_per_sample,uint num_samples);

// Original: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
// Address: 005a5e10
void __cdecl convertDoubleToFixed(double input,int *out_integer_part,int *out_fractional_part);

// Original: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_005a5e70
// Address: 005a5e70
double __cdecl mixResampleMonoToStereo(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process);

// Original: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_005a5fb0
// Address: 005a5fb0
double __cdecl mixResampleStereoToStereo(short *sample_data,SStereoBuffers *channel_buffers,SStereoGains *channel_gains,double resample_position,double resample_delta,int samples_to_process);

// Original: sound_sndmain.cpp_CSfxSample_ctor_FUN_005a60f0
// Address: 005a60f0
CSfxSample * __cdecl CSfxSample::ctor(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_dtor_FUN_005a6150
// Address: 005a6150
CSfxSample * __cdecl CSfxSample::dtor(CSfxSample *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
// Address: 005a6170
int __cdecl CSfxSample::allocateHwSample(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
// Address: 005a62c0
void __cdecl CSfxSample::freeMemory(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
// Address: 005a63b0
void __cdecl CSfxSample::releaseBufferId(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
// Address: 005a6400
void __cdecl CSfxSample::freeSampleData(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
// Address: 005a6430
void * __cdecl CSfxSample::lock(CSfxSample *this_ptr,int lock_offset,int lock_length);

// Original: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
// Address: 005a6540
void __cdecl CSfxSample::releaseSoundBuffer(CSfxSample *sample);

// Original: sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
// Address: 005a65a0
void __cdecl CSfxSample::seek(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset);

// Original: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
// Address: 005a6730
int __cdecl CSfxSample::pollStream(CSfxSample *this_ptr,float time_window,float update_interval);

// Original: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0
// Address: 005a6ce0
void __cdecl CSfxSlot::updateBoundPositionAndVelocity(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
// Address: 005a6d80
int __cdecl CSfxSlot::computeDistancesToSpeakers(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
void __cdecl CSfxSlot::computeChannelDelays(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// Address: 005a6f00
float __cdecl CSfxSlot::computeChannelVolumes(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005a7070
// Address: 005a7070
void __cdecl CSfxSlot::autoCalcDelayRemaining(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
// Address: 005a7100
int __cdecl CSfxSlot::compute(CSfxSlot *this_ptr,float delta_time);

// Original: sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
// Address: 005a75e0
void __cdecl CSfxSlot::mix(CSfxSlot *this_ptr,SMixBuffer mix_buffer);

// Original: sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
// Address: 005a7e60
void __cdecl CSfxSlot::kill(CSfxSlot *slot);

// Original: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
// Address: 005a7fe0
void __cdecl CSfxSlot::pollHwHandle(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
// Address: 005a80e0
int __cdecl CSfxSlot::pollHwPlaybackPos(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
// Address: 005a8170
void __cdecl CSfxSlot::updatePlaybackPos(CSfxSlot *this_ptr,double hardware_playback_pos);

// Original: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
// Address: 005a8390
void __cdecl CSfxSlot::seek(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_init_FUN_005a8480
// Address: 005a8480
CSfxSample * __cdecl CSfxSample::init(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0
// Address: 005a84d0
double __cdecl CSampleInfo::getSampleDuration(CSampleInfo *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_005a8520
// Address: 005a8520
int __cdecl CSfxSample::computeDataSize(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
// Address: 005a8550
int __cdecl CSfxSample::getBytesPerFrame(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
// Address: 005a8580
double __cdecl CSampleInfo::cvtPlaybackPos(CSampleInfo *this_ptr,double position,uint input_type,uint output_type);

// Original: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
// Address: 005a86f0
double __cdecl CSampleInfo::normalizePlaybackPos(CSampleInfo *this_ptr,double position,uint input_type,uint output_type);

// Original: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
// Address: 005a87d0
int __cdecl CSfxSample::getLoopMode(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810
// Address: 005a8810
int __cdecl CSfxSample::hasAdvancedLoopMode(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
// Address: 005a8830
void __cdecl CSfxOptions::reset(CSfxOptions *this_ptr);

// Original: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
// Address: 005a88e0
void __cdecl setNextSfxStaticPosition(double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
// Address: 005a8940
void __cdecl setNextSfxTrackedFloatPosition(CVector3f *position_source_ptr);

// Original: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
// Address: 005a8970
void __cdecl setNextSfxTrackedDoublePosition(CVector3d *position_source_ptr);

// Original: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0
// Address: 005a89a0
void __cdecl setNextSfxStaticVelocity(double vel_x,double vel_y,double vel_z);

// Original: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
// Address: 005a8a00
void __cdecl setNextSfxTrackedVelocity(CVector3f *velocity_source_ptr);

// Original: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30
// Address: 005a8a30
void __cdecl setNextSfxTrackedVelocity(CVector3d *velocity_source_ptr);

// Original: sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
// Address: 005a8a60
void __cdecl setNextSfxVolume(float volume);

// Original: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
// Address: 005a8a80
void __cdecl setNextSfxBaseFrequency(float base_frequency);

// Original: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
// Address: 005a8aa0
void __cdecl setNextSfxUserData(int index,void *userdata);

// Original: sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
// Address: 005a8af0
void __cdecl setNextSfxChannel(int channel_index);

// Original: sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
// Address: 005a8b40
void __cdecl setNextSfxDelay(double delay_seconds);

// Original: sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
// Address: 005a8b70
void __cdecl setNextSfxFlags(uint flags);

// Original: sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
// Address: 005a8b90
void __cdecl setNextSfxFlagBits(uint flag_mask);

// Original: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
// Address: 005a8bb0
void __cdecl clearNextSfxFlagBits(uint flag_mask);

// Original: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
// Address: 005a8be0
int __cdecl setNextSfxTriggerTime(double trigger_time,int trigger_id);

// Original: sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10
// Address: 005a8c10
void __cdecl resetCurrentSfxOptions(void);

// Original: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
// Address: 005a8c30
void __cdecl pushSfxOptions(void);

// Original: sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
// Address: 005a8cb0
void __cdecl popSfxOptions(void);

// Original: sound_sndmain.cpp_returnZero_FUN_005a8cf0
// Address: 005a8cf0
int __cdecl returnZero(void);

// Original: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
// Address: 005a8d00
void __cdecl formatSfxOptionsToString(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags);

// Original: sound_sndmain.cpp_startSfx_FUN_005a8e90
// Address: 005a8e90
uint __cdecl startSfx(char *filename);

// Original: sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550
// Address: 005a9550
uint __cdecl startNonPositionalSfx(char *filename);

// Original: sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580
// Address: 005a9580
uint __cdecl startSfxAtStaticPosition(char *filename,double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0
// Address: 005a95e0
uint __cdecl startSfxTrackedFloatPosition(char *filename,CVector3f *position_source_ptr);

// Original: sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620
// Address: 005a9620
uint __cdecl startSfxTrackedDoublePosition(char *filename,CVector3d *position_source_ptr);

// Original: sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
// Address: 005a9660
int __cdecl isSfxPlaying(uint sfx_handle);

// Original: sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
// Address: 005a96b0
int __cdecl isSoundEnabled(void);

// Original: sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
// Address: 005a96c0
int __cdecl setSoundEnabled(int enable);

// Original: sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
// Address: 005a96e0
int __cdecl getSfxSampleInfo(uint sfx_handle,CSfxSample *output_buffer);

// Original: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
// Address: 005a9720
double __cdecl getSfxPlaybackPosition(uint sfx_handle,uint output_format);

// Original: sound_sndmain.cpp_getSfxOptions_FUN_005a97e0
// Address: 005a97e0
int __cdecl getSfxOptions(uint sfx_handle,CSfxOptions *output_options);

// Original: sound_sndmain.cpp_setSfxPosition_FUN_005a9820
// Address: 005a9820
int __cdecl setSfxPosition(uint sfx_handle,double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0
// Address: 005a98b0
int __cdecl setSfxTrackedFloatPosition(uint sfx_handle,CVector3f *position_source_ptr);

// Original: sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910
// Address: 005a9910
int __cdecl setSfxTrackedDoublePosition(uint sfx_handle,CVector3d *position_source_ptr);

// Original: sound_sndmain.cpp_setSfxVelocity_FUN_005a9970
// Address: 005a9970
int __cdecl setSfxVelocity(uint sfx_handle,double vel_x,double vel_y,double vel_z);

// Original: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
// Address: 005a9a00
int __cdecl setSfxTrackedFloatVelocity(uint sfx_handle,CVector3f *velocity_source_ptr);

// Original: sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70
// Address: 005a9a70
int __cdecl setSfxTrackedDoubleVelocity(uint sfx_handle,CVector3d *velocity_source_ptr);

// Original: sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
// Address: 005a9ae0
int __cdecl setSfxVolume(uint sfx_handle,float volume);

// Original: sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
// Address: 005a9b40
int __cdecl setSfxBaseFrequency(uint sfx_handle,float base_frequency);

// Original: sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0
// Address: 005a9ba0
int __cdecl setSfxUserData(uint sfx_handle,int index,void *value);

// Original: sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10
// Address: 005a9c10
int __cdecl setSfxIsActive(uint sfx_handle,int active);

// Original: sound_sndmain.cpp_killSfx_FUN_005a9c40
// Address: 005a9c40
int __cdecl killSfx(uint sfx_handle);

// Original: sound_sndmain.cpp_setSfxFade_FUN_005a9c70
// Address: 005a9c70
int __cdecl setSfxFade(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade);

// Original: sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
// Address: 005a9cc0
void __cdecl killAllSfx(void);

// Original: sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
// Address: 005a9cf0
void __cdecl setSfxChannelVol(int channel_index,float volume);

// Original: sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
// Address: 005a9d90
float __cdecl getSfxChannelVol(int channel_index);

// Original: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
// Address: 005a9de0
void __cdecl setNumberOfSfxChannels(int channel_count);

// Original: sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
// Address: 005a9e20
void __cdecl enableSfxChannel(int channel_index,int enable_state);

// Original: sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
// Address: 005a9ea0
int __cdecl isSfxChannelEnabled(int channel_index);

// Original: sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0
// Address: 005a9ef0
uint __cdecl getFirstActiveSfx(void);

// Original: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
// Address: 005a9f30
uint __cdecl getNextActiveSfx(uint current_sfx_handle);

// Original: sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80
// Address: 005a9f80
void __cdecl formatActiveSounds(char *output_buffer);

// Original: sound_sndmain.cpp_countActiveSfx_FUN_005a9ff0
// Address: 005a9ff0
int __cdecl countActiveSfx(void);

// Original: sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
// Address: 005aa020
void __cdecl set3DListenerPos(double pos_x,double pos_y,double pos_z);

// Original: sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
// Address: 005aa0a0
void __cdecl set3DListenerOrient(double front_x,double front_y,double front_z,double up_x,double up_y,double up_z,double right_x,double right_y,double right_z);

// Original: sound_sndmain.cpp_set3DListenerVelocity_FUN_005aa1c0
// Address: 005aa1c0
void __cdecl set3DListenerVelocity(double x_velocity,double y_velocity,double z_velocity);

// Original: sound_sndmain.cpp_set3DListenerDistanceFactor_FUN_005aa240
// Address: 005aa240
void __cdecl set3DListenerDistanceFactor(double distance_in_feet);

// Original: sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
// Address: 005aa290
int __cdecl isWithinListenerRadius(double pos_x,double pos_y,double pos_z,double radius);

// Original: sound_sndmain.cpp_killSfxByName_FUN_005aa2f0
// Address: 005aa2f0
void __cdecl killSfxByName(char *sample_name);

// Original: sound_sndmain.cpp_setMemoryBudget_FUN_005aa340
// Address: 005aa340
void __cdecl setMemoryBudget(int min_bytes,int max_bytes);

// Original: sound_sndmain.cpp_freeSampleByName_FUN_005aa360
// Address: 005aa360
void __cdecl freeSampleByName(char *sample_name,int kill_active_slots);

// Original: sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0
// Address: 005aa3c0
int __cdecl isSampleLoaded(char *sample_name);

// Original: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
// Address: 005aa3f0
int __cdecl getSampleInfo(CSfxSample *out_sample);

// Original: sound_sndmain.cpp_freeAllSamples_FUN_005aa660
// Address: 005aa660
void __cdecl freeAllSamples(void);

// Original: sound_sndmain.cpp_getSoundMemoryStats_FUN_005aa6a0
// Address: 005aa6a0
void __cdecl getSoundMemoryStats(int *out_referenced_count,int *out_total_bytes_referenced,int *out_unreferenced_count,int *out_total_bytes_unreferenced,int *out_free_slots,int *out_available_memory);

// Original: sound_sndmain.cpp_convert8BitAudioSignedness_FUN_005aa7b0
// Address: 005aa7b0
void __cdecl convert8BitAudioSignedness(byte *buffer,int num_bytes);

// Original: sound_sndmain.cpp_convert16BitAudioSignedness_FUN_005aa7d0
// Address: 005aa7d0
void __cdecl convert16BitAudioSignedness(short *buffer,int num_samples);

// Original: sound_sndmain.cpp_resampleAndConvertAudio_FUN_005aa7f0
// Address: 005aa7f0
void __cdecl resampleAndConvertAudio(int src_bit_depth,int src_channels,int src_sample_rate,int src_signed,short *src_buffer,int dst_bit_depth,int dst_channels,int dst_sample_rate,int dst_signed,short *dst_buffer,int num_output_samples);

// Original: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00
// Address: 005aae00
void __cdecl resetSoundSystemDefaults(void);

// Original: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
// Address: 005aaeb0
void __cdecl shutdownSoundSystem(void);

// Original: sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
// Address: 005aaef0
int __cdecl enableSoundSystem(void);

// Original: sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
// Address: 005ab130
int __cdecl resetSoundDevice(void);

// Original: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
// Address: 005ab170
int __cdecl setSoundOutputMode(int bits_per_sample,int channels,int sample_rate);

// Original: sound_sndmain.cpp_getAudioFormat_FUN_005ab210
// Address: 005ab210
void __cdecl getAudioFormat(int *bits_per_sample,int *channels,int *sample_rate);

// Original: sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
// Address: 005ab250
int __cdecl getAudioBitDepth(void);

// Original: sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
// Address: 005ab260
int __cdecl getAudioSampleRate(void);

// Original: sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
// Address: 005ab270
int __cdecl getAudioChannelCount(void);

// Original: sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280
// Address: 005ab280
void __cdecl setAudioBitDepth(int bit_depth);

// Original: sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0
// Address: 005ab2a0
void __cdecl setAudioChannelCount(int channel_count);

// Original: sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0
// Address: 005ab2c0
void __cdecl setAudioSampleRate(int sample_rate);

// Original: sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
// Address: 005ab2e0
int __cdecl getSoundDeviceCount(void);

// Original: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
// Address: 005ab370
void __cdecl getSoundDeviceInfo(int device_id,SSoundDeviceInfo *device_info);

// Original: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
// Address: 005ab3d0
int __cdecl findBestSoundDevice(void);

// Original: sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
// Address: 005ab4c0
void __cdecl selectSoundDevice(int device_id);

// Original: sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
// Address: 005ab530
uint __cdecl isSoundSystemActive(void);

// Original: sound_sndmain.cpp_isSoundBusy_FUN_005ab540
// Address: 005ab540
int __cdecl isSoundBusy(void);

// Original: sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
// Address: 005ab550
void __cdecl enableHwSoundMixing(int enable);

// Original: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
// Address: 005ab590
int __cdecl isHardwareMixingEnabled(void);

// Original: sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
// Address: 005ab5a0
uint __cdecl hasHardware3DSound(void);

// Original: sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
// Address: 005ab5b0
int __cdecl initializeSoundDevice(void);

// Original: sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
// Address: 005ab660
int __cdecl closeSoundDevice(void);

// Original: sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
// Address: 005ab6c0
int __cdecl getCurrentSoundDevice(void);

// Original: sound_sndmain.cpp_getMixBufferCount_FUN_005ab6d0
// Address: 005ab6d0
int __cdecl getMixBufferCount(void);

// Original: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
// Address: 005ab6e0
void __cdecl set3DListenerOrientRight(float orient_right_x,float orient_right_y,float orient_right_z);

// Original: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
// Address: 005ab720
int __cdecl getRecordingDeviceCount(void);

// Original: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
// Address: 005ab780
void __cdecl getRecordingDeviceInfo(int index,SRecordingDeviceInfo *device_info);

// Original: sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
// Address: 005ab7e0
int __cdecl findBestRecordingDevice(void);

// Original: sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
// Address: 005ab860
void __cdecl selectRecordingDevice(int device_id);

// Original: sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0
// Address: 005ab8d0
int __cdecl initializeRecordingDevice(void);

// Original: sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
// Address: 005ab930
int __cdecl releaseRecordingDevice(void);

// Original: sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
// Address: 005ab970
int __cdecl isRecordingSystemActive(void);

// Original: sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
// Address: 005ab980
int __cdecl isRecordingStarted(void);

// Original: sound_sndmain.cpp_getCurrentRecordingDevice_FUN_005ab990
// Address: 005ab990
int __cdecl getCurrentRecordingDevice(void);

// Original: sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
// Address: 005ab9a0
int __cdecl setRecordingFormat(int bits_per_sample,int channels,int sample_rate,int signed_samples);

// Original: sound_sndmain.cpp_getRecordingFormat_FUN_005aba40
// Address: 005aba40
void __cdecl getRecordingFormat(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed);

// Original: sound_sndmain.cpp_startRecording_FUN_005aba90
// Address: 005aba90
int __cdecl startRecording(void);

// Original: sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10
// Address: 005abb10
HRESULT __cdecl getRecordingDeviceCaps(LPDSCCAPS pDSCCaps);

// Original: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
// Address: 005abb60
int __cdecl stopRecordingDevice(void);

// Original: sound_sndmain.cpp_audioThreadProc_FUN_005abba0
// Address: 005abba0
DWORD __stdcall audioThreadProc(LPVOID lpThreadParam);

// Original: sound_sndmain.cpp_startSoundThread_FUN_005abc00
// Address: 005abc00
HANDLE __cdecl startSoundThread(double latency_seconds);

// Original: sound_sndmain.cpp_killSoundThread_FUN_005abcb0
// Address: 005abcb0
int __cdecl killSoundThread(void);

// Original: sound_sndmain.cpp_lockSound_FUN_005abd30
// Address: 005abd30
void __cdecl lockSound(void);

// Original: sound_sndmain.cpp_unlockSound_FUN_005abdc0
// Address: 005abdc0
void __cdecl unlockSound(void);

// Original: sound_sndmain.cpp_processAudio_FUN_005abe20
// Address: 005abe20
void __cdecl processAudio(void);

// Original: sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
// Address: 005abea0
float __cdecl getMaxSwLatency(void);

// Original: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
// Address: 005abeb0
void __cdecl setMaxSwSoundLatency(float latency);

// Original: sound_sndmain.cpp_readIni_FUN_005abf20
// Address: 005abf20
void __cdecl readIni(CIniFile *ini_file);

// Original: sound_sndmain.cpp_writeIni_FUN_005ac220
// Address: 005ac220
void __cdecl writeIni(CIniFile *ini_file);

// Original: sound_sndmain.cpp_analyzeFrequencyBand_FUN_005ac400
// Address: 005ac400
int __cdecl analyzeFrequencyBand(int channel,float freq_start_hz,float freq_end_hz);

// Original: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
// Address: 005ac990
void __cdecl getChannelLevels(int channel,float *out_peak,float *out_average);

// Original: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
void __cdecl pollAndMixSfx(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align);

// Original: sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0
// Address: 005acdb0
void __cdecl pollAllSfxSlots(void);

// Original: sound_sndmain.cpp_pollAllStreams_FUN_005ace90
// Address: 005ace90
void __cdecl pollAllStreams(int paused_mode);

// Original: sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
// Address: 005acf20
void __cdecl convertMp3ToSfxMetadata(char *mp3_filename);

// Original: sound_sndmain.cpp_testSoundFile_FUN_005ad3b0
// Address: 005ad3b0
char * __cdecl testSoundFile(char *sample_name);

// Original: sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0
// Address: 005ad5c0
void __cdecl testSoundFiles(void);

// Original: sound_sndmain.cpp_logSoundError_FUN_005adba0
// Address: 005adba0
void __cdecl logSoundError(char *format,...);

// Original: sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70
// Address: 005add70
CSfxOptions * __cdecl CSfxOptions::ctor(CSfxOptions *this_ptr);

// Original: sound_sndmain.cpp_CSfxSample_getStreamingBufferSizeBytes_FUN_005add90
// Address: 005add90
int __cdecl CSfxSample::getStreamingBufferSizeBytes(CSfxSample *this_ptr);

// Original: sound_sndmain.cpp_return16_FUN_005addb0
// Address: 005addb0
int __cdecl return16(void);

// Original: sound_sndmain.cpp_CSampleInfo_getStreamingFlag_FUN_005addc0
// Address: 005addc0
int __cdecl CSampleInfo::getStreamingFlag(CSampleInfo *this_ptr);

// Original: sound_sndmain.cpp_CSampleInfo_getBitDepth_FUN_005addd0
// Address: 005addd0
int __cdecl CSampleInfo::getBitDepth(CSampleInfo *this_ptr);

// Original: sound_sndmain.cpp_doNothing_FUN_005adde0
// Address: 005adde0
void __cdecl doNothing(void);

// Original: sound_sndmain.cpp_doNothing_FUN_005addf0
// Address: 005addf0
void __cdecl doNothing(void);

// Original: sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00
// Address: 005ade00
CSfxSlot * __cdecl CSfxSlot::ctor(CSfxSlot *this_ptr);

// Original: sound_sndmain.cpp_CSfxSlot_dtor_FUN_005ade20
// Address: 005ade20
CSfxSlot * __cdecl CSfxSlot::dtor(CSfxSlot *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxOptions_dtor_FUN_005ade30
// Address: 005ade30
CSfxOptions * __cdecl CSfxOptions::dtor(CSfxOptions *this_ptr,uint flags);

// Original: sound_sndmain.cpp_CSfxSample_arrdtor_FUN_005ade40
// Address: 005ade40
CSfxSample * __cdecl CSfxSample::arrdtor(CSfxSample *objs,uint flags);

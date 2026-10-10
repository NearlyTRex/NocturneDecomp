#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

void staticInit();
void setNextSfxStaticPosition(double pos_x, double pos_y, double pos_z);
void setNextSfxTrackedFloatPosition(common::CVector3f *position_source_ptr);
void setNextSfxTrackedVelocity1(common::CVector3f *velocity_source_ptr);
void setNextSfxVolume(float volume);
void setNextSfxBaseFrequency(float base_frequency);
void setNextSfxUserData(int index, void *userdata);
void setNextSfxChannel(int channel_index);
void setNextSfxDelay(double delay_seconds);
void setNextSfxFlags(std::uint32_t flags);
void setNextSfxFlagBits(std::uint32_t flag_mask);
void setNextSfxTriggerTime(double trigger_time, int trigger_id);
void pushSfxOptions();
void popSfxOptions();
std::uint32_t startSfx(char *filename);
int isSfxPlaying(std::uint32_t sfx_handle);
int isSoundMuted();
int setSoundMuted(int muted);
int getSfxSampleInfo(std::uint32_t sfx_handle, CSfxSample *output_buffer);
double getSfxPlaybackPosition(std::uint32_t sfx_handle, std::uint32_t output_format);
int setSfxPosition(std::uint32_t sfx_handle, double pos_x, double pos_y, double pos_z);
int setSfxTrackedFloatPosition(std::uint32_t sfx_handle, common::CVector3f *position_source_ptr);
int setSfxTrackedFloatVelocity(std::uint32_t sfx_handle, common::CVector3f *velocity_source_ptr);
int setSfxVolume(std::uint32_t sfx_handle, float volume);
int setSfxBaseFrequency(std::uint32_t sfx_handle, float base_frequency);
int killSfx(std::uint32_t sfx_handle);
int setSfxFade(std::uint32_t sfx_handle, float target_volume, float fade_duration,
               int stop_after_fade);
void setSfxChannelVol(int channel_index, float volume);
float getSfxChannelVol(int channel_index);
void setNumberOfSfxChannels(int channel_count);
void enableSfxChannel(int channel_index, int enable_state);
int isSfxChannelEnabled(int channel_index);
std::uint32_t getFirstActiveSfx();
std::uint32_t getNextActiveSfx(std::uint32_t current_sfx_handle);
int countActiveSfx();
void set3DListenerPos(double pos_x, double pos_y, double pos_z);
void set3DListenerOrient(double front_x, double front_y, double front_z, double up_x, double up_y,
                         double up_z, double right_x, double right_y, double right_z);
void set3DListenerVelocity(double x_velocity, double y_velocity, double z_velocity);
int isWithinListenerRadius(double pos_x, double pos_y, double pos_z, double radius);
int getSampleInfo(CSfxSample *out_sample);
void freeAllSamples();
void getSoundMemoryStats(int *out_referenced_count, int *out_total_bytes_referenced,
                         int *out_unreferenced_count, int *out_total_bytes_unreferenced,
                         int *out_free_slots, int *out_available_memory);
void resetSoundSystemDefaults();
void shutdownSoundSystem();
int enableSoundSystem();
int resetSoundDevice();
int setSoundOutputMode(int bits_per_sample, int channels, int sample_rate);
int getAudioBitDepth();
int getAudioSampleRate();
int getAudioChannelCount();
void setAudioBitDepth(int bit_depth);
void setAudioChannelCount(int channel_count);
void setAudioSampleRate(int sample_rate);
int getSoundDeviceCount();
void getSoundDeviceInfo(int device_id, SSoundDeviceInfo *device_info);
void selectSoundDevice(int device_id);
int isSoundBusy();
int initializeSoundDevice();
int closeSoundDevice();
int getCurrentSoundDevice();
void set3DListenerOrientRight(float orient_right_x, float orient_right_y, float orient_right_z);
void readIni(engine::CIniFile *ini_file);
void writeIni(engine::CIniFile *ini_file);
float analyzeFrequencyBand(int channel, float freq_start_hz, float freq_end_hz);

} // namespace nocturne::sound

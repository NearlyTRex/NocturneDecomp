#pragma once

// Function prototypes for sound/sndmain.cpp
// Generated from Ghidra function signatures

// Original: sound_sndmain.cpp_staticInit_FUN_00521190
// Address: 00521190
void __cdecl staticInit(void);

// Original: sound_sndmain.cpp_FUN_005211f0
// Address: 005211f0
void FUN_005211f0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: sound_sndmain.cpp_FUN_005214e0
// Address: 005214e0
void FUN_005214e0(undefined4 *param_1,int param_2,int param_3,int param_4);

// Original: sound_sndmain.cpp_parseWavFile_FUN_00521830
// Address: 00521830
undefined4 __cdecl parseWavFile(int param_1,int *param_2,int param_3);

// Original: sound_sndmain.cpp_FUN_00521bf0
// Address: 00521bf0
int FUN_00521bf0(void);

// Original: sound_sndmain.cpp_FUN_00521c50
// Address: 00521c50
int FUN_00521c50(void);

// Original: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
// Address: 00521ca0
undefined4 __cdecl ensureSoundMemoryAvailable(int param_1);

// Original: sound_sndmain.cpp_FUN_00521d80
// Address: 00521d80
void FUN_00521d80(void);

// Original: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
// Address: 00521e10
void __cdecl CSfxSample::parseConfigFile(int param_1);

// Original: sound_sndmain.cpp_FUN_00522480
// Address: 00522480
char * FUN_00522480(char *param_1);

// Original: sound_sndmain.cpp_isStreamableFile_FUN_00522970
// Address: 00522970
undefined4 isStreamableFile(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_005229f0
// Address: 005229f0
char * FUN_005229f0(undefined4 param_1,char *param_2);

// Original: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
// Address: 00522d10
void __cdecl calculateVirtualSpeakerPositions(void);

// Original: sound_sndmain.cpp_FUN_00522e00
// Address: 00522e00
int FUN_00522e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: sound_sndmain.cpp_calculateDistanceGain_FUN_00522ea0
// Address: 00522ea0
float calculateDistanceGain(float param_1,float param_2,float param_3,float param_4);

// Original: sound_sndmain.cpp_allocMixBuffers_FUN_00522f10
// Address: 00522f10
void __cdecl allocMixBuffers(int param_1,int param_2);

// Original: sound_sndmain.cpp_freeMixBuffers_FUN_005230d0
// Address: 005230d0
void __cdecl freeMixBuffers(void);

// Original: sound_sndmain.cpp_FUN_00523170
// Address: 00523170
void FUN_00523170(void);

// Original: sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330
// Address: 00523330
void __cdecl convertMixBufToOutput(float *param_1,undefined2 *param_2,uint param_3,int param_4,int param_5);

// Original: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
// Address: 005234b0
int getSfxSlotFromHandle(uint param_1,int param_2);

// Original: sound_sndmain.cpp_FUN_00523550
// Address: 00523550
void FUN_00523550(void);

// Original: sound_sndmain.cpp_FUN_005235b0
// Address: 005235b0
void FUN_005235b0(void);

// Original: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610
// Address: 00523610
double mixResampleMonoToStereo(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);

// Original: sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750
// Address: 00523750
double mixResampleStereoToStereo(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);

// Original: sound_sndmain.cpp_FUN_00523890
// Address: 00523890
void FUN_00523890(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_005238f0
// Address: 005238f0
undefined4 FUN_005238f0(undefined4 param_1);

// Original: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
// Address: 00523910
undefined4 __cdecl CSfxSample::allocateHwSample(int param_1);

// Original: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
// Address: 00523a60
void __cdecl CSfxSample::freeMemory(undefined1 *param_1);

// Original: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
// Address: 00523b20
void __cdecl CSfxSample::releaseBufferId(int param_1);

// Original: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
// Address: 00523b70
void __cdecl CSfxSample::freeSampleData(int param_1);

// Original: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
// Address: 00523ba0
int CSfxSample::lock(int param_1,int param_2,int param_3);

// Original: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
// Address: 00523cb0
void __cdecl CSfxSample::releaseSoundBuffer(int param_1);

// Original: sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
// Address: 00523d10
void __cdecl CSfxSample::seek(int param_1,int param_2,int param_3);

// Original: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
// Address: 00523ea0
undefined4 CSfxSample::pollStream(float param_1,float param_2);

// Original: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_00524410
// Address: 00524410
void __cdecl CSfxSlot::updateBoundPositionAndVelocity(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0
// Address: 005244b0
void __cdecl CSfxSlot::computeDistancesToSpeakers(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
// Address: 00524520
void __cdecl CSfxSlot::computeChannelDelays(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
// Address: 00524630
float __cdecl CSfxSlot::computeChannelVolumes(undefined4 *param_1);

// Original: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
// Address: 005247a0
void __cdecl CSfxSlot::autoCalcDelayRemaining(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
// Address: 00524830
undefined4 CSfxSlot::compute(int param_1,float param_2);

// Original: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
// Address: 00524d10
void CSfxSlot::mix(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
// Address: 00525570
void __cdecl CSfxSlot::kill(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005256f0
// Address: 005256f0
void __cdecl CSfxSlot::pollHwHandle(int param_1);

// Original: sound_sndmain.cpp_FUN_005257e0
// Address: 005257e0
undefined4 FUN_005257e0(int param_1);

// Original: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
// Address: 00525870
void CSfxSlot::updatePlaybackPos(int param_1,undefined4 param_2,undefined4 param_3);

// Original: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
// Address: 00525a80
void CSfxSlot::seek(int param_1);

// Original: sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
// Address: 00525b70
int __cdecl CSfxSample::init(int param_1);

// Original: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00525bc0
// Address: 00525bc0
double __cdecl CSampleInfo::getSampleDuration(int param_1);

// Original: sound_sndmain.cpp_FUN_00525c10
// Address: 00525c10
int FUN_00525c10(void);

// Original: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
// Address: 00525c40
int __cdecl CSfxSample::getBytesPerFrame(int param_1);

// Original: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
// Address: 00525c70
double CSampleInfo::cvtPlaybackPos(int param_1,double param_2,uint param_3,uint param_4);

// Original: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
// Address: 00525de0
undefined8 CSfxSample::normalizePlaybackPos(int param_1,double param_2,undefined4 param_3);

// Original: sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
// Address: 00525eb0
void __cdecl CSfxOptions::reset(undefined4 *param_1);

// Original: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50
// Address: 00525f50
void __cdecl setNextSfxStaticPosition(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
// Address: 00525fc0
void __cdecl setNextSfxTrackedFloatPosition(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00525ff0
// Address: 00525ff0
void FUN_00525ff0(void);

// Original: sound_sndmain.cpp_FUN_00526020
// Address: 00526020
void FUN_00526020(void);

// Original: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
// Address: 00526090
void __cdecl setNextSfxTrackedVelocity1(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_005260c0
// Address: 005260c0
void FUN_005260c0(void);

// Original: sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
// Address: 005260f0
void __cdecl setNextSfxVolume(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00526120
// Address: 00526120
void FUN_00526120(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00526150
// Address: 00526150
void FUN_00526150(int param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
// Address: 005261b0
void __cdecl setNextSfxChannel(int param_1);

// Original: sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
// Address: 00526210
void __cdecl setNextSfxDelay(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_setNextSfxFlags_FUN_00526240
// Address: 00526240
void __cdecl setNextSfxFlags(undefined4 param_1);

// Original: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270
// Address: 00526270
void __cdecl setNextSfxFlagBits(uint param_1);

// Original: sound_sndmain.cpp_FUN_005262a0
// Address: 005262a0
void FUN_005262a0(void);

// Original: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
// Address: 005262d0
void __cdecl setNextSfxTriggerTime(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: sound_sndmain.cpp_FUN_00526310
// Address: 00526310
void FUN_00526310(void);

// Original: sound_sndmain.cpp_pushSfxOptions_FUN_00526340
// Address: 00526340
void __cdecl pushSfxOptions(void);

// Original: sound_sndmain.cpp_popSfxOptions_FUN_005263c0
// Address: 005263c0
void __cdecl popSfxOptions(void);

// Original: sound_sndmain.cpp_FUN_00526410
// Address: 00526410
void FUN_00526410(undefined1 *param_1,int param_2,undefined4 *param_3,byte param_4);

// Original: sound_sndmain.cpp_startSfx_FUN_005265a0
// Address: 005265a0
uint __cdecl startSfx(char *param_1);

// Original: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
// Address: 00526c50
bool __cdecl isSfxPlaying(undefined4 param_1);

// Original: sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0
// Address: 00526ca0
undefined4 __cdecl isSoundEnabled(void);

// Original: sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0
// Address: 00526cb0
undefined4 __cdecl setSoundEnabled(int param_1);

// Original: sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
// Address: 00526cd0
undefined4 __cdecl getSfxSampleInfo(undefined4 param_1,undefined4 *param_2);

// Original: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10
// Address: 00526d10
undefined8 getSfxPlaybackPosition(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_FUN_00526dd0
// Address: 00526dd0
undefined4 FUN_00526dd0(void);

// Original: sound_sndmain.cpp_setSfxPosition_FUN_00526e10
// Address: 00526e10
undefined4 __cdecl setSfxPosition(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);

// Original: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
// Address: 00526ea0
undefined4 __cdecl setSfxTrackedFloatPosition(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_FUN_00526f00
// Address: 00526f00
undefined4 FUN_00526f00(void);

// Original: sound_sndmain.cpp_FUN_00526f60
// Address: 00526f60
undefined4 FUN_00526f60(void);

// Original: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
// Address: 00526ff0
undefined4 __cdecl setSfxTrackedFloatVelocity(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_FUN_00527060
// Address: 00527060
undefined4 FUN_00527060(void);

// Original: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
// Address: 005270d0
undefined4 __cdecl setSfxVolume(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130
// Address: 00527130
undefined4 __cdecl setSfxBaseFrequency(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_FUN_00527190
// Address: 00527190
undefined4 FUN_00527190(void);

// Original: sound_sndmain.cpp_FUN_00527200
// Address: 00527200
undefined4 FUN_00527200(void);

// Original: sound_sndmain.cpp_killSfx_FUN_00527230
// Address: 00527230
undefined4 __cdecl killSfx(undefined4 param_1);

// Original: sound_sndmain.cpp_setSfxFade_FUN_00527260
// Address: 00527260
undefined4 __cdecl setSfxFade(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: sound_sndmain.cpp_killAllSfx_FUN_005272b0
// Address: 005272b0
void __cdecl killAllSfx(void);

// Original: sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
// Address: 005272e0
void __cdecl setSfxChannelVol(int param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
// Address: 00527380
undefined4 __cdecl getSfxChannelVol(int param_1);

// Original: sound_sndmain.cpp_FUN_005273d0
// Address: 005273d0
void FUN_005273d0(int param_1);

// Original: sound_sndmain.cpp_enableSfxChannel_FUN_00527410
// Address: 00527410
void __cdecl enableSfxChannel(int param_1,int param_2);

// Original: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
// Address: 00527490
undefined4 __cdecl isSfxChannelEnabled(int param_1);

// Original: sound_sndmain.cpp_getFirstActiveSfx_FUN_005274e0
// Address: 005274e0
uint __cdecl getFirstActiveSfx(void);

// Original: sound_sndmain.cpp_FUN_00527520
// Address: 00527520
uint FUN_00527520(uint param_1);

// Original: sound_sndmain.cpp_FUN_00527570
// Address: 00527570
void FUN_00527570(undefined1 *param_1);

// Original: sound_sndmain.cpp_countActiveSfx_FUN_005275e0
// Address: 005275e0
int __cdecl countActiveSfx(void);

// Original: sound_sndmain.cpp_set3DListenerPos_FUN_00527610
// Address: 00527610
void __cdecl set3DListenerPos(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
// Address: 00527690
void set3DListenerOrient(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18);

// Original: sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
// Address: 005277b0
void __cdecl set3DListenerVelocity(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
// Address: 00527880
undefined4 __cdecl isWithinListenerRadius(double param_1,double param_2,double param_3,double param_4);

// Original: sound_sndmain.cpp_FUN_005278e0
// Address: 005278e0
void FUN_005278e0(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00527930
// Address: 00527930
void FUN_00527930(void);

// Original: sound_sndmain.cpp_FUN_00527950
// Address: 00527950
void FUN_00527950(undefined4 param_1,int param_2);

// Original: sound_sndmain.cpp_FUN_005279b0
// Address: 005279b0
bool FUN_005279b0(void);

// Original: sound_sndmain.cpp_getSampleInfo_FUN_005279e0
// Address: 005279e0
undefined4 __cdecl getSampleInfo(undefined4 *param_1);

// Original: sound_sndmain.cpp_freeAllSamples_FUN_00527c30
// Address: 00527c30
void __cdecl freeAllSamples(void);

// Original: sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70
// Address: 00527c70
void getSoundMemoryStats(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6);

// Original: sound_sndmain.cpp_FUN_00527d80
// Address: 00527d80
void FUN_00527d80(void);

// Original: sound_sndmain.cpp_FUN_00527e10
// Address: 00527e10
void FUN_00527e10(void);

// Original: sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
// Address: 00527e40
undefined4 __cdecl enableSoundSystem(void);

// Original: sound_sndmain.cpp_resetSoundDevice_FUN_00528080
// Address: 00528080
undefined4 __cdecl resetSoundDevice(void);

// Original: sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
// Address: 005280c0
undefined4 __cdecl setSoundOutputMode(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: sound_sndmain.cpp_getAudioFormat_FUN_00528160
// Address: 00528160
void __cdecl getAudioFormat(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: sound_sndmain.cpp_getAudioBitDepth_FUN_005281a0
// Address: 005281a0
undefined4 __cdecl getAudioBitDepth(void);

// Original: sound_sndmain.cpp_getAudioSampleRate_FUN_005281b0
// Address: 005281b0
undefined4 __cdecl getAudioSampleRate(void);

// Original: sound_sndmain.cpp_getAudioChannelCount_FUN_005281c0
// Address: 005281c0
undefined4 __cdecl getAudioChannelCount(void);

// Original: sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0
// Address: 005281d0
void __cdecl setAudioBitDepth(undefined4 param_1);

// Original: sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0
// Address: 005281f0
void __cdecl setAudioChannelCount(undefined4 param_1);

// Original: sound_sndmain.cpp_setAudioSampleRate_FUN_00528210
// Address: 00528210
void __cdecl setAudioSampleRate(undefined4 param_1);

// Original: sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
// Address: 00528230
int __cdecl getSoundDeviceCount(void);

// Original: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
// Address: 005282c0
void __cdecl getSoundDeviceInfo(int param_1,undefined4 *param_2);

// Original: sound_sndmain.cpp_findBestSoundDevice_FUN_00528320
// Address: 00528320
int __cdecl findBestSoundDevice(void);

// Original: sound_sndmain.cpp_selectSoundDevice_FUN_00528410
// Address: 00528410
void __cdecl selectSoundDevice(int param_1);

// Original: sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
// Address: 00528480
bool __cdecl isSoundSystemActive(void);

// Original: sound_sndmain.cpp_isSoundBusy_FUN_00528490
// Address: 00528490
undefined4 __cdecl isSoundBusy(void);

// Original: sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0
// Address: 005284a0
void __cdecl enableHwSoundMixing(undefined4 param_1);

// Original: sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0
// Address: 005284e0
undefined4 __cdecl isHardwareMixingEnabled(void);

// Original: sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
// Address: 005284f0
undefined4 __cdecl hasHardware3DSound(void);

// Original: sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
// Address: 00528500
undefined4 __cdecl initializeSoundDevice(void);

// Original: sound_sndmain.cpp_closeSoundDevice_FUN_005285b0
// Address: 005285b0
undefined4 __cdecl closeSoundDevice(void);

// Original: sound_sndmain.cpp_getCurrentSoundDevice_FUN_00528610
// Address: 00528610
undefined4 __cdecl getCurrentSoundDevice(void);

// Original: sound_sndmain.cpp_getMixBufferCount_FUN_00528620
// Address: 00528620
undefined4 __cdecl getMixBufferCount(void);

// Original: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
void __cdecl set3DListenerOrientRight(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: sound_sndmain.cpp_FUN_00528670
// Address: 00528670
void FUN_00528670(void);

// Original: sound_sndmain.cpp_startSoundThread_FUN_005286d0
// Address: 005286d0
int __cdecl startSoundThread(undefined4 param_1,undefined4 param_2);

// Original: sound_sndmain.cpp_killSoundThread_FUN_00528780
// Address: 00528780
bool __cdecl killSoundThread(void);

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
undefined4 __cdecl getMaxSwLatency(void);

// Original: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_00528980
// Address: 00528980
void __cdecl setMaxSwSoundLatency(float param_1);

// Original: sound_sndmain.cpp_FUN_005289f0
// Address: 005289f0
undefined4 FUN_005289f0(undefined4 param_1);

// Original: sound_sndmain.cpp_writeIni_FUN_00528c80
// Address: 00528c80
undefined4 __cdecl writeIni(undefined4 param_1);

// Original: sound_sndmain.cpp_analyzeFrequencyBand_FUN_00528e60
// Address: 00528e60
float analyzeFrequencyBand(int param_1,float param_2,float param_3);

// Original: sound_sndmain.cpp_FUN_005293f0
// Address: 005293f0
void FUN_005293f0(int param_1,float *param_2,float *param_3);

// Original: sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
// Address: 005294f0
void pollAndMixSfx(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
// Address: 00529810
void __cdecl pollAllSfxSlots(void);

// Original: sound_sndmain.cpp_pollAllStreams_FUN_005298f0
// Address: 005298f0
void __cdecl pollAllStreams(int param_1);

// Original: sound_sndmain.cpp_FUN_00529980
// Address: 00529980
void FUN_00529980(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_005299e0
// Address: 005299e0
undefined4 FUN_005299e0(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00529a00
// Address: 00529a00
int FUN_00529a00(void);

// Original: sound_sndmain.cpp_FUN_00529a20
// Address: 00529a20
undefined4 FUN_00529a20(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00529a40
// Address: 00529a40
undefined4 FUN_00529a40(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00529a50
// Address: 00529a50
undefined4 FUN_00529a50(undefined4 param_1);

// Original: sound_sndmain.cpp_FUN_00529a60
// Address: 00529a60
void FUN_00529a60(undefined4 param_1);

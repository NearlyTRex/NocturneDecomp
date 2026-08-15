#pragma once

// Function prototypes for core/sound.cpp
// Generated from Ghidra function signatures

// Original: core_sound.cpp_staticInit_FUN_0052c8c0
// Address: 0052c8c0
void __cdecl staticInit(void);

// Original: core_sound.cpp_populateSoundFiles_FUN_0052c900
// Address: 0052c900
void __cdecl populateSoundFiles(void);

// Original: core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930
// Address: 0052c930
void __cdecl filterSoundFilesByPattern(char *wildcard_pattern);

// Original: core_sound.cpp_updateListeners_FUN_0052c9d0
// Address: 0052c9d0
void __cdecl updateListeners(void);

// Original: core_sound.cpp_FUN_0052d030
// Address: 0052d030
void __cdecl FUN_0052d030(CSound *this_ptr,char *out_result,char *wildcard_pattern);

// Original: core_sound.cpp_playSfxInternal_FUN_0052d120
// Address: 0052d120
uint __cdecl playSfxInternal(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags);

// Original: core_sound.cpp_resetTrainSounds_FUN_0052d710
// Address: 0052d710
void __cdecl resetTrainSounds(void);

// Original: core_sound.cpp_FUN_0052d790
// Address: 0052d790
uint FUN_0052d790(void);

// Original: core_sound.cpp_stopTrainSounds_FUN_0052dcc0
// Address: 0052dcc0
void __watcallRegister stopTrainSounds(void);

// Original: core_sound.cpp_CSound_ctor_FUN_0052dd00
// Address: 0052dd00
CSound * __cdecl CSound::ctor(CSound *this_ptr);

// Original: core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20
// Address: 0052dd20
void __cdecl CSound::findAllSoundFiles(CSound *this_ptr);

// Original: core_sound.cpp_FUN_0052dd80
// Address: 0052dd80
void __cdecl FUN_0052dd80(CSound *this_ptr);

// Original: core_sound.cpp_syncChannel3WithChannel0_FUN_0052dd90
// Address: 0052dd90
void __cdecl syncChannel3WithChannel0(void);

// Original: core_sound.cpp_CSound_init_FUN_0052ddf0
// Address: 0052ddf0
void __cdecl CSound::init(CSound *this_ptr);

// Original: core_sound.cpp_CSound_shutdown_FUN_0052df90
// Address: 0052df90
void __cdecl CSound::shutdown(CSound *this_ptr);

// Original: core_sound.cpp_CSound_FUN_0052dff0
// Address: 0052dff0
void __cdecl CSound(CSound *this_ptr);

// Original: core_sound.cpp_CSound_configure_FUN_0052e850
// Address: 0052e850
void __cdecl CSound::configure(CSound *this_ptr);

// Original: core_sound.cpp_CSound_reset_FUN_0052e9c0
// Address: 0052e9c0
void __cdecl CSound::reset(CSound *this_ptr);

// Original: core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0
// Address: 0052e9d0
void __cdecl CSound::playAmbientSound(CSound *this_ptr,char *sound_name);

// Original: core_sound.cpp_CSound_playSound_FUN_0052ea40
// Address: 0052ea40
uint __cdecl CSound::playSound(CSound *this_ptr,void *user_data,char *sound_name);

// Original: core_sound.cpp_CSound_playActorSound_FUN_0052ea60
// Address: 0052ea60
uint __cdecl CSound::playActorSound(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position);

// Original: core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
// Address: 0052ea90
uint __cdecl CSound::playTrackedActorSound(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker);

// Original: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0052eac0
// Address: 0052eac0
uint __cdecl CSound::playActorNonPositionalSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay);

// Original: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
// Address: 0052eb00
uint __cdecl CSound::playActorPositionalSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay);

// Original: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
// Address: 0052eb50
uint __cdecl CSound::playTrackedActorSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay);

// Original: core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
// Address: 0052eba0
int __cdecl CSound::isSoundPlaying(CSound *this_ptr,uint sfx_handle);

// Original: core_sound.cpp_CSound_killSound_FUN_0052ebb0
// Address: 0052ebb0
void __cdecl CSound::killSound(CSound *this_ptr,uint sfx_handle);

// Original: core_sound.cpp_CSound_FUN_0052ebc0
// Address: 0052ebc0
float __cdecl CSound(CSound *this_ptr,char *param_2);

// Original: core_sound.cpp_FUN_0052ec80
// Address: 0052ec80
undefined4 FUN_0052ec80(void);

// Original: core_sound.cpp_CSound_getSoundModeName_FUN_0052ec90
// Address: 0052ec90
char * __cdecl CSound::getSoundModeName(CSound *this_ptr,int sound_mode_index);

// Original: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
// Address: 0052ecb0
void __cdecl CSound::set3DListenerOrientRight(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z);

// Original: core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0
// Address: 0052ece0
void __cdecl CSound::setReverbPreset(CSound *this_ptr,int index);

// Original: core_sound.cpp_FUN_0052ed40
// Address: 0052ed40
undefined4 FUN_0052ed40(undefined4 param_1,char *param_2,int *param_3);

// Original: core_sound.cpp_CSound_setVolumeFade_FUN_0052ede0
// Address: 0052ede0
void __cdecl CSound::setVolumeFade(CSound *this_ptr,float target_volume,float fade_time);

// Original: core_sound.cpp_STrainNoise_ctor_FUN_0052ee00
// Address: 0052ee00
STrainNoise * __cdecl STrainNoise::ctor(STrainNoise *this_ptr);

// Original: core_sound.cpp_STrainNoise_dtor_FUN_0052ee10
// Address: 0052ee10
STrainNoise * __cdecl STrainNoise::dtor(STrainNoise *this_ptr,uint flags);

// Original: core_sound.cpp_FUN_0052ee20
// Address: 0052ee20
undefined4 * FUN_0052ee20(void);

// Original: core_sound.cpp_FUN_0052ee30
// Address: 0052ee30
undefined4 * FUN_0052ee30(void);

// Original: core_sound.cpp_FUN_0052ee40
// Address: 0052ee40
undefined4 * FUN_0052ee40(void);

// Original: core_sound.cpp_STrainNoise_arrdtor10_FUN_0052ee50
// Address: 0052ee50
STrainNoise * __cdecl STrainNoise::arrdtor10(STrainNoise *this_ptr,uint flags);

#pragma once

// Function prototypes for core/sound.cpp
// Generated from Ghidra function signatures

// Original: core_sound.cpp_staticInit_FUN_005b1760
// Address: 005b1760
void __cdecl staticInit(void);

// Original: core_sound.cpp_populateSoundFiles_FUN_005b17a0
// Address: 005b17a0
void __cdecl populateSoundFiles(void);

// Original: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
// Address: 005b17d0
void __cdecl filterSoundFilesByPattern(char *wildcard_pattern);

// Original: core_sound.cpp_updateListeners_FUN_005b1870
// Address: 005b1870
void __cdecl updateListeners(void);

// Original: core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
// Address: 005b1ed0
void __cdecl CSound::findRandomSoundFile(CSound *this_ptr,char *out_result,char *wildcard_pattern);

// Original: core_sound.cpp_playSfxInternal_FUN_005b1fd0
// Address: 005b1fd0
uint __cdecl playSfxInternal(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags);

// Original: core_sound.cpp_resetTrainSounds_FUN_005b26f0
// Address: 005b26f0
void __cdecl resetTrainSounds(void);

// Original: core_sound.cpp_processTrainSounds_FUN_005b2770
// Address: 005b2770
void __cdecl processTrainSounds(void);

// Original: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
// Address: 005b2ca0
void __watcallRegister stopTrainSounds(void);

// Original: core_sound.cpp_CSound_ctor_FUN_005b2ce0
// Address: 005b2ce0
CSound * __cdecl CSound::ctor(CSound *this_ptr);

// Original: core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
// Address: 005b2d00
void __cdecl CSound::findAllSoundFiles(CSound *this_ptr);

// Original: core_sound.cpp_CSound_dtor_FUN_005aaeb0
// Address: 005b2d60
void __cdecl CSound::dtor(void);

// Original: core_sound.cpp_syncChannel3WithChannel0_FUN_005b2d70
// Address: 005b2d70
void __cdecl syncChannel3WithChannel0(void);

// Original: core_sound.cpp_CSound_init_FUN_005b2dd0
// Address: 005b2dd0
void __cdecl CSound::init(CSound *this_ptr);

// Original: core_sound.cpp_CSound_shutdown_FUN_005b2f70
// Address: 005b2f70
void __cdecl CSound::shutdown(CSound *this_ptr);

// Original: core_sound.cpp_CSound_process_FUN_005b2fd0
// Address: 005b2fd0
void __cdecl CSound::process(CSound *this_ptr);

// Original: core_sound.cpp_CSound_configure_FUN_005b3830
// Address: 005b3830
void __cdecl CSound::configure(CSound *this_ptr);

// Original: core_sound.cpp_CSound_reset_FUN_005b39a0
// Address: 005b39a0
void __cdecl CSound::reset(CSound *this_ptr);

// Original: core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0
// Address: 005b39b0
void __cdecl CSound::playAmbientSound(CSound *this_ptr,char *sound_name);

// Original: core_sound.cpp_CSound_playSound_FUN_005b3a20
// Address: 005b3a20
uint __cdecl CSound::playSound(CSound *this_ptr,void *user_data,char *sound_name);

// Original: core_sound.cpp_CSound_playActorSound_FUN_005b3a40
// Address: 005b3a40
uint __cdecl CSound::playActorSound(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position);

// Original: core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
// Address: 005b3a70
uint __cdecl CSound::playTrackedActorSound(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker);

// Original: core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0
// Address: 005b3aa0
uint __cdecl CSound::playActorNonPositionalSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay);

// Original: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
// Address: 005b3ae0
uint __cdecl CSound::playActorPositionalSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay);

// Original: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30
// Address: 005b3b30
uint __cdecl CSound::playTrackedActorSoundWithDelay(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker,float delay);

// Original: core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
// Address: 005b3b80
int __cdecl CSound::isSoundPlaying(CSound *this_ptr,uint sfx_handle);

// Original: core_sound.cpp_CSound_killSound_FUN_005b3b90
// Address: 005b3b90
void __cdecl CSound::killSound(CSound *this_ptr,uint sfx_handle);

// Original: core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
// Address: 005b3ba0
float __cdecl CSound::getSoundDuration(CSound *this_ptr,char *sound_name);

// Original: core_sound.cpp_CSound_getReverbPresetCount_FUN_005b3c60
// Address: 005b3c60
int __cdecl CSound::getReverbPresetCount(CSound *this_ptr);

// Original: core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70
// Address: 005b3c70
char * __cdecl CSound::getSoundModeName(CSound *this_ptr,int sound_mode_index);

// Original: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
// Address: 005b3c90
void __cdecl CSound::set3DListenerOrientRight(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z);

// Original: core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0
// Address: 005b3cc0
void __cdecl CSound::setReverbPreset(CSound *this_ptr,int index);

// Original: core_sound.cpp_CSound_selectReverbPreset_FUN_005b3d20
// Address: 005b3d20
int __cdecl CSound::selectReverbPreset(CSound *this_ptr,char *title,int *selection_inout);

// Original: core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0
// Address: 005b3dc0
void __cdecl CSound::setVolumeFade(CSound *this_ptr,float target_volume,float fade_time);

// Original: core_sound.cpp_editSoundName_FUN_005b3de0
// Address: 005b3de0
int __cdecl editSoundName(char *prompt_text,char *output_buffer);

// Original: core_sound.cpp_STrainNoise_ctor_FUN_005b3e00
// Address: 005b3e00
STrainNoise * __cdecl STrainNoise::ctor(STrainNoise *this_ptr);

// Original: core_sound.cpp_STrainNoise_dtor_FUN_005b3e10
// Address: 005b3e10
STrainNoise * __cdecl STrainNoise::dtor(STrainNoise *this_ptr,uint flags);

// Original: core_sound.cpp_assignInt_FUN_005b3e20
// Address: 005b3e20
int * __cdecl assignInt(int *dest_ptr,int *src_ptr);

// Original: core_sound.cpp_assignInt_FUN_005b3e30
// Address: 005b3e30
int * __cdecl assignInt(int *dest_ptr,int *src_ptr);

// Original: core_sound.cpp_assignInt_FUN_005b3e40
// Address: 005b3e40
int * __cdecl assignInt(int *dest_ptr,int *src_ptr);

// Original: core_sound.cpp_STrainNoise_arrdtor_FUN_005b3e50
// Address: 005b3e50
STrainNoise * __cdecl STrainNoise::arrdtor(STrainNoise *objs,uint flags);

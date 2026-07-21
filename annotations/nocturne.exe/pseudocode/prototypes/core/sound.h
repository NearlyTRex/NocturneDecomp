#pragma once

// Function prototypes for core/sound.cpp
// Generated from Ghidra function signatures

// Original: core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930
// Address: 0052c930
void filterSoundFilesByPattern(undefined4 param_1);

// Original: core_sound.cpp_updateListeners_FUN_0052c9d0
// Address: 0052c9d0
void __cdecl updateListeners(void);

// Original: core_sound.cpp_playSfxInternal_FUN_0052d120
// Address: 0052d120
undefined4 __cdecl playSfxInternal(undefined4 param_1,char *param_2,float param_3,float param_4,float param_5,float *param_6);

// Original: core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20
// Address: 0052dd20
void __cdecl CSound::findAllSoundFiles(void);

// Original: core_sound.cpp_CSound_init_FUN_0052ddf0
// Address: 0052ddf0
void __cdecl CSound::init(undefined4 param_1);

// Original: core_sound.cpp_CSound_shutdown_FUN_0052df90
// Address: 0052df90
void __cdecl CSound::shutdown(void);

// Original: core_sound.cpp_CSound_configure_FUN_0052e850
// Address: 0052e850
void __cdecl CSound::configure(undefined4 param_1);

// Original: core_sound.cpp_CSound_reset_FUN_0052e9c0
// Address: 0052e9c0
void __cdecl CSound::reset(void);

// Original: core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0
// Address: 0052e9d0
void __cdecl CSound::playAmbientSound(undefined4 param_1,char *param_2);

// Original: core_sound.cpp_CSound_playSound_FUN_0052ea40
// Address: 0052ea40
void __cdecl CSound::playSound(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_sound.cpp_CSound_playActorSound_FUN_0052ea60
// Address: 0052ea60
void __cdecl CSound::playActorSound(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);

// Original: core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
// Address: 0052ea90
void __cdecl CSound::playTrackedActorSound(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
// Address: 0052eb00
undefined4 __cdecl CSound::playActorPositionalSoundWithDelay(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float param_5);

// Original: core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
// Address: 0052eb50
undefined4 __cdecl CSound::playTrackedActorSoundWithDelay(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5);

// Original: core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
// Address: 0052eba0
void __cdecl CSound::isSoundPlaying(undefined4 param_1,undefined4 param_2);

// Original: core_sound.cpp_CSound_killSound_FUN_0052ebb0
// Address: 0052ebb0
void __cdecl CSound::killSound(undefined4 param_1,undefined4 param_2);

// Original: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
// Address: 0052ecb0
void __cdecl CSound::set3DListenerOrientRight(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0
// Address: 0052ece0
void __cdecl CSound::setReverbPreset(undefined4 param_1,int param_2);

// Original: core_sound.cpp_CSound_setVolumeFade_FUN_0052ede0
// Address: 0052ede0
void __cdecl CSound::setVolumeFade(undefined4 param_1,undefined4 param_2,undefined4 param_3);

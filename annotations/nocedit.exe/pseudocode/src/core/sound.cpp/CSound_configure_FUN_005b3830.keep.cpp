// Name: core_sound.cpp_CSound_configure_FUN_005b3830
// Address: 005b3830
// MANUAL RECONSTRUCTION
// Address Range: [[005b3830, 005b399d]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar2;
  int iVar3;

  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
  if (0.25f < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,0.25f);
  }
  fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
  if (0.25f < fVar2) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,0.25f);
  }
  fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
  if (1.0f < fVar2) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,1.0f);
  }
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_reset_FUN_005b39a0(this_ptr);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
    sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(0.0,0.0,0.0);
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    if (iVar3 < 0x7531) {
      sound_sndmain_cpp_startSfx_FUN_005a8e90("splash-music-22.wav");
#if NOCTURNE_ATTRACT_MOVIES
      nocturne_attract_set_music_duration(
          core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(this_ptr,"splash-music-22.wav"));
#endif
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
    sound_sndmain_cpp_startSfx_FUN_005a8e90("splash-music-44.wav");
#if NOCTURNE_ATTRACT_MOVIES
    nocturne_attract_set_music_duration(
        core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(this_ptr,"splash-music-44.wav"));
#endif
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return;
}

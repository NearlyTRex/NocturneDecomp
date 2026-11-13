// Name: core_sound.cpp_CSound_configure_FUN_005607d0
// Address: 005607d0
// Address Range: [[005607d0, 00560925]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_configure_FUN_005607d0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_configure_FUN_005607d0(CSound *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(1);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(1,0x3E800000);
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(0);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(0,0x3E800000);
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(2);
  if (0x3F800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(2,0x3F800000);
  }
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_reset_FUN_00560930(this_ptr);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_00558860(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerPos_FUN_00557020(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerOrient_FUN_00557080(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
    sound_sndmain_cpp_set3DListenerVelocity_FUN_00557100(0.0,0.0,0.0);
    sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    sound_sndmain_cpp_setNextSfxChannel_FUN_00555e90(1);
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(1);
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_00558390();
    if (iVar2 < 0x7531) {
      sound_sndmain_cpp_startSfx_FUN_00556240("splash-music-22.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      return;
    }
    sound_sndmain_cpp_startSfx_FUN_00556240("@splash.mp3" + 1);
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
  }
  return;
}

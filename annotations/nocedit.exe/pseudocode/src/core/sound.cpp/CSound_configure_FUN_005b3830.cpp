// Name: core_sound.cpp_CSound_configure_FUN_005b3830
// Address: 005b3830
// Address Range: [[005b3830, 005b399d]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *this_ptr)

{
  float fVar1;
  int iVar2;
  CSound *in_stack_00000020;
  uint uStack00000028;
  uint uStack0000002c;
  uint uStack00000038;
  uint uStack00000040;
  
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
  if (0.25f < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,0.25f);
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
  if (0.25f < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,0.25f);
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
  if (1f < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,1f);
  }
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_reset_FUN_005b39a0(in_stack_00000020);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
    sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(0.0,0.0,0.0);
    uStack00000028 = 0x5b3938;
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    uStack0000002c = 0x5b393d;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    uStack0000002c = 0x5b3944;
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
    uStack00000038 = 0x5b3956;
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    if (iVar2 < 0x7531) {
      uStack00000038 = 0x5b3992;
      sound_sndmain_cpp_startSfx_FUN_005a8e90("splash-music-22.wav");
      uStack00000040 = 0x5b399a;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
    uStack00000038 = 0x5b3967;
    sound_sndmain_cpp_startSfx_FUN_005a8e90("splash-music-44.wav");
    uStack00000040 = 0x5b396f;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  return;
}

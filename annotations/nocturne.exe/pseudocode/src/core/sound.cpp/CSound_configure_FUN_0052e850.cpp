// Name: core_sound.cpp_CSound_configure_FUN_0052e850
// Address: 0052e850
// Address Range: [[0052e850, 0052e9bd]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_configure_FUN_0052e850(undefined4 param_1)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_configure_FUN_0052e850(uint param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(1,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(0,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
  if (0x3F800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(2,0x3F800000);
  }
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
  if (iVar2 == 0) {
    core_sound_cpp_CSound_reset_FUN_0052e9c0(param_1);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(0,0,0);
    sound_sndmain_cpp_set3DListenerPos_FUN_00527610(0,0,0,0,0,0);
    sound_sndmain_cpp_set3DListenerOrient_FUN_00527690
              (0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000,0,0,0,0,0,0,0,0x3ff00000);
    sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(0,0,0,0,0,0);
    sound_sndmain_cpp_enableSoundSystem_FUN_00527e40();
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(1);
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(1);
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
    if (iVar2 < 0x7531) {
      sound_sndmain_cpp_startSfx_FUN_005265a0("splash-music-22.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      return;
    }
    sound_sndmain_cpp_startSfx_FUN_005265a0("@splash-music-44.wav" + 1);
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  return;
}

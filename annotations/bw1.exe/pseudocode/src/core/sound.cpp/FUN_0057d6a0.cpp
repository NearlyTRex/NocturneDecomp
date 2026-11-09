// Name: core_sound.cpp_FUN_0057d6a0
// Address: 0057d6a0
// Address Range: [[0057d6a0, 0057d7f5]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0057d6a0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_FUN_0057d6a0(CSound *this_ptr)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(1,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
  if (0x3E800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(0,0x3E800000);
  }
  fVar1 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
  if (0x3F800000 < fVar1) {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(2,0x3F800000);
  }
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
  if (iVar2 == 0) {
    core_sound_cpp_FUN_0057d800(this_ptr);
    sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(0,0,0);
    sound_sndmain_cpp_FUN_00573ec0(0,0,0,0,0,0);
    sound_sndmain_cpp_FUN_00573f20(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
    sound_sndmain_cpp_FUN_00573fa0(0,0,0);
    sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0();
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572980(1);
    sound_sndmain_cpp_FUN_00572a10(1);
    iVar2 = sound_sndmain_cpp_FUN_00575220();
    if (iVar2 < 0x7531) {
      sound_sndmain_cpp_startSfx_FUN_00572d20("splash-music-22.wav");
      sound_sndmain_cpp_FUN_00572b40();
      return;
    }
    sound_sndmain_cpp_startSfx_FUN_00572d20("@splash-music-44.wav" + 1);
    sound_sndmain_cpp_FUN_00572b40();
  }
  return;
}

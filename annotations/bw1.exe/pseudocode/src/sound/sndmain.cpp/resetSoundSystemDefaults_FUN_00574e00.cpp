// Name: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e91]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00574e00(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00574e00(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(iVar1,0x3f800000);
    sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  sound_sndmain_cpp_FUN_00573fe0(0x3f800000);
  sound_sndmain_cpp_FUN_00573ec0(0,0,0,0,0,0);
  sound_sndmain_cpp_FUN_00573f20(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  sound_sndmain_cpp_FUN_00573fa0(0,0,0);
  iVar1 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0();
  sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(iVar1);
  iVar1 = sound_sndmain_cpp_getCurrentRecordingDevice_FUN_005759a0();
  sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(iVar1);
  return;
}

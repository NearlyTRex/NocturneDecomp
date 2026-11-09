// Name: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0
// Address: 005523d0
// Address Range: [[005523d0, 00552461]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005523d0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005523d0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(iVar1,0x3f800000);
    sound_sndmain_cpp_FUN_00551220(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  sound_sndmain_cpp_FUN_005515b0(0x3f800000);
  sound_sndmain_cpp_FUN_00551490(0,0,0,0,0,0);
  sound_sndmain_cpp_FUN_005514f0(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  sound_sndmain_cpp_FUN_00551570(0,0,0);
  iVar1 = sound_sndmain_cpp_FUN_00552ca0();
  sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(iVar1);
  iVar1 = sound_sndmain_cpp_getCurrentRecordingDevice_FUN_00552f70();
  sound_sndmain_cpp_FUN_00552e40(iVar1);
  return;
}

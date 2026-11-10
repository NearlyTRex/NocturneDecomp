// Name: sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60
// Address: 00557f60
// Address Range: [[00557f60, 0055800d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00557f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00557f60(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(iVar1,0x3f800000);
    sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(iVar1,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(1,_DAT_005e4840 * (float)_DAT_005d3aa2);
  sound_sndmain_cpp_FUN_00557140(0x3f800000);
  sound_sndmain_cpp_FUN_00557020(0,0,0,0,0,0);
  sound_sndmain_cpp_FUN_00557080(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  sound_sndmain_cpp_FUN_00557100(0,0,0);
  iVar1 = sound_sndmain_cpp_FUN_00558840();
  sound_sndmain_cpp_selectSoundDevice_FUN_00558640(iVar1);
  iVar1 = sound_sndmain_cpp_getCurrentRecordingDevice_FUN_00558b10();
  sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(iVar1);
  return;
}

// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_00528210
// Address: 00528210
// Address Range: [[00528210, 00528229]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(undefined4 param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(uint param_1)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0(param_1);
  uVar1 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0(uVar1);
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(uVar1);
  return;
}

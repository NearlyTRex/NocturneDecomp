// Name: sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0
// Address: 005281f0
// Address Range: [[005281f0, 00528209]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(undefined4 param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(uint param_1)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
  uVar1 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0(param_1,uVar1);
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(uVar1);
  return;
}

// Name: sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0
// Address: 005281d0
// Address Range: [[005281d0, 005281e9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(undefined4 param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(uint param_1)

{
  uint uVar1;
  
  uVar1 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
  uVar1 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0(uVar1);
  sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(param_1,uVar1);
  return;
}

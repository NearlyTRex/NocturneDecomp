// Name: sound_sndmain.cpp_getAudioChannelCount_FUN_00575240
// Address: 00575240
// Address Range: [[00575240, 00575256]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_00575240(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_00575240(void)

{
  sound_sndmain_cpp_getAudioFormat_FUN_005751c0((int *)0x0,&g_AudioChannelCount,(int *)0x0);
  return g_AudioChannelCount;
}

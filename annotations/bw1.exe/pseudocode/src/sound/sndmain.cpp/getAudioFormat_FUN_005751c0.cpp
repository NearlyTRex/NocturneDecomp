// Name: sound_sndmain.cpp_getAudioFormat_FUN_005751c0
// Address: 005751c0
// Address Range: [[005751c0, 005751f3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_005751c0(int *bits_per_sample,int *channels,int *sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_005751c0(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = DAT_006232e8;
  }
  if (channels != (int *)0x0) {
    *channels = DAT_006232ec;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = DAT_006232f0;
  return;
}

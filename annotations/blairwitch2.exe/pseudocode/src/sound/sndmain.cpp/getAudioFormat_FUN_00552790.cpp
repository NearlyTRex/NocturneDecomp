// Name: sound_sndmain.cpp_getAudioFormat_FUN_00552790
// Address: 00552790
// Address Range: [[00552790, 005527c3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00552790(int *bits_per_sample,int *channels,int *sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00552790(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = DAT_0061bc98;
  }
  if (channels != (int *)0x0) {
    *channels = DAT_0061bc9c;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = DAT_0061bca0;
  return;
}

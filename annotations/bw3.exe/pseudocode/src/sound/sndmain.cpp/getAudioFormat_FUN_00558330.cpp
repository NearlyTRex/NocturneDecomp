// Name: sound_sndmain.cpp_getAudioFormat_FUN_00558330
// Address: 00558330
// Address Range: [[00558330, 00558363]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00558330(int *bits_per_sample,int *channels,int *sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00558330(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = DAT_00604228;
  }
  if (channels != (int *)0x0) {
    *channels = DAT_0060422c;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = DAT_00604230;
  return;
}

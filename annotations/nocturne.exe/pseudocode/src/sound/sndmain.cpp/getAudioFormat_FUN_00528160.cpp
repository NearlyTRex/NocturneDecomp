// Name: sound_sndmain.cpp_getAudioFormat_FUN_00528160
// Address: 00528160
// Address Range: [[00528160, 00528193]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00528160(int *bits_per_sample,int *channels,int *sample_rate)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00528160(int *bits_per_sample,int *channels,int *sample_rate)

{
  if (bits_per_sample != (int *)0x0) {
    *bits_per_sample = DAT_005bea64;
  }
  if (channels != (int *)0x0) {
    *channels = DAT_005bea68;
  }
  if (sample_rate == (int *)0x0) {
    return;
  }
  *sample_rate = DAT_005bea6c;
  return;
}

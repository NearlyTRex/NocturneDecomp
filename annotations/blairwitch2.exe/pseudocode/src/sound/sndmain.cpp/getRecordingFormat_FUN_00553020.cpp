// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00553020
// Address: 00553020
// Address Range: [[00553020, 00553062]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00553020(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00553020(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = _DAT_0061bcd0;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = _DAT_0061bcd4;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = _DAT_0061bcd8;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = _DAT_02649870;
  return;
}

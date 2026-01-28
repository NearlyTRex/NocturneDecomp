// Name: sound_sndmain.cpp_getRecordingFormat_FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005aba82]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_005aba40 (int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getRecordingFormat_FUN_005aba40
          (int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = g_RecordingBitsPerSample;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = g_RecordingChannelCount;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = g_RecordingSampleRate;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = g_RecordingSamplesSigned;
  return;
}

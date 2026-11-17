// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00575a50
// Address: 00575a50
// Address Range: [[00575a50, 00575a92]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00575a50(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00575a50(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = g_INT_00623320;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = g_INT_00623324;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = g_INT_00623328;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = g_INT_02c81040;
  return;
}

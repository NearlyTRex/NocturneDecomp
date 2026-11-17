// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00558bc0
// Address: 00558bc0
// Address Range: [[00558bc0, 00558c02]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00558bc0(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00558bc0(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = g_INT_0060425c;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = g_INT_00604260;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = g_INT_00604264;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = g_INT_02cf3c70;
  return;
}

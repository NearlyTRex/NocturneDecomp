// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00575a4e
// Address: 00575a4e
// Address Range: [[00575a4e, 00575a92]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00575a4e(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00575a4e(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = _DAT_00623320;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = _DAT_00623324;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = _DAT_00623328;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = _DAT_02c81040;
  return;
}

// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00558bbe
// Address: 00558bbe
// Address Range: [[00558bbe, 00558c02]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00558bbe(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getRecordingFormat_FUN_00558bbe(int *out_bits_per_sample,int *out_channels,int *out_sample_rate,int *out_signed)

{
  if (out_bits_per_sample != (int *)0x0) {
    *out_bits_per_sample = _DAT_0060425c;
  }
  if (out_channels != (int *)0x0) {
    *out_channels = _DAT_00604260;
  }
  if (out_sample_rate != (int *)0x0) {
    *out_sample_rate = _DAT_00604264;
  }
  if (out_signed == (int *)0x0) {
    return;
  }
  *out_signed = _DAT_02cf3c70;
  return;
}

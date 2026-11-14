// Name: sound_sndmain.cpp_convertMixBufToOutput_FUN_0054d220
// Address: 0054d220
// Address Range: [[0054d220, 0054d397]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_0054d220(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_0054d220(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride)

{
  float fVar1;
  ushort *local_30;
  byte local_28;
  ushort local_20;
  int local_18;
  int local_14;
  
  local_30 = output_buffer;
  if ((uint)bits_per_sample < 8) {
LAB_0054d36d:
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x617;
    core_main_c_FUN_004e4500("convertMixBufToOutput - invalid bits: %d",bits_per_sample);
    return;
  }
  if ((uint)bits_per_sample < 9) {
    local_18 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)_DAT_005e804e) {
          *(byte *)local_30 = 0;
        }
        else if (fVar1 < 1.0) {
          local_28 = (byte)(int)ROUND(fVar1 * _DAT_005e804a + _DAT_005e8056);
          *(byte *)local_30 = local_28;
        }
        else {
          *(byte *)local_30 = 0xff;
        }
        local_30 = (ushort *)((int)local_30 + output_stride);
        input_samples = input_samples + 1;
        local_18 = local_18 + 1;
      } while (local_18 < num_samples);
    }
  }
  else {
    if (bits_per_sample != 0x10) goto LAB_0054d36d;
    local_14 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)_DAT_005e804e) {
          *local_30 = 0x8001;
        }
        else if (fVar1 < 1.0) {
          local_20 = (ushort)(int)ROUND(fVar1 * _DAT_005e8046);
          *local_30 = local_20;
        }
        else {
          *local_30 = 0x7fff;
        }
        local_30 = (ushort *)((int)local_30 + output_stride);
        input_samples = input_samples + 1;
        local_14 = local_14 + 1;
      } while (local_14 < num_samples);
    }
  }
  return;
}

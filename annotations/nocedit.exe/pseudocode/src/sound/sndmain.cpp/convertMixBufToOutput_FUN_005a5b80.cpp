// Name: sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
// Address: 005a5b80
// Address Range: [[005a5b80, 005a5cf7]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80(float * input_samples, void * output_buffer, int bits_per_sample, int num_samples, int output_stride)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
          (float *input_samples,void *output_buffer,int bits_per_sample,int num_samples,
          int output_stride)

{
  float fVar1;
  ushort *local_30;
  byte local_28;
  ushort local_20;
  int local_18;
  int local_14;
  
  local_30 = output_buffer;
  if ((uint)bits_per_sample < 8) {
LAB_005a5ccd:
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x55a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("convertMixBufToOutput - invalid bits: %d",bits_per_sample);
    return;
  }
  if ((uint)bits_per_sample < 9) {
    local_18 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)-1) {
          *(byte *)local_30 = 0;
        }
        else if (fVar1 < 1.0) {
          local_28 = (byte)(int)ROUND(fVar1 * 127f + 128f);
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
    if (bits_per_sample != 0x10) goto LAB_005a5ccd;
    local_14 = 0;
    if (0 < num_samples) {
      do {
        fVar1 = *input_samples;
        if (fVar1 <= (float)-1) {
          *local_30 = 0x8001;
        }
        else if (fVar1 < 1.0) {
          local_20 = (ushort)(int)ROUND(fVar1 * 32766f);
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

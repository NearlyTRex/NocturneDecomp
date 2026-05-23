// Name: sound_mp3.cpp_requantizeSamples_FUN_005301b0
// Address: 005301b0
// MANUAL RECONSTRUCTION
// Address Range: [[005301b0, 005302ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_requantizeSamples_FUN_005301b0(SMpegSubbandScalefactors *quantized_samples,SMpegSubbandScalefactors *dequantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

{
  float inv_range;
  int range;
  int range_x2;
  byte nbits;
  int channel;
  int subband;
  int channel_count;

  channel_count = frame->channel_count;
  for (subband = 0; subband < 0x20; subband = subband + 1) {
    for (channel = 0; channel < channel_count; channel = channel + 1) {
      if (allocation[channel].bit_allocations[subband] == 0) {
        dequantized_samples[channel].codes.f[0][subband] = 0.0;
      }
      else {
        nbits = (byte)allocation[channel].bit_allocations[subband];
        if ((quantized_samples[channel].codes.q[0][subband] >> (nbits & 0x1f) & 1) == 1) {
          dequantized_samples[channel].codes.f[0][subband] = 0.0;
        }
        else {
          dequantized_samples[channel].codes.f[0][subband] = -1.0;
        }
        range = 1 << (nbits & 0x1f);
        inv_range = 1.0 / (float)range;
        range_x2 = 1 << (nbits + 1 & 0x1f);
        dequantized_samples[channel].codes.f[0][subband] =
          ((float)range_x2 *
           ((float)(quantized_samples[channel].codes.q[0][subband] & range - 1U) * inv_range +
            dequantized_samples[channel].codes.f[0][subband] + inv_range)) / (float)(range_x2 + -1);
      }
    }
  }
  return;
}

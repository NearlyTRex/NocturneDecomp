// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
// Address: 0052fb50
// MANUAL RECONSTRUCTION
// Address Range: [[0052fb50, 0052fc41]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

{
  uint bits_value;
  uint shared_value;
  int channel;
  int subband;
  int channel_count;
  int js_bound;

  channel_count = frame->channel_count;
  js_bound = frame->js_bound;

  // Subbands below the JS bound: each channel reads its own allocation.
  for (subband = 0; subband < js_bound; subband = subband + 1) {
    for (channel = 0; channel < channel_count; channel = channel + 1) {
      bits_value = 0;
      if (allocation[channel].bit_allocations[subband] != 0) {
        bits_value = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                       (this_ptr,allocation[channel].bit_allocations[subband] + 1);
      }
      quantized_samples[channel].codes.q[0][subband] = bits_value;
    }
  }

  // Subbands at/above the JS bound: one shared allocation, broadcast to every channel.
  for (subband = js_bound; subband < 0x20; subband = subband + 1) {
    shared_value = 0;
    if (allocation->bit_allocations[subband] != 0) {
      shared_value = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                       (this_ptr,allocation->bit_allocations[subband] + 1);
    }
    for (channel = 0; channel < channel_count; channel = channel + 1) {
      quantized_samples[channel].codes.q[0][subband] = shared_value;
    }
  }
  return;
}

// Name: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850
// Address: 0052f850
// MANUAL RECONSTRUCTION
// Address Range: [[0052f850, 0052f8c2]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)

{
  uint scale_value;
  int channel;
  int subband;
  int channel_count;

  channel_count = frame->channel_count;
  for (subband = 0; subband < 0x20; subband = subband + 1) {
    for (channel = 0; channel < channel_count; channel = channel + 1) {
      if (allocation_indices[channel].bit_allocations[subband] == 0) {
        scalefactors[channel].codes.q[0][subband] = 0x3f;
      }
      else {
        scale_value = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
        scalefactors[channel].codes.q[0][subband] = scale_value;
      }
    }
  }
  return;
}

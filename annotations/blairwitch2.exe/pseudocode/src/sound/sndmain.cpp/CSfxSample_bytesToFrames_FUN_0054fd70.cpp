// Name: sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_0054fd70
// Address: 0054fd70
// Address Range: [[0054fd70, 0054fd8f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70(CSfxSample *this_ptr,int byte_count)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70(CSfxSample *this_ptr,int byte_count)

{
  return (byte_count << 3) /
         ((this_ptr->sample_info).num_channels * (this_ptr->sample_info).bit_depth);
}

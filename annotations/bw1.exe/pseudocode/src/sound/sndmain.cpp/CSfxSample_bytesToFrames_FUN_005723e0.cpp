// Name: sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005723e0
// Address: 005723e0
// Address Range: [[005723e0, 005723ff]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005723e0(CSfxSample *this_ptr,int byte_count)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005723e0(CSfxSample *this_ptr,int byte_count)

{
  return (byte_count << 3) /
         ((this_ptr->sample_info).num_channels * (this_ptr->sample_info).bit_depth);
}

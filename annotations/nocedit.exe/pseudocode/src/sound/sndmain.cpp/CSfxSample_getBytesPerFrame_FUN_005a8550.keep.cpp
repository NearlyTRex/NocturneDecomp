// Name: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
// Address: 005a8550
// MANUAL RECONSTRUCTION
// Address Range: [[005a8550, 005a8570]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample *this_ptr)

{
  int iVar1;

  iVar1 = (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels;
  return iVar1 / 8;
}

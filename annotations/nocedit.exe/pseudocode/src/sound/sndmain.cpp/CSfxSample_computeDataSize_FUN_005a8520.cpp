// Name: sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_005a8520
// Address: 005a8520
// Address Range: [[005a8520, 005a8549]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_005a8520(CSfxSample * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_computeDataSize_FUN_005a8520(CSfxSample *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3) *
         (this_ptr->sample_info).sample_count;
}

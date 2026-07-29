// Name: sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_00525c10
// Address: 00525c10
// Address Range: [[00525c10, 00525c39]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_computeDataSize_FUN_00525c10(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_computeDataSize_FUN_00525c10(CSfxSample *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3) *
         (this_ptr->sample_info).sample_count;
}

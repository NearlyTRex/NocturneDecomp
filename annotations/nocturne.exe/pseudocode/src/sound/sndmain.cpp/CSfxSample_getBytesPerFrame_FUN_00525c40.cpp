// Name: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
// Address: 00525c40
// Address Range: [[00525c40, 00525c60]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

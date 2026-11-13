// Name: sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_00555900
// Address: 00555900
// Address Range: [[00555900, 00555926]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900(CSfxSample *this_ptr,int frame_count)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900(CSfxSample *this_ptr,int frame_count)

{
  int iVar1;
  int iVar2;
  
  iVar1 = frame_count * (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels + 7
  ;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

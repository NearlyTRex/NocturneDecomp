// Name: sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_0054fd90
// Address: 0054fd90
// Address Range: [[0054fd90, 0054fdb6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(CSfxSample *this_ptr,int frame_count)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(CSfxSample *this_ptr,int frame_count)

{
  int iVar1;
  int iVar2;
  
  iVar1 = frame_count * (this_ptr->sample_info).bit_depth * (this_ptr->sample_info).num_channels + 7
  ;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}

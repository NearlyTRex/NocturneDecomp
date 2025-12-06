// Name: sound_sndmain.cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810
// Address: 005a8810
// Address Range: [[005a8810, 005a8828]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810(CSfxSample * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810(CSfxSample *this_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr);
  return (uint)(1 < iVar1);
}

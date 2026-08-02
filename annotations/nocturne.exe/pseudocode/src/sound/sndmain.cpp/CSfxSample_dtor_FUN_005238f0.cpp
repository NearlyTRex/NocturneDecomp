// Name: sound_sndmain.cpp_CSfxSample_dtor_FUN_005238f0
// Address: 005238f0
// Address Range: [[005238f0, 00523901]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_005238f0(CSfxSample *this_ptr,uint flags)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_dtor_FUN_005238f0(CSfxSample *this_ptr,uint flags)

{
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
  return this_ptr;
}

// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0
// Address: 005535e0
// Address Range: [[005535e0, 00553621]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample *this_ptr)

{
  if (this_ptr->buffer_id != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      (**(code **)(*_DAT_02cf3280 + 0x34))(_DAT_02cf3280,this_ptr->buffer_id);
      this_ptr->buffer_id = 0;
      return;
    }
    this_ptr->buffer_id = 0;
  }
  return;
}

// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005535e0
// Address: 005535e0
// Address Range: [[005535e0, 00553621]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005535e0(CSfxSample *this_ptr)

{
  if (this_ptr->buffer_id != 0) {
    if (g_CSoundDevice_PTR_02cf3280 != (CSoundDevice *)0x0) {
      (*g_CSoundDevice_PTR_02cf3280->vtable->freeSample)
                (g_CSoundDevice_PTR_02cf3280,this_ptr->buffer_id);
      this_ptr->buffer_id = 0;
      return;
    }
    this_ptr->buffer_id = 0;
  }
  return;
}

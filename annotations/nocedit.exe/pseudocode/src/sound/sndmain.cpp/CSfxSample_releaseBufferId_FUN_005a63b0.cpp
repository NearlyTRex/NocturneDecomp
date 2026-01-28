// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005a63b0
// Address: 005a63b0
// Address Range: [[005a63b0, 005a63f1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005a63b0(CSfxSample *this_ptr)

{
  if (this_ptr->buffer_id != 0) {
    if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
      (*g_CSoundDevicePtr->vtable->freeSample)(g_CSoundDevicePtr,this_ptr->buffer_id);
      this_ptr->buffer_id = 0;
      return;
    }
    this_ptr->buffer_id = 0;
  }
  return;
}

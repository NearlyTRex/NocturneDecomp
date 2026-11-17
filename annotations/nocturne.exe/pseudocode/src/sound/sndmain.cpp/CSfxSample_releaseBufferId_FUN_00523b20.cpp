// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
// Address: 00523b20
// Address Range: [[00523b20, 00523b61]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr)

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

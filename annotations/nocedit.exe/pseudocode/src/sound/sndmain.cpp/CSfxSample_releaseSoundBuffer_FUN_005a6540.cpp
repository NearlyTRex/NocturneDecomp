// Name: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
// Address: 005a6540
// Address Range: [[005a6540, 005a6597]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *this_ptr)

{
  if (this_ptr->locked_length != 0) {
    if ((this_ptr->buffer_id != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
      (*g_CSoundDevicePtr->vtable->unlockSample)(g_CSoundDevicePtr,this_ptr->buffer_id);
    }
    this_ptr->locked_length = 0;
    this_ptr->locked_offset = 0;
  }
  return;
}

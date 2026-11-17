// Name: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0
// Address: 0054dbf0
// Address Range: [[0054dbf0, 0054dc47]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample *this_ptr)

{
  if (this_ptr->locked_length != 0) {
    if ((this_ptr->buffer_id != 0) && (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0)) {
      (*g_CSoundDevice_PTR_02648e80->vtable->unlockSample)
                (g_CSoundDevice_PTR_02648e80,this_ptr->buffer_id,this_ptr->locked_offset,
                 this_ptr->locked_length);
    }
    this_ptr->locked_length = 0;
    this_ptr->locked_offset = 0;
  }
  return;
}

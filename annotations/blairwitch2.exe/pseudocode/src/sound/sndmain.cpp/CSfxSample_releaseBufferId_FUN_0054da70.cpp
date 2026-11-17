// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_0054da70
// Address: 0054da70
// Address Range: [[0054da70, 0054dab1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_0054da70(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_0054da70(CSfxSample *this_ptr)

{
  if (this_ptr->buffer_id != 0) {
    if (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0) {
      (*g_CSoundDevice_PTR_02648e80->vtable->freeSample)
                (g_CSoundDevice_PTR_02648e80,this_ptr->buffer_id);
      this_ptr->buffer_id = 0;
      return;
    }
    this_ptr->buffer_id = 0;
  }
  return;
}

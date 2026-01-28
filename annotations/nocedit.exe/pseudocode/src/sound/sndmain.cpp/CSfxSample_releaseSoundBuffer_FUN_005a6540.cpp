// Name: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
// Address: 005a6540
// Address Range: [[005a6540, 005a6597]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *sample)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(CSfxSample *sample)

{
  if (sample->locked_length != 0) {
    if ((sample->buffer_id != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
      (*g_CSoundDevicePtr->vtable->unlockSample)(g_CSoundDevicePtr,sample->buffer_id);
    }
    sample->locked_length = 0;
    sample->locked_offset = 0;
  }
  return;
}

// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0
// Address: 005ae1c0
// Address Range: [[005ae1c0, 005ae267]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle)

{
  LPDIRECTSOUNDBUFFER this_ptr;
  IDirectSound3DBuffer *this_ptr_00;
  IDirectSoundBuffer *this_ptr_01;
  uint error_code;
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  char acStack_188 [384];
  
  this_ptr = g_DirectSoundHardwareSfxBuffers[sfx_handle];
  if ((this_ptr != (LPDIRECTSOUNDBUFFER)0x0) &&
     (error_code = (*this_ptr->vtable->Stop)(this_ptr), error_code != 0)) {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffe74,"DirectSux: Unable to %s.  (%s)",
               "Stop hardware sfx secondary buffer",pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_188);
    return 0;
  }
  this_ptr_00 = g_DirectSound3DBufferInterfaces[sfx_handle];
  if (this_ptr_00 != (IDirectSound3DBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_DirectSound3DBufferInterfaces[sfx_handle] = (IDirectSound3DBuffer *)0x0;
  }
  this_ptr_01 = g_DirectSoundHardwareSfxBuffers[sfx_handle];
  if (this_ptr_01 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
    g_DirectSoundHardwareSfxBuffers[sfx_handle] = (IDirectSoundBuffer *)0x0;
  }
  return 1;
}

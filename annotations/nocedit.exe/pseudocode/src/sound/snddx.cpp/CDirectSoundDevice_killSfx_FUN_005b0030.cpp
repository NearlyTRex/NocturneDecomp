// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030
// Address: 005b0030
// Address Range: [[005b0030, 005b0119]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice * this_ptr, CSfxSlot * slot)

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  LPDIRECTSOUNDBUFFER this_ptr_00;
  IDirectSound3DBuffer *this_ptr_01;
  IDirectSoundBuffer *this_ptr_02;
  uint error_code;
  char *pcVar2;
  char acStack_1a0 [400];
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  }
  else {
    this_ptr_00 = g_DirectSoundHardwareSfxBuffers[iVar1];
    if (this_ptr_00 != (LPDIRECTSOUNDBUFFER)0x0) {
      error_code = (*this_ptr_00->vtable->Stop)(this_ptr_00);
      if (error_code != 0) {
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1a0);
        return;
      }
    }
    this_ptr_01 = g_DirectSound3DBufferInterfaces[iVar1];
    if (this_ptr_01 != (IDirectSound3DBuffer *)0x0) {
      (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
      g_DirectSound3DBufferInterfaces[iVar1] = (IDirectSound3DBuffer *)0x0;
    }
    this_ptr_02 = g_DirectSoundHardwareSfxBuffers[iVar1];
    if (this_ptr_02 != (IDirectSoundBuffer *)0x0) {
      (*this_ptr_02->vtable->Release)((IUnknown *)this_ptr_02);
      g_DirectSoundHardwareSfxBuffers[iVar1] = (IDirectSoundBuffer *)0x0;
      return;
    }
  }
  return;
}

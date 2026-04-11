// Name: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660
// Address: 005ae660
// MANUAL RECONSTRUCTION
// Address Range: [[005ae660, 005ae820]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660(CDirectSoundDevice *this_ptr)

{
  uint error_code;
  char *pcVar1;
  char acStack_1d0 [400];
  DSBUFFERDESC DStack_40;
  WAVEFORMATEX local_2c;
  IDirectSoundBuffer *local_18;
  IDirectSound3DBuffer *local_14;
  
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  local_18 = (IDirectSoundBuffer *)0x0;
  local_14 = (IDirectSound3DBuffer *)0x0;
  memset(&local_2c,0,0x12);
  local_2c.wFormatTag = 1;
  local_2c.nChannels = 1;
  local_2c.nSamplesPerSec = 0x5622;
  local_2c.nBlockAlign = 2;
  local_2c.wBitsPerSample = 0x10;
  local_2c.nAvgBytesPerSec = 0xac44;
  memset(&DStack_40,0,0x14);
  DStack_40.dwSize = 0x14;
  DStack_40.dwFlags = 0x12;
  DStack_40.lpwfxFormat = &local_2c;
  DStack_40.dwBufferBytes = 0x400;
  error_code = (*g_DirectSound->vtable->CreateSoundBuffer)
                         (g_DirectSound,&DStack_40,&local_18,(LPUNKNOWN)0x0);
  if (error_code == 0) {
    (*local_18->vtable->QueryInterface)((IUnknown *)local_18,&g_IID_IDirectSound3DBuffer,(void **)&local_14);
    if (local_14 == (IDirectSound3DBuffer *)0x0) {
      if (local_18 != (IDirectSoundBuffer *)0x0) {
        (*local_18->vtable->Release)((IUnknown *)local_18);
      }
    }
    else {
      (*local_14->vtable->QueryInterface)((IUnknown *)local_14,&g_IID_IKsPropertySet,(void **)&g_DirectSoundPropertySet);
      if (local_18 != (IDirectSoundBuffer *)0x0) {
        (*local_18->vtable->Release)((IUnknown *)local_18);
        local_18 = (IDirectSoundBuffer *)0x0;
      }
      if (local_14 != (IDirectSound3DBuffer *)0x0) {
        (*local_14->vtable->Release)((IUnknown *)local_14);
        return;
      }
    }
  }
  else {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
    _sprintf
              (acStack_1d0,"DirectSux: Unable to %s.  (%s)","Create temp secondary buffer for property set creation",
               pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1d0);
  }
  return;
}

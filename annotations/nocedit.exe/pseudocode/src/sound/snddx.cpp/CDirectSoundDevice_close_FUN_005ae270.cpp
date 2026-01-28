// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
// Address: 005ae270
// Address Range: [[005ae270, 005ae33c]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice *this_ptr)

{
  IDirectSoundBuffer *this_ptr_00;
  int iVar1;
  IDirectSoundBuffer **ppIVar2;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  ppIVar2 = g_DirectSoundSampleBuffers;
  do {
    this_ptr_00 = *ppIVar2;
    if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
      (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
      *ppIVar2 = (IDirectSoundBuffer *)0x0;
    }
    ppIVar2 = ppIVar2 + 1;
  } while (ppIVar2 != g_DirectSoundHardwareSfxBuffers);
  if (g_DirectSound3DListener != (IDirectSound3DListener *)0x0) {
    (*g_DirectSound3DListener->vtable->Release)((IUnknown *)g_DirectSound3DListener);
    g_DirectSound3DListener = (IDirectSound3DListener *)0x0;
  }
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer);
    g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundPrimaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundPrimaryBuffer);
    g_DirectSoundPrimaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (*g_DirectSound->vtable->Release)((IUnknown *)g_DirectSound);
  g_DirectSound = (IDirectSound *)0x0;
  return (uint)(iVar1 != 0);
}

// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060
// Address: 00555060
// Address Range: [[00555060, 00555120]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  int buffer_id;
  int iVar2;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  buffer_id = 0;
  do {
    iVar2 = buffer_id + 1;
    (*((this_ptr->base).vtable)->freeSample)(&this_ptr->base,buffer_id);
    buffer_id = iVar2;
  } while (iVar2 < 0x41);
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

// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_0055ac00
// Address: 0055ac00
// Address Range: [[0055ac00, 0055acc0]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_0055ac00(CDirectSoundDevice *this_ptr)

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
  if (g_IDirectSound3DListener_PTR_02cf49d0 != (IDirectSound3DListener *)0x0) {
    (*g_IDirectSound3DListener_PTR_02cf49d0->vtable->Release)
              ((IUnknown *)g_IDirectSound3DListener_PTR_02cf49d0);
    g_IDirectSound3DListener_PTR_02cf49d0 = (IDirectSound3DListener *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02cf49cc != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02cf49cc);
    g_IDirectSoundBuffer_PTR_02cf49cc = (IDirectSoundBuffer *)0x0;
  }
  if (g_IKsPropertySet_PTR_02cf49d4 != (IKsPropertySet *)0x0) {
    (*g_IKsPropertySet_PTR_02cf49d4->vtable->Release)((IUnknown *)g_IKsPropertySet_PTR_02cf49d4);
    g_IKsPropertySet_PTR_02cf49d4 = (IKsPropertySet *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02cf49c8 != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02cf49c8->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02cf49c8);
    g_IDirectSoundBuffer_PTR_02cf49c8 = (IDirectSoundBuffer *)0x0;
  }
  if (g_IDirectSound_PTR_02cf49c4 == (IDirectSound *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (*g_IDirectSound_PTR_02cf49c4->vtable->Release)((IUnknown *)g_IDirectSound_PTR_02cf49c4);
  g_IDirectSound_PTR_02cf49c4 = (IDirectSound *)0x0;
  return (uint)(iVar1 != 0);
}

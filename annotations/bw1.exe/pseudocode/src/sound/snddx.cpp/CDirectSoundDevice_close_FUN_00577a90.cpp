// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00577a90
// Address: 00577a90
// Address Range: [[00577a90, 00577b50]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(CDirectSoundDevice *this_ptr)

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
  if (g_IDirectSound3DListener_PTR_02c81da0 != (IDirectSound3DListener *)0x0) {
    (*g_IDirectSound3DListener_PTR_02c81da0->vtable->Release)
              ((IUnknown *)g_IDirectSound3DListener_PTR_02c81da0);
    g_IDirectSound3DListener_PTR_02c81da0 = (IDirectSound3DListener *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02c81d9c != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02c81d9c->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02c81d9c);
    g_IDirectSoundBuffer_PTR_02c81d9c = (IDirectSoundBuffer *)0x0;
  }
  if (g_IKsPropertySet_PTR_02c81da4 != (IKsPropertySet *)0x0) {
    (*g_IKsPropertySet_PTR_02c81da4->vtable->Release)((IUnknown *)g_IKsPropertySet_PTR_02c81da4);
    g_IKsPropertySet_PTR_02c81da4 = (IKsPropertySet *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02c81d98 != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02c81d98->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02c81d98);
    g_IDirectSoundBuffer_PTR_02c81d98 = (IDirectSoundBuffer *)0x0;
  }
  if (g_IDirectSound_PTR_02c81d94 == (IDirectSound *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (*g_IDirectSound_PTR_02c81d94->vtable->Release)((IUnknown *)g_IDirectSound_PTR_02c81d94);
  g_IDirectSound_PTR_02c81d94 = (IDirectSound *)0x0;
  return (uint)(iVar1 != 0);
}

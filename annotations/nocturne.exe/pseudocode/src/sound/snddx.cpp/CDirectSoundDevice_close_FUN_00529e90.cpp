// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90
// Address: 00529e90
// Address Range: [[00529e90, 00529f5c]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(CDirectSoundDevice *this_ptr)

{
  IDirectSoundBuffer *this_ptr_00;
  int iVar1;
  IDirectSoundBuffer **ppIVar2;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  ppIVar2 = g_IDirectSoundBuffer_PTR_ARRAY_02dc9244;
  do {
    this_ptr_00 = *ppIVar2;
    if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
      (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
      *ppIVar2 = (IDirectSoundBuffer *)0x0;
    }
    ppIVar2 = ppIVar2 + 1;
  } while (ppIVar2 != g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8);
  if (g_IDirectSound3DListener_PTR_02dc9220 != (IDirectSound3DListener *)0x0) {
    (*g_IDirectSound3DListener_PTR_02dc9220->vtable->Release)
              ((IUnknown *)g_IDirectSound3DListener_PTR_02dc9220);
    g_IDirectSound3DListener_PTR_02dc9220 = (IDirectSound3DListener *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02dc921c != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02dc921c->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02dc921c);
    g_IDirectSoundBuffer_PTR_02dc921c = (IDirectSoundBuffer *)0x0;
  }
  if (g_IKsPropertySet_PTR_02dc9224 != (IKsPropertySet *)0x0) {
    (*g_IKsPropertySet_PTR_02dc9224->vtable->Release)((IUnknown *)g_IKsPropertySet_PTR_02dc9224);
    g_IKsPropertySet_PTR_02dc9224 = (IKsPropertySet *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02dc9218 != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02dc9218->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02dc9218);
    g_IDirectSoundBuffer_PTR_02dc9218 = (IDirectSoundBuffer *)0x0;
  }
  if (g_IDirectSound_PTR_02dc9214 == (IDirectSound *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (*g_IDirectSound_PTR_02dc9214->vtable->Release)((IUnknown *)g_IDirectSound_PTR_02dc9214);
  g_IDirectSound_PTR_02dc9214 = (IDirectSound *)0x0;
  return (uint)(iVar1 != 0);
}

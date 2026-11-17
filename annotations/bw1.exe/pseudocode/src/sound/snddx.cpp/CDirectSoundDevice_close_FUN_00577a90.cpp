// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00577a90
// Address: 00577a90
// Address Range: [[00577a90, 00577b50]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  if (_DAT_02c81da0 != (int *)0x0) {
    (**(code **)(*_DAT_02c81da0 + 8))(_DAT_02c81da0);
    _DAT_02c81da0 = (int *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_02c81d9c != (IDirectSoundBuffer *)0x0) {
    (*g_IDirectSoundBuffer_PTR_02c81d9c->vtable->Release)
              ((IUnknown *)g_IDirectSoundBuffer_PTR_02c81d9c);
    g_IDirectSoundBuffer_PTR_02c81d9c = (IDirectSoundBuffer *)0x0;
  }
  if (_DAT_02c81da4 != (int *)0x0) {
    (**(code **)(*_DAT_02c81da4 + 8))(_DAT_02c81da4);
    _DAT_02c81da4 = (int *)0x0;
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

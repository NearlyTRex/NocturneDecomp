// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00554e50
// Address: 00554e50
// Address Range: [[00554e50, 00554f7e]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(int sfx_handle)

{
  LPDIRECTSOUNDBUFFER this_ptr;
  IDirectSoundBuffer *pIVar1;
  IDirectSoundBuffer *this_ptr_00;
  IDirectSoundBuffer **ppIVar2;
  uint uVar3;
  char acStack_1a0 [400];
  
  ppIVar2 = g_IDirectSoundBuffer_PTR_ARRAY_0264ac10 + sfx_handle * 9;
  this_ptr = *ppIVar2;
  uVar3 = 1;
  if (this_ptr != (LPDIRECTSOUNDBUFFER)0x0) {
    uVar3 = (*this_ptr->vtable->Stop)(this_ptr);
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar3);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_1a0);
    }
    uVar3 = (uint)(uVar3 == 0);
    pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 1];
    if (pIVar1 != (IDirectSoundBuffer *)0x0) {
      (*pIVar1->vtable->Release)((IUnknown *)pIVar1);
      g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 1] = (IDirectSoundBuffer *)0x0;
    }
    pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 2];
    if (g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 4] != (IDirectSoundBuffer *)0x0) {
      g_IDirectSoundBuffer_PTR_ARRAY_0264ac10
      [(int)g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 4] * 9 + 3] =
           g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 3];
    }
    if ((IDirectSoundBuffer *)sfx_handle ==
        g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[(int)pIVar1 * 6 + 1]) {
      g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[(int)pIVar1 * 6 + 1] =
           g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 4];
    }
    else {
      g_IDirectSoundBuffer_PTR_ARRAY_0264ac10
      [(int)g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 3] * 9 + 4] =
           g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 4];
    }
    this_ptr_00 = *ppIVar2;
    if ((this_ptr_00 != g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[(int)pIVar1 * 6]) &&
       (this_ptr_00 != (IDirectSoundBuffer *)0x0)) {
      (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
      *ppIVar2 = (IDirectSoundBuffer *)0x0;
    }
  }
  *ppIVar2 = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 4] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 3] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[sfx_handle * 9 + 2] = (IDirectSoundBuffer *)0x0;
  return uVar3;
}

// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_00578cc0
// Address: 00578cc0
// Address Range: [[00578cc0, 00578f45]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_00578cc0(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_00578cc0(CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  IDirectSoundBuffer *pIVar1;
  int iVar2;
  uint uVar3;
  IDirectSoundBuffer *sfx_handle;
  IDirectSoundBuffer **ppIVar4;
  LPLPDIRECTSOUNDBUFFER ppDSBufferDuplicate;
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if ((((sample_buffer_id < 1) || (0x40 < sample_buffer_id)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6] == (IDirectSoundBuffer *)0x0))
     || ((int)g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 2] < 1)) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\snddx.cpp";
    g_INT_01d1d404 = 0x47b;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::allocateSfx - Invalid sample handle: %d");
  }
  if (g_IDirectSound_PTR_02c81d94 == (IDirectSound *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\snddx.cpp";
    g_INT_01d1d404 = 0x47c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  sfx_handle = (IDirectSoundBuffer *)0x1;
  iVar2 = 0x24;
  pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[9];
  while (pIVar1 != (IDirectSoundBuffer *)0x0) {
    sfx_handle = (IDirectSoundBuffer *)((int)&sfx_handle->vtable + 1);
    if (0x45b < iVar2 + 0x24) break;
    pIVar1 = *(IDirectSoundBuffer **)((int)g_IDirectSoundBuffer_PTR_ARRAY_02c823e0 + iVar2 + 0x24);
    iVar2 = iVar2 + 0x24;
  }
  if (0x1e < (int)sfx_handle) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  ppIVar4 = g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4 + sample_buffer_id * 6;
  ppDSBufferDuplicate = g_IDirectSoundBuffer_PTR_ARRAY_02c823e0 + (int)sfx_handle * 9;
  for (pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1];
      (pIVar1 != (IDirectSoundBuffer *)0x0 &&
      (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)pIVar1 * 9] != *ppIVar4));
      pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)pIVar1 * 9 + 4]) {
  }
  if (pIVar1 == (IDirectSoundBuffer *)0x0) {
    *ppDSBufferDuplicate = *ppIVar4;
    g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 2] =
         (IDirectSoundBuffer *)sample_buffer_id;
    if (g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1] !=
        (IDirectSoundBuffer *)0x0) {
      g_IDirectSoundBuffer_PTR_ARRAY_02c823e0
      [(int)g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1] * 9 + 3] = sfx_handle;
    }
  }
  else {
    uVar3 = (*g_IDirectSound_PTR_02c81d94->vtable->DuplicateSoundBuffer)
                      (g_IDirectSound_PTR_02c81d94,*ppIVar4,ppDSBufferDuplicate);
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1a0);
      return 0;
    }
    if (*ppDSBufferDuplicate == (IDirectSoundBuffer *)0x0) {
      return 0;
    }
    g_IDirectSoundBuffer_PTR_ARRAY_02c823e0
    [(int)g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1] * 9 + 3] = sfx_handle;
    g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 2] =
         (IDirectSoundBuffer *)sample_buffer_id;
  }
  pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1];
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 3] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 4] = pIVar1;
  g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[sample_buffer_id * 6 + 1] = sfx_handle;
  if (_DAT_02c81da0 != 0) {
    uVar3 = (*(*ppDSBufferDuplicate)->vtable->QueryInterface)
                      ((IUnknown *)*ppDSBufferDuplicate,&g_IID_IDirectSound3DBuffer,
                       g_IDirectSoundBuffer_PTR_ARRAY_02c823e0 + (int)sfx_handle * 9 + 1);
    if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
      _sprintf(acStack_330,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_330);
    }
    if (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 1] ==
        (IDirectSoundBuffer *)0x0) {
      sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00577880((int)sfx_handle);
      return 0;
    }
  }
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 7] =
       (IDirectSoundBuffer *)0xffffffff;
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 8] =
       (IDirectSoundBuffer *)0xffffffff;
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 6] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[(int)sfx_handle * 9 + 5] = (IDirectSoundBuffer *)0x0;
  return (int)sfx_handle;
}

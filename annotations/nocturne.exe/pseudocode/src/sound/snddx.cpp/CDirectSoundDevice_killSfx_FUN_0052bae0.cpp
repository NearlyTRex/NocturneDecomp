// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0
// Address: 0052bae0
// Address Range: [[0052bae0, 0052bbc9]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  LPDIRECTSOUNDBUFFER this_ptr_00;
  int *piVar2;
  IDirectSoundBuffer *this_ptr_01;
  uint error_code;
  char *pcVar3;
  char acStack_1a0 [400];
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_INT_ARRAY_02dc9324[iVar1] == 0)) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  }
  else {
    this_ptr_00 = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1];
    if (this_ptr_00 != (LPDIRECTSOUNDBUFFER)0x0) {
      error_code = (*this_ptr_00->vtable->Stop)(this_ptr_00);
      if (error_code != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
        _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1a0);
        return;
      }
    }
    piVar2 = (int *)g_INT_ARRAY_02dc9324[iVar1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      g_INT_ARRAY_02dc9324[iVar1] = 0;
    }
    this_ptr_01 = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1];
    if (this_ptr_01 != (IDirectSoundBuffer *)0x0) {
      (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
      g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1] = (IDirectSoundBuffer *)0x0;
      return;
    }
  }
  return;
}

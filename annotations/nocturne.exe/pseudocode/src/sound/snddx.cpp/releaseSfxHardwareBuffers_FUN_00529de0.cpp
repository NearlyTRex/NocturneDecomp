// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00529de0
// Address: 00529de0
// Address Range: [[00529de0, 00529e87]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int sfx_handle)

{
  LPDIRECTSOUNDBUFFER this_ptr;
  int *piVar1;
  IDirectSoundBuffer *this_ptr_00;
  uint error_code;
  char *pcVar2;
  char acStack_198 [400];
  
  this_ptr = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[sfx_handle];
  if ((this_ptr != (LPDIRECTSOUNDBUFFER)0x0) &&
     (error_code = (*this_ptr->vtable->Stop)(this_ptr), error_code != 0)) {
    pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
               pcVar2);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_198);
    return 0;
  }
  piVar1 = (int *)g_INT_ARRAY_02dc9324[sfx_handle];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    g_INT_ARRAY_02dc9324[sfx_handle] = 0;
  }
  this_ptr_00 = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[sfx_handle];
  if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[sfx_handle] = (IDirectSoundBuffer *)0x0;
  }
  return 1;
}

// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_00556f80
// Address: 00556f80
// Address Range: [[00556f80, 0055709d]]
// Convention: __cdecl
// Signature: double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_00556f80(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_00556f80(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  uint error_code;
  int iVar1;
  char acStack_1b0 [400];
  DWORD DStack_20;
  DWORD aDStack_1c [3];
  
  iVar1 = slot->hardware_buffer_handle;
  if (((iVar1 < 1) || (0x1e < iVar1)) ||
     (g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[iVar1 * 9] == (IDirectSoundBuffer *)0x0)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\snddx.cpp";
    g_INT_01d046a4 = 0x601;
    core_main_c_displayErrorAndQuit_FUN_004e4500("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  if (slot->sample != (CSfxSample *)0x0) {
    error_code = (*g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[iVar1 * 9]->vtable->GetCurrentPosition)
                           (g_IDirectSoundBuffer_PTR_ARRAY_0264ac10[iVar1 * 9],aDStack_1c,&DStack_20
                           );
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(error_code);
      _sprintf(acStack_1b0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_1b0);
      return -1.0;
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70(slot->sample,aDStack_1c[0]);
    return (double)iVar1;
  }
  return -1.0;
}

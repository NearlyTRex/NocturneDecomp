// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005799b0
// Address: 005799b0
// Address Range: [[005799b0, 00579acd]]
// Convention: __cdecl
// Signature: double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005799b0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005799b0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int *piVar1;
  uint error_code;
  int iVar2;
  int iStack_28;
  
  iVar2 = slot->hardware_buffer_handle;
  if (((iVar2 < 1) || (0x1e < iVar2)) || (*(int *)(iVar2 * 0x24 + 0x2c823e0) == 0)) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x601;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  if (slot->sample != (CSfxSample *)0x0) {
    piVar1 = *(int **)(iVar2 * 0x24 + 0x2c823e0);
    error_code = (**(code **)(*piVar1 + 0x10))(piVar1);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(error_code);
      _sprintf(&stack0xfffffe44,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(&stack0xfffffe44);
      return -1.0;
    }
    iVar2 = sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005723e0(slot->sample,iStack_28);
    return (double)iVar2;
  }
  return -1.0;
}

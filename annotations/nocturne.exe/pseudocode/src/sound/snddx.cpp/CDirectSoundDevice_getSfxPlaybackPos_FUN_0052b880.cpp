// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
// Address: 0052b880
// Address Range: [[0052b880, 0052b999]]
// Convention: __cdecl
// Signature: double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char acStack_1b0 [408];
  DWORD local_18;
  uint local_14;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_INT_ARRAY_02dc9324[iVar1] == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 935;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  uVar2 = (*g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1]->vtable->GetCurrentPosition)
                    (g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar1],&local_14,&local_18);
  if (uVar2 != 0) {
    pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
    _sprintf(acStack_1b0,"DirectSux: Unable to %s.  (%s)","Get playback cursor of hardware sfx secondary buffer",
               pcVar3);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1b0);
    return -1.0;
  }
  uVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(slot->sample);
  return (double)(local_14 / uVar2);
}

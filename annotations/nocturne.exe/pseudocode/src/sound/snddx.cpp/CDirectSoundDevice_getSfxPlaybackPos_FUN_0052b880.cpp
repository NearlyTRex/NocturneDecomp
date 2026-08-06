// Name: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
// Address: 0052b880
// Address Range: [[0052b880, 0052b999]]
// Convention: __cdecl
// Signature: double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

double __cdecl sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  uint uStack_20;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 935;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  piVar2 = *(int **)(iVar1 * 4 + 0x2dc92a8);
  uVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
  if (uVar3 != 0) {
    pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar3);
    _sprintf(&stack0xfffffe44,"DirectSux: Unable to %s.  (%s)",
               "Get playback cursor of hardware sfx secondary buffer",pcVar4);
    sound_sndmain_cpp_FUN_00529980(&stack0xfffffe44);
    return -1.0;
  }
  uVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(slot->sample);
  return (double)(uStack_20 / uVar3);
}

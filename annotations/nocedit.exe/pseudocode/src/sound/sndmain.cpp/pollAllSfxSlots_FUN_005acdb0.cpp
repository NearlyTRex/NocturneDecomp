// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0
// Address: 005acdb0
// Address Range: [[005acdb0, 005ace81]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_005acdb0(void)

{
  uint uVar1;
  int iVar2;
  CSfxSlot *this_ptr;
  float local_14;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1718;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530();
  iVar2 = g_SoundStartTime;
  g_SoundStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  local_14 = 0.0;
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 != 0) {
    local_14 = (float)(g_SoundStartTime - iVar2) * (float)8.4771050347222196e-07;
    if (local_14 < 0.0) {
      local_14 = 0.0;
    }
    if ((float)0.25 < local_14) {
      local_14 = 0.25;
    }
  }
  this_ptr = g_SfxSlots;
  do {
    iVar2 = sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,local_14);
    if (iVar2 != 0) {
      sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(this_ptr);
    }
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSlot *)&g_SfxLastSlot);
  return;
}

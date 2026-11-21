// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40
// Address: 00576f40
// Address Range: [[00576f40, 00577039]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 6627;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = iVar1 - g_SoundStartTime;
  if ((iVar3 < 0) || (0x1cccb < iVar3)) {
    g_SoundStartTime = iVar1;
    if (g_INT_02c7fc8c == 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0();
    }
    local_18 = 0.0;
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      local_18 = (float)iVar3 * 8.477105e-07f;
      if (0.0 <= local_18) {
        if (0.25f < local_18) {
          local_18 = 0.25;
        }
      }
      else {
        local_18 = 0.0;
      }
    }
    this_ptr = g_CSfxSlot_ARRAY_02c745ec;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,local_18);
      if (iVar1 != 0) {
        sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00571f10(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]));
  }
  return;
}

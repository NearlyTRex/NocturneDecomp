// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0
// Address: 0055a0b0
// Address Range: [[0055a0b0, 0055a1a9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (g_INT_02cf341c < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x19f6;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = iVar1 - g_INT_02cf3420;
  if ((iVar3 < 0) || (0x1cccb < iVar3)) {
    g_INT_02cf3420 = iVar1;
    if (g_INT_02cf28bc == 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005526d0();
    }
    local_18 = 0.0;
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
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
    this_ptr = g_CSfxSlot_ARRAY_02ce721c;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,local_18);
      if (iVar1 != 0) {
        sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00555410(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]));
  }
  return;
}

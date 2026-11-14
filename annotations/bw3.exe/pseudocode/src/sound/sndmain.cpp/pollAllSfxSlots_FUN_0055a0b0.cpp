// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0
// Address: 0055a0b0
// Address Range: [[0055a0b0, 0055a1a9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_0055a0b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19f6;
    core_main_c_FUN_004e4330("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar3 = iVar1 - _DAT_02cf3420;
  if ((iVar3 < 0) || (0x1cccb < iVar3)) {
    _DAT_02cf3420 = iVar1;
    if (_DAT_02cf28bc == 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005526d0();
    }
    local_18 = 0.0;
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
    if (0 < (int)uVar2) {
      local_18 = (float)iVar3 * _DAT_005d3f0e;
      if (0.0 <= local_18) {
        if (_DAT_005d3f12 < local_18) {
          local_18 = 0.25;
        }
      }
      else {
        local_18 = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x2ce721c;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,local_18);
      if (iVar1 != 0) {
        sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00555410(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_02ceb91c);
  }
  return;
}

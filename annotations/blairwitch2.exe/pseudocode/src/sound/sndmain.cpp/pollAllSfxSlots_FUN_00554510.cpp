// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510
// Address: 00554510
// Address Range: [[00554510, 00554609]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00554510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00554510(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x19ec;
    core_main_c_FUN_004e4500("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar3 = iVar1 - _DAT_02649020;
  if ((iVar3 < 0) || (0x1cccb < iVar3)) {
    _DAT_02649020 = iVar1;
    if (_DAT_026484bc == 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70();
    }
    local_18 = 0.0;
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
    if (0 < (int)uVar2) {
      local_18 = (float)iVar3 * _DAT_005e941a;
      if (0.0 <= local_18) {
        if (_DAT_005e941e < local_18) {
          local_18 = 0.25;
        }
      }
      else {
        local_18 = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x263cf1c;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,local_18);
      if (iVar1 != 0) {
        sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_0054f8a0(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_0264161c);
  }
  return;
}

// Name: sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40
// Address: 00576f40
// Address Range: [[00576f40, 00577039]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllSfxSlots_FUN_00576f40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  float local_18;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x19e3;
    core_main_c_FUN_005030e0("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar3 = iVar1 - _DAT_02c807f0;
  if ((iVar3 < 0) || (0x1cccb < iVar3)) {
    _DAT_02c807f0 = iVar1;
    if (_DAT_02c7fc8c == 0) {
      sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0();
    }
    local_18 = 0.0;
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      local_18 = (float)iVar3 * _DAT_005f4614;
      if (0.0 <= local_18) {
        if (_DAT_005f4618 < local_18) {
          local_18 = 0.25;
        }
      }
      else {
        local_18 = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x2c745ec;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,local_18);
      if (iVar1 != 0) {
        sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_00571f10(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_02c78cec);
  }
  return;
}

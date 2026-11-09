// Name: sound_sndmain.cpp_FUN_00576f40
// Address: 00576f40
// Address Range: [[00576f40, 00577039]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00576f40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00576f40(void)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  CSfxSlot *this_ptr;
  float delta_time;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x19e3;
    core_main_c_FUN_005030e0("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_FUN_005b2420();
  iVar2 = iVar1 - _DAT_02c807f0;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02c807f0 = iVar1;
    if (_DAT_02c7fc8c == 0) {
      sound_sndmain_cpp_FUN_0056f1e0();
    }
    delta_time = 0.0;
    sound_sndmain_cpp_FUN_00575560(0);
    if (0 < extraout_EAX) {
      delta_time = (float)iVar2 * _DAT_005f4614;
      if (0.0 <= delta_time) {
        if (_DAT_005f4618 < delta_time) {
          delta_time = 0.25;
        }
      }
      else {
        delta_time = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x2c745ec;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,delta_time);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_00571f10(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_02c78cec);
  }
  return;
}

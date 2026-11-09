// Name: sound_sndmain.cpp_FUN_00554510
// Address: 00554510
// Address Range: [[00554510, 00554609]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00554510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00554510(void)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  CSfxSlot *this_ptr;
  float delta_time;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x19ec;
    core_main_c_FUN_004e4500("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  iVar2 = iVar1 - _DAT_02649020;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02649020 = iVar1;
    if (_DAT_026484bc == 0) {
      sound_sndmain_cpp_FUN_0054cb70();
    }
    delta_time = 0.0;
    sound_sndmain_cpp_FUN_00552b30(0);
    if (0 < extraout_EAX) {
      delta_time = (float)iVar2 * _DAT_005e941a;
      if (0.0 <= delta_time) {
        if (_DAT_005e941e < delta_time) {
          delta_time = 0.25;
        }
      }
      else {
        delta_time = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x263cf1c;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,delta_time);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_0054f8a0(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_0264161c);
  }
  return;
}

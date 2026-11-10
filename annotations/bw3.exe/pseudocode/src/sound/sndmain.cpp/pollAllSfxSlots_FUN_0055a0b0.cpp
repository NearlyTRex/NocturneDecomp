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
  int extraout_EAX;
  int iVar2;
  CSfxSlot *this_ptr;
  float delta_time;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x19f6;
    core_main_c_FUN_004e4330("SfxSlot::pollSfx - must be locked!");
  }
  iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar2 = iVar1 - _DAT_02cf3420;
  if ((iVar2 < 0) || (0x1cccb < iVar2)) {
    _DAT_02cf3420 = iVar1;
    if (_DAT_02cf28bc == 0) {
      sound_sndmain_cpp_FUN_005526d0();
    }
    delta_time = 0.0;
    sound_sndmain_cpp_FUN_005586d0(0);
    if (0 < extraout_EAX) {
      delta_time = (float)iVar2 * _DAT_005d3f0e;
      if (0.0 <= delta_time) {
        if (_DAT_005d3f12 < delta_time) {
          delta_time = 0.25;
        }
      }
      else {
        delta_time = 0.0;
      }
    }
    this_ptr = (CSfxSlot *)0x2ce721c;
    do {
      iVar1 = sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,delta_time);
      if (iVar1 != 0) {
        sound_sndmain_cpp_FUN_00555410(this_ptr);
      }
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSlot *)&DAT_02ceb91c);
  }
  return;
}

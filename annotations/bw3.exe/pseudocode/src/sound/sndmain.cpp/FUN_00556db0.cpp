// Name: sound_sndmain.cpp_FUN_00556db0
// Address: 00556db0
// Address Range: [[00556db0, 00556e24]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00556db0(int channel_index,int enable_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00556db0(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1136;
    core_main_c_FUN_004e4330("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(channel_index * 4 + 0x2cf2940) = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_FUN_00558e90();
    iVar1 = 0;
    do {
      if (channel_index == *(int *)(iVar1 + 0x2ce721c)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270((CSfxSlot *)(iVar1 + 0x2ce721c));
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    sound_sndmain_cpp_FUN_00556fd0();
  }
  return;
}

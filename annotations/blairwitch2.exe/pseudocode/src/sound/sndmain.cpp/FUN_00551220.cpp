// Name: sound_sndmain.cpp_FUN_00551220
// Address: 00551220
// Address Range: [[00551220, 00551294]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00551220(int channel_index,int enable_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00551220(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x112e;
    core_main_c_FUN_004e4500("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(channel_index * 4 + 0x2648540) = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_005532f0();
    iVar1 = 0;
    do {
      if (channel_index == *(int *)(iVar1 + 0x263cf1c)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700((CSfxSlot *)(iVar1 + 0x263cf1c));
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    sound_sndmain_cpp_FUN_00551440();
  }
  return;
}

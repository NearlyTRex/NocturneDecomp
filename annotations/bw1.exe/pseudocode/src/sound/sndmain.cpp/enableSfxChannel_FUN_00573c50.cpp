// Name: sound_sndmain.cpp_enableSfxChannel_FUN_00573c50
// Address: 00573c50
// Address Range: [[00573c50, 00573cc4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(int channel_index,int enable_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1125;
    core_main_c_FUN_005030e0("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(channel_index * 4 + 0x2c7fd10) = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_00575d20();
    iVar1 = 0;
    do {
      if (channel_index == *(int *)(iVar1 + 0x2c745ec)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70((CSfxSlot *)(iVar1 + 0x2c745ec));
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    sound_sndmain_cpp_FUN_00573e70();
  }
  return;
}

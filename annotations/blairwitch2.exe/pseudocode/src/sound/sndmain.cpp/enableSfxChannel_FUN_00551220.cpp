// Name: sound_sndmain.cpp_enableSfxChannel_FUN_00551220
// Address: 00551220
// Address Range: [[00551220, 00551294]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00551220(int channel_index,int enable_state)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00551220(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x112e;
    core_main_c_displayErrorAndQuit_FUN_004e4500("enableSfxChannel - invalid channel index: %d");
  }
  g_SfxChannelEnabled[channel_index] = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_005532f0();
    iVar1 = 0;
    do {
      if (channel_index ==
          *(int *)((int)g_CSfxSlot_ARRAY_0263cf1c[0].options.userdata + iVar1 + -0x44)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700
                  ((CSfxSlot *)((int)g_CSfxSlot_ARRAY_0263cf1c[0].options.userdata + iVar1 + -0x44))
        ;
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    sound_sndmain_cpp_unlockSound_FUN_00551440();
  }
  return;
}

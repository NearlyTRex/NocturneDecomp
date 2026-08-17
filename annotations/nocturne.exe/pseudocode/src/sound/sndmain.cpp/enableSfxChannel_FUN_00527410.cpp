// Name: sound_sndmain.cpp_enableSfxChannel_FUN_00527410
// Address: 00527410
// Address Range: [[00527410, 00527484]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int channel_index,int enable_state)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3922;
    core_main_c_displayErrorAndQuit_FUN_004c8440("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  *(int *)(channel_index * 4 + 0x2dc79d8) = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_00528800();
    iVar1 = 0;
    do {
      if (channel_index ==
          *(int *)((int)g_CSfxSlot_ARRAY_02dbd374[0].options.userdata + iVar1 + -0x54)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570
                  ((CSfxSlot *)((int)g_CSfxSlot_ARRAY_02dbd374[0].options.userdata + iVar1 + -0x54))
        ;
      }
      iVar1 = iVar1 + 0x120;
    } while (iVar1 != 0x4800);
    sound_sndmain_cpp_unlockSound_FUN_00528890();
  }
  return;
}

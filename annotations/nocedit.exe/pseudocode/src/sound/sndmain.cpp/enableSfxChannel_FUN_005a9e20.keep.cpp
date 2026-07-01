// Name: sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
// Address: 005a9e20
// MANUAL RECONSTRUCTION
// Address Range: [[005a9e20, 005a9e94]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(int channel_index,int enable_state)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(int channel_index,int enable_state)

{
  int iVar1;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4001;
    core_main_c_displayErrorAndQuit_FUN_00506f10("enableSfxChannel - invalid channel index: %d",channel_index);
  }
  g_SfxChannelEnabled[channel_index] = enable_state;
  if (enable_state == 0) {
    sound_sndmain_cpp_lockSound_FUN_005abd30();
    for (iVar1 = 0; iVar1 < 64; iVar1 = iVar1 + 1) {
      if (channel_index == g_SfxSlots[iVar1].options.channel_index) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(&g_SfxSlots[iVar1]);
      }
    }
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  }
  return;
}

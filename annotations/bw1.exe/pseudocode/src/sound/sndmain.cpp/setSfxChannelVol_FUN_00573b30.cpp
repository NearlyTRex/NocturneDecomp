// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00573b30
// Address: 00573b30
// Address Range: [[00573b30, 00573bbe]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(int channel_index,float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(int channel_index,float volume)

{
  CSoundDevice *pCVar1;
  uint uVar2;
  CSfxSlot *pCVar3;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x1105;
    core_main_c_displayErrorAndQuit_FUN_005030e0("setSfxChannelVol - invalid channel index: %d");
  }
  pCVar1 = g_CSoundDevice_PTR_02c80650;
  g_FLOAT_ARRAY_02c7fc90[channel_index] = volume;
  if (pCVar1 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      sound_sndmain_cpp_lockSound_FUN_00575d20();
      pCVar3 = g_CSfxSlot_ARRAY_02c745ec;
      do {
        if (((pCVar3->playback_state != 0) && (pCVar3->hardware_buffer_handle != 0)) &&
           (channel_index == (pCVar3->options).channel_index)) {
          *(byte *)&pCVar3->changed_flags = (byte)pCVar3->changed_flags | 8;
        }
        pCVar3 = pCVar3 + 1;
      } while (pCVar3 != g_CSfxSlot_ARRAY_02c745ec + sizeof(g_CSfxSlot_ARRAY_02c745ec) / sizeof(g_CSfxSlot_ARRAY_02c745ec[0]));
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return;
    }
  }
  return;
}

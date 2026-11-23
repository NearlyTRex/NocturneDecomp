// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
// Address: 00551100
// Address Range: [[00551100, 0055118e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int channel_index,float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int channel_index,float volume)

{
  CSoundDevice *pCVar1;
  uint uVar2;
  CSfxSlot *pCVar3;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 4366;
    core_main_c_displayErrorAndQuit_FUN_004e4500("setSfxChannelVol - invalid channel index: %d");
  }
  pCVar1 = g_CSoundDevicePtr;
  g_SfxChannelVolumes[channel_index] = volume;
  if (pCVar1 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
    if (0 < (int)uVar2) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      pCVar3 = g_CSfxSlot_ARRAY_0263cf1c;
      do {
        if (((pCVar3->playback_state != 0) && (pCVar3->hardware_buffer_handle != 0)) &&
           (channel_index == (pCVar3->options).channel_index)) {
          *(byte *)&pCVar3->changed_flags = (byte)pCVar3->changed_flags | 8;
        }
        pCVar3 = pCVar3 + 1;
      } while (pCVar3 != g_CSfxSlot_ARRAY_0263cf1c + sizeof(g_CSfxSlot_ARRAY_0263cf1c) / sizeof(g_CSfxSlot_ARRAY_0263cf1c[0]));
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return;
    }
  }
  return;
}

// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
// Address: 00556c90
// Address Range: [[00556c90, 00556d1e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(int channel_index,float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(int channel_index,float volume)

{
  CSoundDevice *pCVar1;
  uint uVar2;
  CSfxSlot *pCVar3;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x1116;
    core_main_c_displayErrorAndQuit_FUN_004e4330("setSfxChannelVol - invalid channel index: %d");
  }
  pCVar1 = g_CSoundDevice_PTR_02cf3280;
  g_FLOAT_ARRAY_02cf28c0[channel_index] = volume;
  if (pCVar1 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
    if (0 < (int)uVar2) {
      sound_sndmain_cpp_lockSound_FUN_00558e90();
      pCVar3 = g_CSfxSlot_ARRAY_02ce721c;
      do {
        if (((pCVar3->playback_state != 0) && (pCVar3->hardware_buffer_handle != 0)) &&
           (channel_index == (pCVar3->options).channel_index)) {
          *(byte *)&pCVar3->changed_flags = (byte)pCVar3->changed_flags | 8;
        }
        pCVar3 = pCVar3 + 1;
      } while (pCVar3 != g_CSfxSlot_ARRAY_02ce721c + sizeof(g_CSfxSlot_ARRAY_02ce721c) / sizeof(g_CSfxSlot_ARRAY_02ce721c[0]));
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return;
    }
  }
  return;
}

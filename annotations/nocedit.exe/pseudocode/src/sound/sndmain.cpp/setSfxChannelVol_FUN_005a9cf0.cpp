// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
// Address: 005a9cf0
// Address Range: [[005a9cf0, 005a9d8a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index,float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index,float volume)

{
  CSoundDevice *pCVar1;
  uint uVar2;
  CSfxSlot *slot;
  
  if ((channel_index < 0) || (0x1f < channel_index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 3969;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSfxChannelVol - invalid channel index: %d",channel_index);
  }
  pCVar1 = g_CSoundDevicePtr;
  g_SfxChannelVolumes[channel_index] = volume;
  if (pCVar1 != (CSoundDevice *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
    if (uVar2 != 0) {
      slot = g_SfxSlots;
      sound_sndmain_cpp_lockSound_FUN_005abd30();
      do {
        if (((slot->playback_state != 0) && (slot->hardware_buffer_handle != 0)) &&
           (channel_index == (slot->options).channel_index)) {
          (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,slot,8);
        }
        slot = slot + 1;
      } while (slot != g_SfxSlots + 64);
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return;
    }
  }
  return;
}

// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
// Address: 005a5d00
// Address Range: [[005a5d00, 005a5da1]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

CSfxSlot * __cdecl
sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  uint uVar2;
  CSfxSlot *slot;
  uint uVar3;
  
  uVar3 = sfx_handle >> 6;
  uVar2 = sfx_handle & 0x3f;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && (uVar2 < 0x40)) {
    slot = g_SfxSlots + uVar2;
    if (uVar3 == g_SfxSlots[uVar2].playback_state) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_005abd30();
        if ((uVar3 != g_SfxSlots[uVar2].playback_state) ||
           (g_SfxSlots[uVar2].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_005abdc0();
          return (CSfxSlot *)0x0;
        }
        if (g_SfxSlots[uVar2].hardware_buffer_handle != 0) {
          if ((g_CSoundDevicePtr != (CSoundDevice *)0x0) &&
             (iVar1 = (*g_CSoundDevicePtr->vtable->isSfxPlaying)(g_CSoundDevicePtr,slot), iVar1 != 0
             )) {
            return slot;
          }
          sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(slot);
          sound_sndmain_cpp_unlockSound_FUN_005abdc0();
          return (CSfxSlot *)0x0;
        }
      }
      return slot;
    }
  }
  return (CSfxSlot *)0x0;
}

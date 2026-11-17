// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10
// Address: 0056fa10
// Address Range: [[0056fa10, 0056facd]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  uint uVar2;
  CSfxSlot *this_ptr;
  uint uVar3;
  
  uVar3 = sfx_handle >> 6;
  uVar2 = sfx_handle & 0x3f;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && (uVar2 < 0x40)) {
    this_ptr = g_CSfxSlot_ARRAY_02c745ec + uVar2;
    if (uVar3 == g_CSfxSlot_ARRAY_02c745ec[uVar2].playback_state) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_00575d20();
        if ((uVar3 != g_CSfxSlot_ARRAY_02c745ec[uVar2].playback_state) ||
           (g_CSfxSlot_ARRAY_02c745ec[uVar2].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_00573e70();
          return (CSfxSlot *)0x0;
        }
        if (g_CSfxSlot_ARRAY_02c745ec[uVar2].hardware_buffer_handle != 0) {
          if (g_CSoundDevice_PTR_02c80650 == (CSoundDevice *)0x0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            sound_sndmain_cpp_unlockSound_FUN_00573e70();
            return (CSfxSlot *)0x0;
          }
          if ((g_CSfxSlot_ARRAY_02c745ec[uVar2].changed_flags & 0x40000000) != 0) {
            return this_ptr;
          }
          iVar1 = (*g_CSoundDevice_PTR_02c80650->vtable->isSfxPlaying)
                            (g_CSoundDevice_PTR_02c80650,this_ptr);
          if (iVar1 == 0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            sound_sndmain_cpp_unlockSound_FUN_00573e70();
            return (CSfxSlot *)0x0;
          }
        }
      }
      return this_ptr;
    }
  }
  return (CSfxSlot *)0x0;
}

// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0
// Address: 0054d3a0
// Address Range: [[0054d3a0, 0054d45d]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  uint uVar2;
  CSfxSlot *this_ptr;
  uint uVar3;
  
  uVar3 = sfx_handle >> 6;
  uVar2 = sfx_handle & 0x3f;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && (uVar2 < 0x40)) {
    this_ptr = g_CSfxSlot_ARRAY_0263cf1c + uVar2;
    if (uVar3 == g_CSfxSlot_ARRAY_0263cf1c[uVar2].playback_state) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_005532f0();
        if ((uVar3 != g_CSfxSlot_ARRAY_0263cf1c[uVar2].playback_state) ||
           (g_CSfxSlot_ARRAY_0263cf1c[uVar2].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_00551440();
          return (CSfxSlot *)0x0;
        }
        if (g_CSfxSlot_ARRAY_0263cf1c[uVar2].hardware_buffer_handle != 0) {
          if (g_CSoundDevice_PTR_02648e80 == (CSoundDevice *)0x0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            sound_sndmain_cpp_unlockSound_FUN_00551440();
            return (CSfxSlot *)0x0;
          }
          if ((g_CSfxSlot_ARRAY_0263cf1c[uVar2].changed_flags & 0x40000000) != 0) {
            return this_ptr;
          }
          iVar1 = (*g_CSoundDevice_PTR_02648e80->vtable->isSfxPlaying)
                            (g_CSoundDevice_PTR_02648e80,this_ptr);
          if (iVar1 == 0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            sound_sndmain_cpp_unlockSound_FUN_00551440();
            return (CSfxSlot *)0x0;
          }
        }
      }
      return this_ptr;
    }
  }
  return (CSfxSlot *)0x0;
}

// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
// Address: 005234b0
// Address Range: [[005234b0, 0052354a]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle,int check_hardware_playback)

{
  uint uVar1;
  int iVar2;
  CSfxSlot *this_ptr;
  uint uVar3;
  
  uVar3 = sfx_handle >> 6;
  uVar1 = sfx_handle & 0x3f;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && (uVar1 < 0x40)) {
    this_ptr = g_CSfxSlot_ARRAY_02dbd374 + uVar1;
    if (uVar3 == g_CSfxSlot_ARRAY_02dbd374[uVar1].playback_state) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_00528800();
        if ((uVar3 != g_CSfxSlot_ARRAY_02dbd374[uVar1].playback_state) ||
           (g_CSfxSlot_ARRAY_02dbd374[uVar1].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_00528890();
          return (CSfxSlot *)0x0;
        }
        if (g_CSfxSlot_ARRAY_02dbd374[uVar1].hardware_buffer_handle != 0) {
          if ((_DAT_02dc8318 != (int *)0x0) &&
             (iVar2 = (**(code **)(*_DAT_02dc8318 + 0x50))(_DAT_02dc8318,this_ptr), iVar2 != 0)) {
            return this_ptr;
          }
          sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr);
          sound_sndmain_cpp_unlockSound_FUN_00528890();
          return (CSfxSlot *)0x0;
        }
      }
      return this_ptr;
    }
  }
  return (CSfxSlot *)0x0;
}

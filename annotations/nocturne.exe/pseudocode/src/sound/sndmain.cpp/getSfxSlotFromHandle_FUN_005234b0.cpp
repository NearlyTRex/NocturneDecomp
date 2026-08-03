// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
// Address: 005234b0
// Address Range: [[005234b0, 0052354a]]
// Convention: unknown
// Signature: CSfxSlot * sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSlot * sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint param_1,int param_2)

{
  int iVar1;
  CSfxSlot *slot;
  uint uVar2;
  
  uVar2 = param_1 >> 6;
  param_1 = param_1 & 0x3f;
  if (((uVar2 != 0) && (uVar2 < 0xffffff)) && (param_1 < 0x40)) {
    slot = g_CSfxSlot_ARRAY_02dbd374 + param_1;
    if (uVar2 == g_CSfxSlot_ARRAY_02dbd374[param_1].playback_state) {
      if (param_2 != 0) {
        sound_sndmain_cpp_lockSound_FUN_00528800();
        if ((uVar2 != g_CSfxSlot_ARRAY_02dbd374[param_1].playback_state) ||
           (g_CSfxSlot_ARRAY_02dbd374[param_1].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_00528890();
          return (CSfxSlot *)0x0;
        }
        if (g_CSfxSlot_ARRAY_02dbd374[param_1].hardware_buffer_handle != 0) {
          if ((_DAT_02dc8318 != (int *)0x0) &&
             (iVar1 = (**(code **)(*_DAT_02dc8318 + 0x50))(_DAT_02dc8318,slot), iVar1 != 0)) {
            return slot;
          }
          sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(slot);
          sound_sndmain_cpp_unlockSound_FUN_00528890();
          return (CSfxSlot *)0x0;
        }
      }
      return slot;
    }
  }
  return (CSfxSlot *)0x0;
}

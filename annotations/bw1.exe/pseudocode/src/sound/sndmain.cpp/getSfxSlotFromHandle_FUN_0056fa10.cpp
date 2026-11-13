// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10
// Address: 0056fa10
// Address Range: [[0056fa10, 0056facd]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  CSfxSlot *this_ptr;
  uint uVar2;
  
  uVar2 = sfx_handle >> 6;
  if (((uVar2 != 0) && (uVar2 < 0xffffff)) && ((sfx_handle & 0x3f) < 0x40)) {
    iVar1 = (sfx_handle & 0x3f) * 0x11c;
    this_ptr = (CSfxSlot *)(iVar1 + 0x2c745ec);
    if (uVar2 == *(uint *)(&DAT_02c74650 + iVar1)) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_00575d20();
        if ((uVar2 != *(uint *)(&DAT_02c74650 + iVar1)) || (*(int *)(&DAT_02c74654 + iVar1) == 0)) {
          sound_sndmain_cpp_unlockSound_FUN_00573e70();
          return (CSfxSlot *)0x0;
        }
        if (*(int *)(&DAT_02c7464c + iVar1) != 0) {
          if (_DAT_02c80650 == (int *)0x0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            sound_sndmain_cpp_unlockSound_FUN_00573e70();
            return (CSfxSlot *)0x0;
          }
          if ((*(byte *)(iVar1 + 0x2c74707) & 0x40) != 0) {
            return this_ptr;
          }
          iVar1 = (**(code **)(*_DAT_02c80650 + 0x54))(_DAT_02c80650,this_ptr);
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

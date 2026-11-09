// Name: sound_sndmain.cpp_FUN_0054d3a0
// Address: 0054d3a0
// Address Range: [[0054d3a0, 0054d45d]]
// Convention: __cdecl
// Signature: CSfxSlot * __cdecl sound_sndmain_cpp_FUN_0054d3a0(uint sfx_handle,int check_hardware_playback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSlot * __cdecl sound_sndmain_cpp_FUN_0054d3a0(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  CSfxSlot *this_ptr;
  uint uVar2;
  
  uVar2 = sfx_handle >> 6;
  if (((uVar2 != 0) && (uVar2 < 0xffffff)) && ((sfx_handle & 0x3f) < 0x40)) {
    iVar1 = (sfx_handle & 0x3f) * 0x11c;
    this_ptr = (CSfxSlot *)(iVar1 + 0x263cf1c);
    if (uVar2 == *(uint *)(&DAT_0263cf80 + iVar1)) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_005532f0();
        if ((uVar2 != *(uint *)(&DAT_0263cf80 + iVar1)) || (*(int *)(&DAT_0263cf84 + iVar1) == 0)) {
          sound_sndmain_cpp_FUN_00551440();
          return (CSfxSlot *)0x0;
        }
        if (*(int *)(&DAT_0263cf7c + iVar1) != 0) {
          if (_DAT_02648e80 == (int *)0x0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            sound_sndmain_cpp_FUN_00551440();
            return (CSfxSlot *)0x0;
          }
          if ((*(byte *)(iVar1 + 0x263d037) & 0x40) != 0) {
            return this_ptr;
          }
          iVar1 = (**(code **)(*_DAT_02648e80 + 0x54))(_DAT_02648e80,this_ptr);
          if (iVar1 == 0) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            sound_sndmain_cpp_FUN_00551440();
            return (CSfxSlot *)0x0;
          }
        }
      }
      return this_ptr;
    }
  }
  return (CSfxSlot *)0x0;
}

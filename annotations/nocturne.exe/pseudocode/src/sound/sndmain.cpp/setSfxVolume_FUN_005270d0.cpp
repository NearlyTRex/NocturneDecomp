// Name: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
// Address: 005270d0
// Address Range: [[005270d0, 0052712a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  iVar1 = 1;
  (this_ptr->options).current_volume = volume;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,8);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar1;
}

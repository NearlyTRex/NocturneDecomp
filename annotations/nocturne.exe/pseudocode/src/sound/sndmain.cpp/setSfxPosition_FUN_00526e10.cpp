// Name: sound_sndmain.cpp_setSfxPosition_FUN_00526e10
// Address: 00526e10
// Address Range: [[00526e10, 00526e9b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).position_source_ptr = (void *)0x0;
  (this_ptr->options).position_format = 0;
  (this_ptr->options).position.x = pos_x;
  (this_ptr->options).position.y = pos_y;
  iVar1 = 1;
  (this_ptr->options).position.z = pos_z;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar1;
}

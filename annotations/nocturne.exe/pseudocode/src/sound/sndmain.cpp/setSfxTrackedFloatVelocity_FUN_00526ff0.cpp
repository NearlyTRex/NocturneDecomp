// Name: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527051]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle,CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle,CVector3f *velocity_source_ptr)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).velocity_format = 1;
  iVar1 = 1;
  (this_ptr->options).velocity_source_ptr = velocity_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar1;
}

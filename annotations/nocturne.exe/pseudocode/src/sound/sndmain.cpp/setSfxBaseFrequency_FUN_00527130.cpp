// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130
// Address: 00527130
// Address Range: [[00527130, 00527184]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(uint sfx_handle,float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(uint sfx_handle,float base_frequency)

{
  CSfxSlot *this_ptr;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).base_frequency = base_frequency;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,0x10);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

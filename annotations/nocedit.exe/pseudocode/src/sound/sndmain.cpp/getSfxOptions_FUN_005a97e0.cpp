// Name: sound_sndmain.cpp_getSfxOptions_FUN_005a97e0
// Address: 005a97e0
// Address Range: [[005a97e0, 005a981b]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle, CSfxOptions * output_options)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle,CSfxOptions *output_options)

{
  CSfxSlot *this_ptr;
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    output_options->channel_index = (this_ptr->options).channel_index;
    this_ptr = (CSfxSlot *)((int)this_ptr + (uint)bVar2 * -8 + 4);
    output_options = (CSfxOptions *)((int)output_options + (uint)bVar2 * -8 + 4);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}

// Name: sound_sndmain.cpp_getSfxOptions_FUN_005a97e0
// Address: 005a97e0
// MANUAL RECONSTRUCTION
// Address Range: [[005a97e0, 005a981b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle,CSfxOptions *output_options)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSfxOptions_FUN_005a97e0(uint sfx_handle,CSfxOptions *output_options)

{
  CSfxSlot *this_ptr;

  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  memcpy(output_options,&this_ptr->options,sizeof(CSfxOptions));
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}

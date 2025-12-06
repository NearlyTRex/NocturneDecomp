// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
// Address: 005a9b40
// Address Range: [[005a9b40, 005a9b94]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle, float base_frequency)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle,float base_frequency)

{
  CSfxSlot *this_ptr;
  float in_stack_0000000c;
  uint uStack00000018;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).base_frequency = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,0x10);
  }
  uStack00000018 = 0x5a9b8d;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}

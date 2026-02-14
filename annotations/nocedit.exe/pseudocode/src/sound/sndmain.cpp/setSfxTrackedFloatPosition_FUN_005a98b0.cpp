// Name: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0
// Address: 005a98b0
// Address Range: [[005a98b0, 005a990b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle,CVector3f *position_source_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0(uint sfx_handle,CVector3f *position_source_ptr)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).position_format = 1;
  (this_ptr->options).position_source_ptr = (CVector3d *)position_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}

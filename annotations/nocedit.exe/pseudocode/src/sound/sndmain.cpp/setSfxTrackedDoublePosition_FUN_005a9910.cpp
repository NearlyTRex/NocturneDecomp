// Name: sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910
// Address: 005a9910
// Address Range: [[005a9910, 005a996b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedDoublePosition_FUN_005a9910 (uint sfx_handle,CVector3d *position_source_ptr)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSfxTrackedDoublePosition_FUN_005a9910
          (uint sfx_handle,CVector3d *position_source_ptr)

{
  CSfxSlot *this_ptr;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).position_format = 2;
  (this_ptr->options).position_source_ptr = position_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}

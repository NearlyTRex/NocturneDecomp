// Name: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
// Address: 005a9a00
// Address Range: [[005a9a00, 005a9a61]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00(uint sfx_handle, CVector3f * velocity_source_ptr)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_005a9a00
          (uint sfx_handle,CVector3f *velocity_source_ptr)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).velocity_format = 1;
  iVar1 = 1;
  (this_ptr->options).velocity_source_ptr = (CVector3d *)velocity_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return iVar1;
}

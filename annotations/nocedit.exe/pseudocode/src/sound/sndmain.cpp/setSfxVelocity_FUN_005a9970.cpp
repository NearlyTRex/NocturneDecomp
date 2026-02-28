// Name: sound_sndmain.cpp_setSfxVelocity_FUN_005a9970
// Address: 005a9970
// Address Range: [[005a9970, 005a99fb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxVelocity_FUN_005a9970(uint sfx_handle,double vel_x,double vel_y,double vel_z)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxVelocity_FUN_005a9970(uint sfx_handle,double vel_x,double vel_y,double vel_z)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).velocity_source_ptr = (void *)0x0;
  (this_ptr->options).velocity_format = 0;
  (this_ptr->options).velocity.x = vel_x;
  (this_ptr->options).velocity.y = vel_y;
  iVar1 = 1;
  (this_ptr->options).velocity.z = vel_z;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return iVar1;
}

// Name: sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
// Address: 005a9ae0
// Address Range: [[005a9ae0, 005a9b3a]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle, float volume)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(uint sfx_handle,float volume)

{
  CSfxSlot *this_ptr;
  int iVar1;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  iVar1 = 1;
  (this_ptr->options).current_volume = volume;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,8);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return iVar1;
}

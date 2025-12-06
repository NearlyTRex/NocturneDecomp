// Name: sound_sndmain.cpp_setSfxPosition_FUN_005a9820
// Address: 005a9820
// Address Range: [[005a9820, 005a98ab]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxPosition_FUN_005a9820(uint sfx_handle, double pos_x, double pos_y, double pos_z)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSfxPosition_FUN_005a9820
          (uint sfx_handle,double pos_x,double pos_y,double pos_z)

{
  CSfxSlot *this_ptr;
  int iVar1;
  uint in_stack_00000020;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).position_source_ptr = (CVector3d *)0x0;
  (this_ptr->options).position_format = 0;
  *(uint *)&(this_ptr->options).position.x = pos_x._4_4_;
  *(double *)((int)&(this_ptr->options).position.x + 4) = pos_y;
  *(double *)((int)&(this_ptr->options).position.y + 4) = pos_z;
  iVar1 = 1;
  *(uint *)((int)&(this_ptr->options).position.z + 4) = in_stack_00000020;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return iVar1;
}

// Name: sound_sndmain.cpp_FUN_00526f60
// Address: 00526f60
// Address Range: [[00526f60, 00526feb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00526f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00526f60(void)

{
  CSfxSlot *this_ptr;
  uint uVar1;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).velocity_source_ptr = (void *)0x0;
  (this_ptr->options).velocity_format = 0;
  *(uint *)&(this_ptr->options).velocity.x = in_stack_00000008;
  *(uint *)((int)&(this_ptr->options).velocity.x + 4) = in_stack_0000000c;
  *(uint *)&(this_ptr->options).velocity.y = in_stack_00000010;
  *(uint *)((int)&(this_ptr->options).velocity.y + 4) = in_stack_00000014;
  *(uint *)&(this_ptr->options).velocity.z = in_stack_00000018;
  uVar1 = 1;
  *(uint *)((int)&(this_ptr->options).velocity.z + 4) = in_stack_0000001c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    uVar1 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,this_ptr,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return uVar1;
}

// Name: sound_sndmain.cpp_FUN_00526dd0
// Address: 00526dd0
// Address Range: [[00526dd0, 00526e0b]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00526dd0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00526dd0(void)

{
  CSfxSlot *this_ptr;
  int iVar1;
  byte bVar2;
  int *in_stack_00000008;
  
  bVar2 = 0;
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr,0.0);
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000008 = (this_ptr->options).channel_index;
    this_ptr = (CSfxSlot *)((int)this_ptr + (uint)bVar2 * -8 + 4);
    in_stack_00000008 = in_stack_00000008 + (uint)bVar2 * -2 + 1;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

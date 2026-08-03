// Name: sound_sndmain.cpp_FUN_00527200
// Address: 00527200
// Address Range: [[00527200, 00527228]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00527200(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00527200(void)

{
  CSfxSlot *pCVar1;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(in_stack_00000004,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->is_active = in_stack_00000008;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

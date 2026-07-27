// Name: sound_sndmain.cpp_FUN_00527200
// Address: 00527200
// Address Range: [[00527200, 00527228]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00527200(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00527200(void)

{
  int iVar1;
  uint in_stack_00000008;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x114) = in_stack_00000008;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

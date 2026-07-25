// Name: FUN_00527190
// Address: 00527190
// Address Range: [[00527190, 005271f1]]
// Convention: unknown
// Signature: undefined4 FUN_00527190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00527190(void)

{
  int iVar1;
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000008 < 0) || (1 < in_stack_00000008)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xef1;
    FUN_004c8440("setSfxUserData - invalid user data index: %d");
  }
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(in_stack_00000004,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + in_stack_00000008 * 4 + 0x54) = in_stack_0000000c;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

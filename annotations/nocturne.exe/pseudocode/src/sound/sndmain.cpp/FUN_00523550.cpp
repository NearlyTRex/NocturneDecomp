// Name: FUN_00523550
// Address: 00523550
// Address Range: [[00523550, 005235a3]]
// Convention: unknown
// Signature: void FUN_00523550(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00523550(void)

{
  uint in_stack_00000008;
  
  if ((7 < in_stack_00000008) && ((in_stack_00000008 < 9 || (in_stack_00000008 == 0x10)))) {
    memset();
    return;
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0x5c4;
  FUN_004c8440("generateSilence - invalid bit depth!");
  return;
}

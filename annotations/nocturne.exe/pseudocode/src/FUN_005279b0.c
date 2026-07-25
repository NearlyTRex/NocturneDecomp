// Name: FUN_005279b0
// Address: 005279b0
// Address Range: [[005279b0, 005279d6]]
// Convention: unknown
// Signature: bool FUN_005279b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool FUN_005279b0(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar1 = FUN_00522480(in_stack_00000004);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar1 != 0;
}

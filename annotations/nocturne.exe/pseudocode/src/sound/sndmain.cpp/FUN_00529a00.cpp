// Name: sound_sndmain.cpp_FUN_00529a00
// Address: 00529a00
// Address Range: [[00529a00, 00529a18]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_00529a00(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound_sndmain_cpp_FUN_00529a00(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40();
  return iVar1 * *(int *)(in_stack_00000004 + 0x138);
}

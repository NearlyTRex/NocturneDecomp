// Name: sound_mp3.cpp_FUN_004e2980
// Address: 004e2980
// Address Range: [[004e2980, 004e29c1]]
// Convention: unknown
// Signature: void sound_mp3_cpp_FUN_004e2980(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_mp3_cpp_FUN_004e2980(void)

{
  int iVar1;
  uint *in_stack_00000004;
  
  if ((_FILE *)*in_stack_00000004 == (_FILE *)0x0) {
    iVar1 = in_stack_00000004[1];
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    _fclose((_FILE *)*in_stack_00000004);
    *in_stack_00000004 = 0;
    iVar1 = in_stack_00000004[1];
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_005638d0(iVar1);
  in_stack_00000004[1] = 0;
  return;
}

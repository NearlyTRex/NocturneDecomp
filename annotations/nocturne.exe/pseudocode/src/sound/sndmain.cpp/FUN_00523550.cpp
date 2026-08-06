// Name: sound_sndmain.cpp_FUN_00523550
// Address: 00523550
// Address Range: [[00523550, 005235a3]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00523550(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_00523550(void)

{
  void *in_stack_00000004;
  uint in_stack_00000008;
  ulong in_stack_0000000c;
  int value;
  
  if (7 < in_stack_00000008) {
    if (in_stack_00000008 < 9) {
      value = 0x80;
    }
    else {
      if (in_stack_00000008 != 0x10) goto LAB_00523580;
      in_stack_0000000c = in_stack_0000000c * 2;
      value = 0;
    }
    memset(in_stack_00000004,value,in_stack_0000000c);
    return;
  }
LAB_00523580:
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 1476;
  core_main_c_displayErrorAndQuit_FUN_004c8440("generateSilence - invalid bit depth!");
  return;
}

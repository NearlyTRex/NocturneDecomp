// Name: sound_sndmain.cpp_FUN_00527190
// Address: 00527190
// Address Range: [[00527190, 005271f1]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00527190(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00527190(void)

{
  CSfxSlot *pCVar1;
  uint in_stack_00000004;
  int in_stack_00000008;
  void *in_stack_0000000c;
  
  if ((in_stack_00000008 < 0) || (1 < in_stack_00000008)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0xef1;
    core_main_c_FUN_004c8440("setSfxUserData - invalid user data index: %d");
  }
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(in_stack_00000004,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).userdata[in_stack_00000008] = in_stack_0000000c;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}

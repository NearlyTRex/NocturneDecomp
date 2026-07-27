// Name: sound_sndmain.cpp_FUN_00526150
// Address: 00526150
// Address Range: [[00526150, 005261a9]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00526150(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00526150(int param_1,uint param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xcc7;
    core_main_c_FUN_004c8440("setNextSfxUserData - invalid user data index: %d",param_1);
  }
  *(uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bcc + param_1 * 4) = param_2;
  return;
}

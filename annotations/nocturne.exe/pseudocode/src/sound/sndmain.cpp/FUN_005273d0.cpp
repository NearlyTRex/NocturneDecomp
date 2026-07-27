// Name: sound_sndmain.cpp_FUN_005273d0
// Address: 005273d0
// Address Range: [[005273d0, 0052740f]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005273d0(int param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005273d0(int param_1)

{
  if (param_1 < 0x21) {
    DAT_005bea60 = param_1;
    return;
  }
  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
  INT_01cc4804 = 0xf4c;
  core_main_c_FUN_004c8440("setNumberOfSfxChannels - too many!");
  DAT_005bea60 = param_1;
  return;
}

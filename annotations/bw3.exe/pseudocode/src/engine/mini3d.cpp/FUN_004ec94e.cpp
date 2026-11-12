// Name: engine_mini3d.cpp_FUN_004ec94e
// Address: 004ec94e
// Address Range: [[004ec94e, 004ec964]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004ec94e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004ec94e(void)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (_DAT_01c6cee8 == 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
    return extraout_EAX;
  }
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02cf6044)();
  return uVar1;
}

// Name: engine_mini3d.cpp_clear_FUN_004ec950
// Address: 004ec950
// Address Range: [[004ec950, 004ec964]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clear_FUN_004ec950(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_clear_FUN_004ec950(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
    return extraout_EAX;
  }
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6044)();
  return iVar1;
}

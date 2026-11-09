// Name: core_fire.cpp_FUN_004a13ee
// Address: 004a13ee
// Address Range: [[004a13ee, 004a141d]]
// Convention: unknown
// Signature: undefined * core_fire_cpp_FUN_004a13ee(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * core_fire_cpp_FUN_004a13ee(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c74e9c * 0x2c;
  _DAT_01c74e9c = _DAT_01c74e9c + 1;
  if (0x7ff < _DAT_01c74e9c) {
    _DAT_01c74e9c = 0;
  }
  return &DAT_01c74ea0 + iVar1;
}

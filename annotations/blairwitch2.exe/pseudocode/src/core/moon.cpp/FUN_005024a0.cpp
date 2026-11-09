// Name: core_moon.cpp_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 00502507]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_005024a0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moon_cpp_FUN_005024a0(uint param_1,float param_2)

{
  _DAT_01d1cdc4 = param_2 * (float)_DAT_005df2dd + _DAT_01d1cdc4;
  if ((float)_DAT_005df2e5 <= _DAT_01d1cdc4) {
    _DAT_01d1cdc4 = _DAT_01d1cdc4 + _DAT_005df2ed;
  }
  _DAT_01d1cdbc = _DAT_01d1cdbc + _DAT_01c2a370 * 0x20;
  _DAT_01d1cdc0 = _DAT_01d1cdc0 + _DAT_01c2a370 * 0x10;
  return;
}

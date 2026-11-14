// Name: core_moon.cpp_CMoon_update_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 00502507]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_005024a0(CMoon *this_ptr,float param_2)

{
  _DAT_01d1cdc4 = param_2 * (float)_DAT_005df2dd + _DAT_01d1cdc4;
  if ((float)_DAT_005df2e5 <= _DAT_01d1cdc4) {
    _DAT_01d1cdc4 = _DAT_01d1cdc4 + _DAT_005df2ed;
  }
  _DAT_01d1cdbc = _DAT_01d1cdbc + _DAT_01c2a370 * 0x20;
  _DAT_01d1cdc0 = _DAT_01d1cdc0 + _DAT_01c2a370 * 0x10;
  return;
}

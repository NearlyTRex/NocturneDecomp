// Name: core_moon.cpp_CMoon_update_FUN_00521dd0
// Address: 00521dd0
// Address Range: [[00521dd0, 00521e37]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_00521dd0(CMoon *this_ptr,float param_2)

{
  _DAT_01d33f6c = param_2 * (float)_DAT_005ea453 + _DAT_01d33f6c;
  if ((float)_DAT_005ea45b <= _DAT_01d33f6c) {
    _DAT_01d33f6c = _DAT_01d33f6c + _DAT_005ea463;
  }
  _DAT_01d33f64 = _DAT_01d33f64 + _DAT_01c43530 * 0x20;
  _DAT_01d33f68 = _DAT_01d33f68 + _DAT_01c43530 * 0x10;
  return;
}

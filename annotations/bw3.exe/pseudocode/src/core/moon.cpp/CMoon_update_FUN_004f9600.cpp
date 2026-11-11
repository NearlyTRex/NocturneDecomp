// Name: core_moon.cpp_CMoon_update_FUN_004f9600
// Address: 004f9600
// Address Range: [[004f9600, 004f9667]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_004f9600(CMoon *this_ptr,float param_2)

{
  _DAT_01d88644 = param_2 * (float)_DAT_005c9265 + _DAT_01d88644;
  if ((float)_DAT_005c926d <= _DAT_01d88644) {
    _DAT_01d88644 = _DAT_01d88644 + _DAT_005c9275;
  }
  _DAT_01d8863c = _DAT_01d8863c + _DAT_01c5fad0 * 0x20;
  _DAT_01d88640 = _DAT_01d88640 + _DAT_01c5fad0 * 0x10;
  return;
}

// Name: wincore_winrun.cpp_enqueueInput_FUN_005b25b0
// Address: 005b25b0
// Address Range: [[005b25b0, 005b25e9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005b25b0(int input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005b25b0(int input_value)

{
  _DAT_02c9a61c = _DAT_02c9a61c + 1;
  *(int *)(&DAT_02c9a5c4 + _DAT_02c9a61c * 4) = input_value;
  if (0x13 < _DAT_02c9a61c) {
    _DAT_02c9a61c = 0;
  }
  if ((_DAT_02c9a61c == _DAT_02c9a618) && (_DAT_02c9a618 = _DAT_02c9a618 + 1, 0x13 < _DAT_02c9a618))
  {
    _DAT_02c9a618 = 0;
  }
  return;
}

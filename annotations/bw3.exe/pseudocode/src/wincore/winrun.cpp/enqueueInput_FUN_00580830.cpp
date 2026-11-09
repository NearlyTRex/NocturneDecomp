// Name: wincore_winrun.cpp_enqueueInput_FUN_00580830
// Address: 00580830
// Address Range: [[00580830, 00580869]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00580830(int input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00580830(int input_value)

{
  _DAT_02d2032c = _DAT_02d2032c + 1;
  *(int *)(&DAT_02d202d4 + _DAT_02d2032c * 4) = input_value;
  if (0x13 < _DAT_02d2032c) {
    _DAT_02d2032c = 0;
  }
  if ((_DAT_02d2032c == _DAT_02d20328) && (_DAT_02d20328 = _DAT_02d20328 + 1, 0x13 < _DAT_02d20328))
  {
    _DAT_02d20328 = 0;
  }
  return;
}

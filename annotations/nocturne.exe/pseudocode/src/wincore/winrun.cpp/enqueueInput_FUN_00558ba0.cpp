// Name: wincore_winrun.cpp_enqueueInput_FUN_00558ba0
// Address: 00558ba0
// Address Range: [[00558ba0, 00558bd9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00558ba0(int input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00558ba0(int input_value)

{
  _DAT_02de084c = _DAT_02de084c + 1;
  *(int *)(&DAT_02de07f4 + _DAT_02de084c * 4) = input_value;
  if (0x13 < _DAT_02de084c) {
    _DAT_02de084c = 0;
  }
  if ((_DAT_02de084c == _DAT_02de0848) && (_DAT_02de0848 = _DAT_02de0848 + 1, 0x13 < _DAT_02de0848))
  {
    _DAT_02de0848 = 0;
  }
  return;
}

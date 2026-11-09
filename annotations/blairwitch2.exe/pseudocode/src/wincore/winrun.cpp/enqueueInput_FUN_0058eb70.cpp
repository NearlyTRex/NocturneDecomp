// Name: wincore_winrun.cpp_enqueueInput_FUN_0058eb70
// Address: 0058eb70
// Address Range: [[0058eb70, 0058eba9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

{
  _DAT_02662ddc = _DAT_02662ddc + 1;
  *(int *)(&DAT_02662d84 + _DAT_02662ddc * 4) = input_value;
  if (0x13 < _DAT_02662ddc) {
    _DAT_02662ddc = 0;
  }
  if ((_DAT_02662ddc == _DAT_02662dd8) && (_DAT_02662dd8 = _DAT_02662dd8 + 1, 0x13 < _DAT_02662dd8))
  {
    _DAT_02662dd8 = 0;
  }
  return;
}

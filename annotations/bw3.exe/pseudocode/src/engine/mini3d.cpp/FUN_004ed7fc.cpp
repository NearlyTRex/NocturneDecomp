// Name: engine_mini3d.cpp_FUN_004ed7fc
// Address: 004ed7fc
// Address Range: [[004ed7fc, 004ed863]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ed7fc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ed7fc(void)

{
  _DAT_01d76d00 = _DAT_01d76d00 + -1;
  if (_DAT_01d76d00 < 0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x4cf;
    core_main_c_FUN_004e4330("Matrix unbalance2");
  }
  _DAT_01d7977c = 1;
  _DAT_01d76cfc = &DAT_01d76d04 + _DAT_01d76d00 * 0x3c;
  return;
}

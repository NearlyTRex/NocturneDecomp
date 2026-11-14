// Name: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_004ed910
// Address: 004ed910
// Address Range: [[004ed910, 004ed973]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004ed910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004ed910(void)

{
  _DAT_01d76d00 = _DAT_01d76d00 + -1;
  if (_DAT_01d76d00 < 0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x505;
    core_main_c_FUN_004e4330("Matrix unbalance2");
  }
  _DAT_01d7977c = 1;
  _DAT_01d76cfc = &DAT_01d76d04 + _DAT_01d76d00 * 0x3c;
  return;
}

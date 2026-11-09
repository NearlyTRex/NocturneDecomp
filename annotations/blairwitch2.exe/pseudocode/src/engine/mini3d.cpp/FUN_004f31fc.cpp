// Name: engine_mini3d.cpp_FUN_004f31fc
// Address: 004f31fc
// Address Range: [[004f31fc, 004f3263]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f31fc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f31fc(void)

{
  _DAT_01d0991c = _DAT_01d0991c + -1;
  if (_DAT_01d0991c < 0) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x4bf;
    core_main_c_FUN_004e4500("Matrix unbalance2");
  }
  _DAT_01d0c398 = 1;
  _DAT_01d09918 = &DAT_01d09920 + _DAT_01d0991c * 0x3c;
  return;
}

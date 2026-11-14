// Name: engine_mini3d.cpp_pop_FUN_004f3200
// Address: 004f3200
// Address Range: [[004f3200, 004f3263]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pop_FUN_004f3200(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_pop_FUN_004f3200(void)

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

// Name: engine_mini3d.cpp_FUN_00512140
// Address: 00512140
// Address Range: [[00512140, 005121a3]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00512140(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00512140(void)

{
  _DAT_01d22580 = _DAT_01d22580 + -1;
  if (_DAT_01d22580 < 0) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x505;
    core_main_c_FUN_005030e0("Matrix unbalance2");
  }
  _DAT_01d24ffc = 1;
  _DAT_01d2257c = &DAT_01d22584 + _DAT_01d22580 * 0x3c;
  return;
}

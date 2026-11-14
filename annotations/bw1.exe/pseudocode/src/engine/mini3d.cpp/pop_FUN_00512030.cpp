// Name: engine_mini3d.cpp_pop_FUN_00512030
// Address: 00512030
// Address Range: [[00512030, 00512093]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_pop_FUN_00512030(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_pop_FUN_00512030(void)

{
  _DAT_01d22580 = _DAT_01d22580 + -1;
  if (_DAT_01d22580 < 0) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x4cf;
    core_main_c_FUN_005030e0("Matrix unbalance2");
  }
  _DAT_01d24ffc = 1;
  _DAT_01d2257c = &DAT_01d22584 + _DAT_01d22580 * 0x3c;
  return;
}

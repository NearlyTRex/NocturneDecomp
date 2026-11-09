// Name: engine_mini3d.cpp_FUN_00512670
// Address: 00512670
// Address Range: [[00512670, 005126c9]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00512670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00512670(void)

{
  if (_DAT_01d227dc != (void *)0x0) {
    return;
  }
  _DAT_01d227dc = FUN_005c08d0(0x9c440);
  if (_DAT_01d227dc == (void *)0x0) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x67d;
    core_main_c_FUN_005030e0("CMini3D::allocVertexList - Out of memory!");
  }
  _DAT_01d227e0 = (int)_DAT_01d227dc + 0x3fU & 0xffffffc0;
  _DAT_01d227e4 = _DAT_01d227e0;
  return;
}

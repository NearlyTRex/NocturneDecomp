// Name: engine_matrix.c_pushViewport_FUN_005090b0
// Address: 005090b0
// Address Range: [[005090b0, 00509209]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)

{
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e09c) = _DAT_01c51d38;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e0c4) = _DAT_01c51d3c;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e0ec) = _DAT_01c51d40;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e114) = _DAT_01c51d44;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e13c) = _DAT_01c51d48;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e164) = _DAT_01c51d4c;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e18c) = _DAT_01c51d50;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e1b4) = _DAT_01c51d54;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e1dc) = _DAT_01c51d58;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1dfd4) = _DAT_01c4eff8;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1dffc) = _DAT_01c4effc;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e024) = _DAT_01c4f000;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e04c) = _DAT_01c4f004;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e074) = DAT_0061b4c4;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e204) = _DAT_01c4f008;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e22c) = _DAT_01c4f010;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e254) = _DAT_01c4f00c;
  *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e27c) = _DAT_01c4f014;
  _DAT_01d1dfd0 = _DAT_01d1dfd0 + 1;
  if (9 < _DAT_01d1dfd0) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 0x540;
    core_main_c_FUN_005030e0("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401810(x,y,x + width,y + height);
  DAT_0061b4c4 = 0x10000;
  return;
}

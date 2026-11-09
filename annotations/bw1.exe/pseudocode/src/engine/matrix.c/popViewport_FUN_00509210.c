// Name: engine_matrix.c_popViewport_FUN_00509210
// Address: 00509210
// Address Range: [[00509210, 0050933f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popViewport_FUN_00509210(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_popViewport_FUN_00509210(void)

{
  _DAT_01d1dfd0 = _DAT_01d1dfd0 + -1;
  if (_DAT_01d1dfd0 < 0) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 0x56c;
    core_main_c_FUN_005030e0("3D Window unbalance");
  }
  _DAT_01c51d38 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e09c);
  _DAT_01c51d3c = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e0c4);
  _DAT_01c51d40 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e0ec);
  _DAT_01c51d44 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e114);
  _DAT_01c51d48 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e13c);
  _DAT_01c51d4c = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e164);
  _DAT_01c51d50 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e18c);
  _DAT_01c51d54 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e1b4);
  _DAT_01c51d58 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e1dc);
  _DAT_01c4eff8 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1dfd4);
  _DAT_01c4effc = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1dffc);
  _DAT_01c4f000 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e024);
  _DAT_01c4f004 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e04c);
  DAT_0061b4c4 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e074);
  _DAT_01c4f008 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e204);
  _DAT_01c4f010 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e22c);
  _DAT_01c4f00c = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e254);
  _DAT_01c4f014 = *(uint *)(_DAT_01d1dfd0 * 4 + 0x1d1e27c);
  return;
}

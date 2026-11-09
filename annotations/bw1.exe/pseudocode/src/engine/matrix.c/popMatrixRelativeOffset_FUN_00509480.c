// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_00509480
// Address: 00509480
// Address Range: [[00509480, 005094e5]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_00509480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_00509480(void)

{
  _DAT_01d1dd74 = _DAT_01d1dd74 + -1;
  if (_DAT_01d1dd74 < 0) {
    _DAT_01d1d400 = "..\\engine\\matrix.c";
    _DAT_01d1d404 = 0x5d9;
    core_main_c_FUN_005030e0("Matrix unbalance4");
  }
  _DAT_01c51d2c = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1dee0);
  _DAT_01c51d30 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df08);
  _DAT_01c51d34 = *(uint *)(_DAT_01d1dd74 * 4 + 0x1d1df30);
  return;
}

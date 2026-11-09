// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004e6ec0
// Address: 004e6ec0
// Address Range: [[004e6ec0, 004e6f25]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)

{
  _DAT_01d726a0 = _DAT_01d726a0 + -1;
  if (_DAT_01d726a0 < 0) {
    _DAT_01d71de0 = "..\\engine\\matrix.c";
    _DAT_01d71de4 = 0x5d9;
    core_main_c_FUN_004e4330("Matrix unbalance4");
  }
  _DAT_01c6e2cc = *(uint *)(_DAT_01d726a0 * 4 + 0x1d7280c);
  _DAT_01c6e2d0 = *(uint *)(_DAT_01d726a0 * 4 + 0x1d72834);
  _DAT_01c6e2d4 = *(uint *)(_DAT_01d726a0 * 4 + 0x1d7285c);
  return;
}

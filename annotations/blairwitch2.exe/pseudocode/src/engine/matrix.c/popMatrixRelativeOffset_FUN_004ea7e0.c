// Name: engine_matrix.c_popMatrixRelativeOffset_FUN_004ea7e0
// Address: 004ea7e0
// Address Range: [[004ea7e0, 004ea845]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ea7e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ea7e0(void)

{
  _DAT_01d05014 = _DAT_01d05014 + -1;
  if (_DAT_01d05014 < 0) {
    _DAT_01d046a0 = "..\\engine\\matrix.c";
    _DAT_01d046a4 = 0x5d9;
    core_main_c_FUN_004e4500("Matrix unbalance4");
  }
  _DAT_01c38b6c = *(uint *)(_DAT_01d05014 * 4 + 0x1d05180);
  _DAT_01c38b70 = *(uint *)(_DAT_01d05014 * 4 + 0x1d051a8);
  _DAT_01c38b74 = *(uint *)(_DAT_01d05014 * 4 + 0x1d051d0);
  return;
}

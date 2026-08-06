// Name: engine_matrix.c_matrixPush_FUN_004cdac0
// Address: 004cdac0
// Address Range: [[004cdac0, 004cdbbe]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void)

{
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = _DAT_01c039b8;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5308) = _DAT_01c039bc;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5330) = _DAT_01c039c0;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5358) = _DAT_01c039dc;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5380) = _DAT_01c039e0;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc53a8) = _DAT_01c039e4;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5178) = _DAT_01c039e8;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51a0) = _DAT_01c039ec;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51c8) = _DAT_01c039f0;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc51f0) = _DAT_01c039f4;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5218) = _DAT_01c039f8;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5240) = _DAT_01c039fc;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5268) = _DAT_01c03a00;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc5290) = _DAT_01c03a04;
  *(uint *)(_DAT_01cc5174 * 4 + 0x1cc52b8) = _DAT_01c03a08;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  if (_DAT_01cc5174 < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 840;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance");
  return;
}

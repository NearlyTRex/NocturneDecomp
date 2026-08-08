// Name: engine_matrix.c_FUN_004ceb90
// Address: 004ceb90
// Address Range: [[004ceb90, 004cebf5]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004ceb90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_matrix_c_FUN_004ceb90(void)

{
  _DAT_01cc5174 = _DAT_01cc5174 + -1;
  if (_DAT_01cc5174 < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 1494;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance4");
  }
  g_RelativeX = *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0);
  g_RelativeY = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5308);
  g_RelativeZ = *(int *)(_DAT_01cc5174 * 4 + 0x1cc5330);
  return;
}

// Name: engine_matrix.c_FUN_004ceae0
// Address: 004ceae0
// Address Range: [[004ceae0, 004ceb80]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _DAT_01cc5174;
  iVar1 = g_RelativeY;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = g_RelativeX;
  iVar2 = g_RelativeZ;
  *(int *)(iVar3 * 4 + 0x1cc5308) = g_RelativeY;
  *(int *)(iVar3 * 4 + 0x1cc5330) = g_RelativeZ;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  g_RelativeX = g_RelativeX - param_1;
  g_RelativeY = iVar1 - param_2;
  g_RelativeZ = iVar2 - param_3;
  if (_DAT_01cc5174 < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 1481;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance3");
  return;
}

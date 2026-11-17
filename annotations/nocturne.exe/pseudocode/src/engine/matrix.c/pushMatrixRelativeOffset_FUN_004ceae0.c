// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_004ceae0
// Address: 004ceae0
// Address Range: [[004ceae0, 004ceb80]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ceae0(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ceae0(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_INT_01cc5174;
  iVar1 = g_RelativeY;
  g_INT_ARRAY_01cc52e0[g_INT_01cc5174] = g_RelativeX;
  iVar2 = g_RelativeZ;
  g_INT_ARRAY_01cc5308[iVar3] = g_RelativeY;
  g_INT_ARRAY_01cc5330[iVar3] = g_RelativeZ;
  g_INT_01cc5174 = g_INT_01cc5174 + 1;
  g_RelativeX = g_RelativeX - offset_x;
  g_RelativeY = iVar1 - offset_y;
  g_RelativeZ = iVar2 - offset_z;
  if (g_INT_01cc5174 < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 1481;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Matrix unbalance3");
  return;
}

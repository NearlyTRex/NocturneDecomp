// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640
// Address: 0050e640
// Address Range: [[0050e640, 0050e6e0]]
// Convention: __cdecl
// Signature: void engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x, int offset_y, int offset_z)

#include "nocturne.h"

void __cdecl
engine_matrix_c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_MatrixStackIndex;
  iVar1 = g_RelativeY;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  iVar2 = g_RelativeZ;
  g_MatrixStack_RelY[iVar3] = g_RelativeY;
  g_MatrixStack_RelZ[iVar3] = g_RelativeZ;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  g_RelativeX = g_RelativeX - offset_x;
  g_RelativeY = iVar1 - offset_y;
  g_RelativeZ = iVar2 - offset_z;
  if (g_MatrixStackIndex < 10) {
    return;
  }
  g_CurrentFilename = "..\\engine\\matrix.c";
  g_CurrentLineNumber = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance3");
  return;
}

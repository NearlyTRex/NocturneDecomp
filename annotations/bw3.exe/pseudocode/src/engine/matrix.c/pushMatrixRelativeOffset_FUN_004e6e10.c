// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_004e6e10
// Address: 004e6e10
// Address Range: [[004e6e10, 004e6eb0]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004e6e10(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004e6e10(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_INT_01d726a0;
  iVar1 = g_INT_01c6e2d0;
  g_INT_ARRAY_01d7280c[g_INT_01d726a0] = g_INT_01c6e2cc;
  iVar2 = g_INT_01c6e2d4;
  g_INT_ARRAY_01d72834[iVar3] = g_INT_01c6e2d0;
  g_INT_ARRAY_01d7285c[iVar3] = g_INT_01c6e2d4;
  g_INT_01d726a0 = g_INT_01d726a0 + 1;
  g_INT_01c6e2cc = g_INT_01c6e2cc - offset_x;
  g_INT_01c6e2d0 = iVar1 - offset_y;
  g_INT_01c6e2d4 = iVar2 - offset_z;
  if (g_INT_01d726a0 < 10) {
    return;
  }
  g_CHAR_PTR_01d71de0 = "..\\engine\\matrix.c";
  g_INT_01d71de4 = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance3");
  return;
}

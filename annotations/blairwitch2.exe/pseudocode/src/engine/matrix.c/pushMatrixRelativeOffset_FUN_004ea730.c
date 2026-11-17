// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_004ea730
// Address: 004ea730
// Address Range: [[004ea730, 004ea7d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ea730(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ea730(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_INT_01d05014;
  iVar1 = g_INT_01c38b70;
  g_INT_ARRAY_01d05180[g_INT_01d05014] = g_INT_01c38b6c;
  iVar2 = g_INT_01c38b74;
  g_INT_ARRAY_01d051a8[iVar3] = g_INT_01c38b70;
  g_INT_ARRAY_01d051d0[iVar3] = g_INT_01c38b74;
  g_INT_01d05014 = g_INT_01d05014 + 1;
  g_INT_01c38b6c = g_INT_01c38b6c - offset_x;
  g_INT_01c38b70 = iVar1 - offset_y;
  g_INT_01c38b74 = iVar2 - offset_z;
  if (g_INT_01d05014 < 10) {
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\engine\\matrix.c";
  g_INT_01d046a4 = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance3");
  return;
}

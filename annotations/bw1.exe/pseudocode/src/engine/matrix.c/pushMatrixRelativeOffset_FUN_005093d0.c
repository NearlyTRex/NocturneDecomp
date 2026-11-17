// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_005093d0
// Address: 005093d0
// Address Range: [[005093d0, 00509470]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_005093d0(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_005093d0(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = g_INT_01d1dd74;
  iVar1 = g_INT_01c51d30;
  g_INT_ARRAY_01d1dee0[g_INT_01d1dd74] = g_INT_01c51d2c;
  iVar2 = g_INT_01c51d34;
  g_INT_ARRAY_01d1df08[iVar3] = g_INT_01c51d30;
  g_INT_ARRAY_01d1df30[iVar3] = g_INT_01c51d34;
  g_INT_01d1dd74 = g_INT_01d1dd74 + 1;
  g_INT_01c51d2c = g_INT_01c51d2c - offset_x;
  g_INT_01c51d30 = iVar1 - offset_y;
  g_INT_01c51d34 = iVar2 - offset_z;
  if (g_INT_01d1dd74 < 10) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\engine\\matrix.c";
  g_INT_01d1d404 = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance3");
  return;
}

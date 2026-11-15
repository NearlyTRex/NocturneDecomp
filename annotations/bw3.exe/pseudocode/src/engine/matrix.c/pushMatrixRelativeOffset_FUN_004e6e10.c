// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_004e6e10
// Address: 004e6e10
// Address Range: [[004e6e10, 004e6eb0]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004e6e10(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004e6e10(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _DAT_01d726a0;
  iVar1 = _DAT_01c6e2d0;
  *(int *)(_DAT_01d726a0 * 4 + 0x1d7280c) = _DAT_01c6e2cc;
  iVar2 = _DAT_01c6e2d4;
  *(int *)(iVar3 * 4 + 0x1d72834) = _DAT_01c6e2d0;
  *(int *)(iVar3 * 4 + 0x1d7285c) = _DAT_01c6e2d4;
  _DAT_01d726a0 = _DAT_01d726a0 + 1;
  _DAT_01c6e2cc = _DAT_01c6e2cc - offset_x;
  _DAT_01c6e2d0 = iVar1 - offset_y;
  _DAT_01c6e2d4 = iVar2 - offset_z;
  if (_DAT_01d726a0 < 10) {
    return;
  }
  _DAT_01d71de0 = "..\\engine\\matrix.c";
  _DAT_01d71de4 = 0x5cc;
  core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance3");
  return;
}

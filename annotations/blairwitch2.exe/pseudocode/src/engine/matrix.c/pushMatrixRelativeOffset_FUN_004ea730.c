// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_004ea730
// Address: 004ea730
// Address Range: [[004ea730, 004ea7d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ea730(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_004ea730(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _DAT_01d05014;
  iVar1 = _DAT_01c38b70;
  *(int *)(_DAT_01d05014 * 4 + 0x1d05180) = _DAT_01c38b6c;
  iVar2 = _DAT_01c38b74;
  *(int *)(iVar3 * 4 + 0x1d051a8) = _DAT_01c38b70;
  *(int *)(iVar3 * 4 + 0x1d051d0) = _DAT_01c38b74;
  _DAT_01d05014 = _DAT_01d05014 + 1;
  _DAT_01c38b6c = _DAT_01c38b6c - offset_x;
  _DAT_01c38b70 = iVar1 - offset_y;
  _DAT_01c38b74 = iVar2 - offset_z;
  if (_DAT_01d05014 < 10) {
    return;
  }
  _DAT_01d046a0 = "..\\engine\\matrix.c";
  _DAT_01d046a4 = 0x5cc;
  core_main_c_FUN_004e4500("Matrix unbalance3");
  return;
}

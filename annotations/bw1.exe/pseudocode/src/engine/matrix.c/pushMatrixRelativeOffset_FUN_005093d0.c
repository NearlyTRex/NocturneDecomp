// Name: engine_matrix.c_pushMatrixRelativeOffset_FUN_005093d0
// Address: 005093d0
// Address Range: [[005093d0, 00509470]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_005093d0(int offset_x,int offset_y,int offset_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_pushMatrixRelativeOffset_FUN_005093d0(int offset_x,int offset_y,int offset_z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _DAT_01d1dd74;
  iVar1 = _DAT_01c51d30;
  *(int *)(_DAT_01d1dd74 * 4 + 0x1d1dee0) = _DAT_01c51d2c;
  iVar2 = _DAT_01c51d34;
  *(int *)(iVar3 * 4 + 0x1d1df08) = _DAT_01c51d30;
  *(int *)(iVar3 * 4 + 0x1d1df30) = _DAT_01c51d34;
  _DAT_01d1dd74 = _DAT_01d1dd74 + 1;
  _DAT_01c51d2c = _DAT_01c51d2c - offset_x;
  _DAT_01c51d30 = iVar1 - offset_y;
  _DAT_01c51d34 = iVar2 - offset_z;
  if (_DAT_01d1dd74 < 10) {
    return;
  }
  _DAT_01d1d400 = "..\\engine\\matrix.c";
  _DAT_01d1d404 = 0x5cc;
  core_main_c_FUN_005030e0("Matrix unbalance3");
  return;
}

// Name: engine_matrix.c_FUN_005093ce
// Address: 005093ce
// Address Range: [[005093ce, 00509470]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_005093ce(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_005093ce(int param_1,int param_2,int param_3)

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
  _DAT_01c51d2c = _DAT_01c51d2c - param_1;
  _DAT_01c51d30 = iVar1 - param_2;
  _DAT_01c51d34 = iVar2 - param_3;
  if (_DAT_01d1dd74 < 10) {
    return;
  }
  _DAT_01d1d400 = "..\\engine\\matrix.c";
  _DAT_01d1d404 = 0x5cc;
  core_main_c_FUN_005030e0("Matrix unbalance3");
  return;
}

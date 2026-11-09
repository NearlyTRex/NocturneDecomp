// Name: engine_matrix.c_FUN_004ea72e
// Address: 004ea72e
// Address Range: [[004ea72e, 004ea7d0]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004ea72e(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_004ea72e(int param_1,int param_2,int param_3)

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
  _DAT_01c38b6c = _DAT_01c38b6c - param_1;
  _DAT_01c38b70 = iVar1 - param_2;
  _DAT_01c38b74 = iVar2 - param_3;
  if (_DAT_01d05014 < 10) {
    return;
  }
  _DAT_01d046a0 = "..\\engine\\matrix.c";
  _DAT_01d046a4 = 0x5cc;
  core_main_c_FUN_004e4500("Matrix unbalance3");
  return;
}

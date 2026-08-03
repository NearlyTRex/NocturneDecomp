// Name: engine_matrix.c_FUN_004ceae0
// Address: 004ceae0
// Address Range: [[004ceae0, 004ceb80]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _DAT_01cc5174;
  iVar1 = _DAT_01c039bc;
  *(int *)(_DAT_01cc5174 * 4 + 0x1cc52e0) = _DAT_01c039b8;
  iVar2 = _DAT_01c039c0;
  *(int *)(iVar3 * 4 + 0x1cc5308) = _DAT_01c039bc;
  *(int *)(iVar3 * 4 + 0x1cc5330) = _DAT_01c039c0;
  _DAT_01cc5174 = _DAT_01cc5174 + 1;
  _DAT_01c039b8 = _DAT_01c039b8 - param_1;
  _DAT_01c039bc = iVar1 - param_2;
  _DAT_01c039c0 = iVar2 - param_3;
  if (_DAT_01cc5174 < 10) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\engine\\matrix.c";
  g_INT_01cc4804 = 0x5c9;
  core_main_c_FUN_004c8440("Matrix unbalance3");
  return;
}

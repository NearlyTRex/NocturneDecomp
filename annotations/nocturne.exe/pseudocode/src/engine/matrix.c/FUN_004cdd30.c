// Name: engine_matrix.c_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cde00]]
// Convention: unknown
// Signature: int engine_matrix_c_FUN_004cdd30(int param_1)

#include "nocturne.h"

int engine_matrix_c_FUN_004cdd30(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    PTR_01cc4800 = "..\\engine\\matrix.c";
    INT_01cc4804 = 0x38e;
    core_main_c_FUN_004c8440("sqrt out of domain!");
  }
  iVar1 = param_1 / 200 + 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  return (param_1 / iVar1 + iVar1) / 2;
}

// Name: engine_matrix.c_FUN_005093d0
// Address: 005093d0
// Address Range: [[005093d0, 00509470]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_005093d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_matrix_c_FUN_005093d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar3 = _DAT_01d1dd74;
  iVar1 = _DAT_01c51d30;
  *(int *)(_DAT_01d1dd74 * 4 + 0x1d1dee0) = _DAT_01c51d2c;
  iVar2 = _DAT_01c51d34;
  *(int *)(iVar3 * 4 + 0x1d1df08) = _DAT_01c51d30;
  *(int *)(iVar3 * 4 + 0x1d1df30) = _DAT_01c51d34;
  _DAT_01d1dd74 = _DAT_01d1dd74 + 1;
  _DAT_01c51d2c = _DAT_01c51d2c - in_stack_00000004;
  _DAT_01c51d30 = iVar1 - in_stack_00000008;
  _DAT_01c51d34 = iVar2 - in_stack_0000000c;
  if (_DAT_01d1dd74 < 10) {
    return;
  }
  _DAT_01d1d400 = "..\\engine\\matrix.c";
  _DAT_01d1d404 = 0x5cc;
  core_main_c_FUN_005030e0("Matrix unbalance3");
  return;
}

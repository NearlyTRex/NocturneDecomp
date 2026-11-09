// Name: engine_matrix.c_FUN_004e4dd0
// Address: 004e4dd0
// Address Range: [[004e4dd0, 004e4e08]]
// Convention: unknown
// Signature: int engine_matrix_c_FUN_004e4dd0(uint param_1)

#include "nocturne.h"

int engine_matrix_c_FUN_004e4dd0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (int)param_1 >> 8 & 0xff;
  iVar1 = *(int *)(uVar2 * 4 + 0x1d72240);
  iVar3 = (*(int *)(uVar2 * 4 + 0x1d72244) - iVar1) * (param_1 & 0xff);
  iVar4 = iVar3 >> 0x1f;
  return ((int)((iVar3 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8) + iVar1;
}

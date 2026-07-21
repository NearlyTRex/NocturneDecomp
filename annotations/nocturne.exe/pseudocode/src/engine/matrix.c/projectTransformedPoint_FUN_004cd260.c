// Name: engine_matrix.c_projectTransformedPoint_FUN_004cd260
// Address: 004cd260
// Address Range: [[004cd260, 004cd2fd]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = _DAT_01c00c48;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = *param_1;
  if (iVar2 < 1) {
    param_1[4] = -0x7ffffff0;
    return;
  }
  bVar6 = iVar2 < iVar3;
  if (iVar3 < -iVar2) {
    bVar6 = bVar6 | 2;
  }
  if (iVar2 < iVar1) {
    bVar6 = bVar6 | 4;
  }
  if (iVar1 < -iVar2) {
    bVar6 = bVar6 | 8;
  }
  if (bVar6 != 0) {
    param_1[4] = bVar6 | 0x80000000;
    return;
  }
  param_1[3] = (int)(0x7fffffff / (longlong)iVar2);
  iVar5 = _DAT_01c00c4c;
  param_1[4] = (int)(((longlong)iVar3 * (longlong)iVar4) / (longlong)iVar2) + _DAT_01c00c50;
  param_1[5] = (int)(((longlong)iVar1 * (longlong)iVar5) / (longlong)iVar2) + _DAT_01c00c54;
  return;
}

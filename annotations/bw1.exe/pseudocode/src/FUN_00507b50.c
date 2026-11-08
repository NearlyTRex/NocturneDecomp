// Name: FUN_00507b50
// Address: 00507b50
// Address Range: [[00507b50, 00507bed]]
// Convention: unknown
// Signature: void FUN_00507b50(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507b50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = _DAT_01c4eff8;
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
  iVar5 = _DAT_01c4effc;
  param_1[4] = (int)(((longlong)iVar3 * (longlong)iVar4) / (longlong)iVar2) + _DAT_01c4f000;
  param_1[5] = (int)(((longlong)iVar1 * (longlong)iVar5) / (longlong)iVar2) + _DAT_01c4f004;
  return;
}

// Name: FUN_0049ce40
// Address: 0049ce40
// Address Range: [[0049ce40, 0049cf47]]
// Convention: unknown
// Signature: void FUN_0049ce40(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ce40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1[1] <= param_1[2]) || (param_1[1] < 1)) {
    param_1[0xb] = param_1[9];
    param_1[0xc] = param_1[10];
    return;
  }
  iVar3 = param_1[10] - param_1[9];
  if (iVar3 < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x12cb;
    FUN_005030e0("CEdScrollBar::computeThumb - invalid dimensions");
  }
  iVar1 = (param_1[2] * iVar3) / param_1[1];
  if (param_1[4] == 0) {
    iVar2 = param_1[7] - param_1[5];
  }
  else {
    iVar2 = param_1[8] - param_1[6];
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  iVar3 = param_1[9] + ((iVar3 - iVar1) * *param_1) / (param_1[1] - param_1[2]);
  param_1[0xb] = iVar3;
  if (iVar3 < param_1[9]) {
    param_1[0xb] = param_1[9];
  }
  iVar1 = param_1[0xb] + iVar1;
  param_1[0xc] = iVar1;
  if (param_1[10] < iVar1) {
    param_1[0xc] = param_1[10];
    param_1[0xb] = param_1[0xb] - (iVar1 - param_1[10]);
  }
  if (param_1[9] <= param_1[0xb]) {
    return;
  }
  param_1[0xb] = param_1[9];
  return;
}

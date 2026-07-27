// Name: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
// Address: 00476800
// Address Range: [[00476800, 00476907]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(int *param_1)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(int *param_1)

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
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xefb;
    core_main_c_FUN_004c8440("CEdScrollBar::computeThumb - invalid dimensions");
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

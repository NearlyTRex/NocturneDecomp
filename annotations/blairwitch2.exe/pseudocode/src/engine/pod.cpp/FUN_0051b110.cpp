// Name: FUN_0051b110
// Address: 0051b110
// Address Range: [[0051b110, 0051b1dc]]
// Convention: unknown
// Signature: void FUN_0051b110(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b110(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (99 < *param_1) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3eb;
    FUN_004e4500("Too many .POD files at once!");
  }
  iVar1 = FUN_005b8be2(0x42c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00519e50(iVar1);
  }
  param_1[*param_1 + 1] = iVar2;
  if (param_1[*param_1 + 1] == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3f1;
    FUN_004e4500("Out of memory!");
  }
  iVar2 = FUN_00519f00(param_1[*param_1 + 1],param_2);
  if (iVar2 != 0) {
    *param_1 = *param_1 + 1;
    return;
  }
  _DAT_01d046a0 = "..\\engine\\pod.cpp";
  _DAT_01d046a4 = 0x3f2;
  FUN_004e4500("Can't mount %s",param_2);
  *param_1 = *param_1 + 1;
  return;
}

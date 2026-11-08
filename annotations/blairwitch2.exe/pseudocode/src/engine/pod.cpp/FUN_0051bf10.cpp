// Name: FUN_0051bf10
// Address: 0051bf10
// Address Range: [[0051bf10, 0051bf9d]]
// Convention: unknown
// Signature: void FUN_0051bf10(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051bf10(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x64e;
    FUN_004e4500("CPod::dismountPod - invalid index");
  }
  if (param_1[param_2 + 1] != 0) {
    uVar2 = FUN_00519ec0(param_1[param_2 + 1],0);
    FUN_005b7fdc(uVar2);
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    piVar3 = param_1 + param_2;
    do {
      piVar3[1] = piVar3[2];
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    } while (param_2 < *param_1);
  }
  param_1[*param_1 + 1] = 0;
  return;
}

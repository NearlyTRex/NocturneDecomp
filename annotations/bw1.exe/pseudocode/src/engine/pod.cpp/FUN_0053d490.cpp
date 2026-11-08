// Name: FUN_0053d490
// Address: 0053d490
// Address Range: [[0053d490, 0053d51d]]
// Convention: unknown
// Signature: void FUN_0053d490(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053d490(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x6be;
    FUN_005030e0("CPod::dismountPod - invalid index");
  }
  if (param_1[param_2 + 1] != 0) {
    uVar2 = FUN_0053b210(param_1[param_2 + 1],0);
    FUN_005c0344(uVar2);
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

// Name: crt_unknown.c_FUN_005a96f0
// Address: 005a96f0
// Address Range: [[005a96f0, 005a9766]]
// Convention: unknown
// Signature: int * crt_unknown_c_FUN_005a96f0(int *param_1)

#include "nocturne.h"

int * FUN_005a96f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  for (piVar2 = DAT_006075c4; (piVar2 != (int *)0x0 && (piVar2 <= param_1));
      piVar2 = (int *)piVar2[2]) {
    piVar1 = piVar2;
  }
  param_1[1] = (int)piVar1;
  param_1[2] = (int)piVar2;
  if (piVar1 == (int *)0x0) {
    DAT_006075c4 = param_1;
  }
  else {
    piVar1[2] = (int)param_1;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)param_1;
  }
  piVar1 = param_1 + 8;
  piVar2 = param_1 + 0xb;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = (int)piVar1;
  param_1[10] = (int)piVar1;
  param_1[3] = (int)piVar1;
  *piVar2 = *param_1 + -0x2c;
  *(uint *)((int)piVar2 + *param_1 + -0x2c) = 0xffffffff;
  return piVar2;
}

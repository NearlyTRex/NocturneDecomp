// Name: FUN_0053b130
// Address: 0053b130
// Address Range: [[0053b130, 0053b1b8]]
// Convention: unknown
// Signature: void FUN_0053b130(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b130(int param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (float *)0x0) {
    *(uint *)(param_1 + 0x161670) = 0;
    return;
  }
  local_10 = (int)ROUND(*param_2 * _DAT_005e3bc0);
  local_c = (int)ROUND(param_2[1] * _DAT_005e3bc0);
  local_8 = (int)ROUND(param_2[2] * _DAT_005e3bc0);
  FUN_005380a0(param_1,&local_10,0,0,0);
  uVar1 = DAT_0060b034;
  *(uint *)(param_1 + 0x161670) = 1;
  uVar2 = DAT_0060b03c;
  *(uint *)(param_1 + 0x161674) = uVar1;
  *(uint *)(param_1 + 0x16167c) = uVar2;
  *(uint *)(param_1 + 0x161678) = DAT_0060b038;
  return;
}

// Name: FUN_005557a0
// Address: 005557a0
// Address Range: [[005557a0, 00555828]]
// Convention: unknown
// Signature: void FUN_005557a0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005557a0(int param_1,float *param_2)

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
  local_10 = (int)ROUND(*param_2 * _DAT_00605000);
  local_c = (int)ROUND(param_2[1] * _DAT_00605000);
  local_8 = (int)ROUND(param_2[2] * _DAT_00605000);
  FUN_00552710(param_1,&local_10,0,0,0);
  uVar1 = DAT_00629034;
  *(uint *)(param_1 + 0x161670) = 1;
  uVar2 = DAT_0062903c;
  *(uint *)(param_1 + 0x161674) = uVar1;
  *(uint *)(param_1 + 0x16167c) = uVar2;
  *(uint *)(param_1 + 0x161678) = DAT_00629038;
  return;
}
